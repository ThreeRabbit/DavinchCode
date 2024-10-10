using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using ThreeRabbitPackage;
using ThreeRabbitPackage.DesignPattern;
using BackEnd;
using BackEnd.Tcp;
using UniRx;
using System.Threading.Tasks;
using System;

public class BackendManager : TRSingleton<BackendManager>
{
    #region Private Variable
    private enum LogType { NONE, GREEN, YELLOW, RED}
    #endregion

    #region Log
    private void BackendLog(BackendReturnObject bro, LogType logType = LogType.NONE, string funcName = "")
    {
        switch (logType)
        {
            case LogType.NONE:
                Debug.Log($"BackendManager {funcName}: StatusCode - {bro.GetStatusCode()}, ErrorCode - {bro.GetErrorCode()}, Message - {bro.GetMessage()}");
                break;

            case LogType.GREEN:
                Debug.Log($"<color=green>BackendManager {funcName}: StatusCode - {bro.GetStatusCode()}, ErrorCode - {bro.GetErrorCode()}, Message - {bro.GetMessage()}</color>");
                break;

            case LogType.YELLOW:
                Debug.LogWarning($"<color=yellow>BackendManager {funcName}: StatusCode - {bro.GetStatusCode()}, ErrorCode - {bro.GetErrorCode()}, Message - {bro.GetMessage()}</color>");
                break;

            case LogType.RED:
                Debug.LogError($"<color=red>BackendManager {funcName}: StatusCode - {bro.GetStatusCode()}, ErrorCode - {bro.GetErrorCode()}, Message - {bro.GetMessage()}</color>");
                break;

            default:
                Debug.Log($"BackendManager {funcName}: StatusCode - {bro.GetStatusCode()}, ErrorCode - {bro.GetErrorCode()}, Message - {bro.GetMessage()}");
                break;
        }
    }
    private void BackendLog(string message, LogType logType = LogType.NONE, string funcName = "")
    {
        switch (logType)
        {
            case LogType.NONE:
                Debug.Log($"BackendManager {funcName}: {message}");
                break;

            case LogType.GREEN:
                Debug.Log($"<color=green> BackendManager {funcName}: {message} </color>");
                break;

            case LogType.YELLOW:
                Debug.LogWarning($"<color=yellow> BackendManager {funcName}: {message} </color>");
                break;

            case LogType.RED:
                Debug.LogError($"<color=red> BackendManager {funcName}: {message} </color>");
                break;

            default:
                Debug.Log($"BackendManager {funcName}: {message}");
                break;
        }
    }
    #endregion

    #region Private Method
    private void Awake()
    {
        base.Awake();
    }
    #endregion

    #region Backend Base

    public void Init(UnityAction success = null, UnityAction<string> fail = null)
    {
        var bro = Backend.Initialize();
        if (bro.IsSuccess())
        {
            BackendLog(bro, LogType.GREEN, "Init");
            success?.Invoke();
        }
        else
        {
            BackendLog(bro, LogType.RED, "Init");
            fail?.Invoke(bro.GetMessage());
        }
    }

    #region Table
    public Task<bool> RequestTableInsertAsync(string tableName, Param param)
    {
        var tcs = new TaskCompletionSource<bool>();

        
        SendQueue.Enqueue(Backend.GameData.Insert, tableName, param, (callback) =>
        {
            if(callback.IsSuccess())
            {
                BackendLog(callback, LogType.GREEN, "RequestTableInsert");
                tcs.SetResult(true);
            }
            else
            {
                BackendLog(callback, LogType.RED, "RequestTableInsert");
                tcs.SetResult(false);
            }
        });

        return tcs.Task;
    }

    public Task<string> RequestRowInDateAsync(string tableName)
    {
        var tcs = new TaskCompletionSource<string>();
        var inDate = string.Empty;

        SendQueue.Enqueue(Backend.GameData.GetMyData, tableName, new Where(), 10, bro =>
        {
            if (bro.IsSuccess() == false)
            {
                // 요청 실패 처리
                BackendLog(bro, LogType.RED, "RequestRowInDateAsync - fail");
                tcs.SetResult(inDate);
            }
            if (bro.GetReturnValuetoJSON()["rows"].Count <= 0)
            {
                // 요청이 성공해도 where 조건에 부합하는 데이터가 없을 수 있기 때문에
                // 데이터가 존재하는지 확인
                // 위와 같은 new Where() 조건의 경우 테이블에 row가 하나도 없으면 Count가 0 이하 일 수 있다.
                BackendLog(bro, LogType.RED, "RequestRowInDateAsync - zero count");
                tcs.SetResult(inDate);
            }
            // 검색한 데이터의 모든 row의 inDate 값 확인
            for (int i = 0; i < bro.Rows().Count; ++i)
            {
                inDate = bro.FlattenRows()[0]["inDate"].ToString();
            }

            BackendLog(bro, LogType.GREEN, "RequestRowInDateAsync");
            tcs.SetResult(inDate);
        });

        return tcs.Task;
    }

    public Task<bool> RequestUpdateV2(string tableName, string inDate, string owner_inDate, Param param)
    {
        var tcs = new TaskCompletionSource<bool>();

        SendQueue.Enqueue(Backend.GameData.UpdateV2, tableName, inDate, owner_inDate, param, (callback) =>
        {
            if (callback.IsSuccess())
            {
                tcs.SetResult(true);
                BackendLog(callback, LogType.GREEN, "RequestUpdateV2");
            }
            else
            {
                tcs.SetResult(false);
                BackendLog(callback, LogType.RED, "RequestUpdateV2");
            }
        });

        return tcs.Task;
    }
    public Task<LitJson.JsonData> RequestGetMyData(string tableName, string rowInDate, string[] select)
    {
        var tcs = new TaskCompletionSource<LitJson.JsonData>();

        SendQueue.Enqueue(Backend.GameData.GetMyData, tableName, rowInDate, select, (callback) =>
        {
            if(callback.IsSuccess())
            {
                tcs.SetResult(callback.GetFlattenJSON()["row"]);
                BackendLog(callback, LogType.GREEN, "RequestGetMyData");
            }
            else
            {
                tcs.SetResult(null);
                BackendLog(callback, LogType.RED, "RequestGetMyData");
            }
        });

        return tcs.Task;
    }

    public Task<LitJson.JsonData> RequestUserInfoAsync()
    {
        TaskCompletionSource<LitJson.JsonData> tcs = new TaskCompletionSource<LitJson.JsonData>();

        SendQueue.Enqueue(Backend.BMember.GetUserInfo, (callback) =>
        {
            if (callback.GetReturnValuetoJSON() != null &&
                callback.GetReturnValuetoJSON()["row"] != null &&
                this != null)
            {
                var row = callback.GetReturnValuetoJSON()["row"];
                tcs.SetResult(row);
            }
            else
            {
                throw new InvalidOperationException("Invalid response from backend");
            }
        });

        return tcs.Task;
    }
    #endregion
    public Task<bool> GuestLoginAsync(UnityAction success = null, UnityAction<BackendReturnObject> fail = null)
    {
        var tcs = new TaskCompletionSource<bool>();

        SendQueue.Enqueue(Backend.BMember.GuestLogin, (callback) =>
        {
            if (callback.IsSuccess())
            {
                BackendLog(callback, LogType.GREEN, "GuestLogin");
                success?.Invoke();
                tcs.SetResult(true);
            }
            else
            {
                BackendLog(callback, LogType.RED, "GuestLogin");
                fail?.Invoke(callback);
                tcs.SetResult(false);
            }
        });

        return tcs.Task;
    }

    public Task<bool> TokenLoginAsync(UnityAction success = null, UnityAction<BackendReturnObject> fail = null)
    {
        var tcs = new TaskCompletionSource<bool>();

        SendQueue.Enqueue(Backend.BMember.LoginWithTheBackendToken, (callback) =>
        {
            if (callback.IsSuccess())
            {
                BackendLog(callback, LogType.GREEN, "TokenLogin");
                success?.Invoke();
                tcs.SetResult(true);
            }
            else if(callback.StatusCode == 400)
            {
                BackendLog(callback, LogType.YELLOW, "TockenLogin");
                fail?.Invoke(callback);
                tcs.SetResult(false);
            }
            else
            {
                BackendLog(callback, LogType.RED, "TockenLogin");
                fail?.Invoke(callback);
                tcs.SetResult(false);
            }
        });

        return tcs.Task;
    }

    public Task<bool> FederationLoginAsync(FederationType federationType, string token, UnityAction success = null, UnityAction fail = null)
    {
        var tcs = new TaskCompletionSource<bool>();

        SendQueue.Enqueue(Backend.BMember.AuthorizeFederation, token, federationType, (callback) =>
        {
            if(callback.IsSuccess())
			{
                BackendLog(callback, LogType.GREEN, $"FederationLoginAsync - {federationType} Login Success");
                success?.Invoke();
                tcs.SetResult(true);
            }
			else 
            {
                BackendLog(callback, LogType.RED, $"FederationLoginAsync - {federationType} Login Fail");
                fail?.Invoke();
                tcs.SetResult(false);
            }
        });

        return tcs.Task;
    }

    public Task<string> GetGPGSAccessToken(string authCode, string redirectUri = null)
    {
        var tcs = new TaskCompletionSource<string>();

        SendQueue.Enqueue(Backend.BMember.GetGPGS2AccessToken, authCode, callback => {
            if (callback.IsSuccess())
            {
                var accesToken = callback.GetReturnValuetoJSON()["access_token"].ToString();
                tcs.SetResult(accesToken);
            }
            else
            {
                tcs.SetResult(null);
            }
        });

        return tcs.Task;
    }

    public Task<bool> CreateNickname(string nickname, UnityAction success = null, UnityAction fail = null)
    {
        var tcs = new TaskCompletionSource<bool>();

        SendQueue.Enqueue(Backend.BMember.CreateNickname, nickname, (callback) =>
        {
            if (callback.IsSuccess())
            {
                BackendLog(callback, LogType.GREEN, "CreateNickname");
                success?.Invoke();
                tcs.SetResult(true);
            }
            else
            {
                BackendLog(callback, LogType.RED, "CreateNickname");
                fail?.Invoke();
                tcs.SetResult(false);
            }
        });

        return tcs.Task;
    }

    public void UpdateNickname(string nickname, UnityAction success = null, UnityAction fail = null)
    {
        SendQueue.Enqueue(Backend.BMember.UpdateNickname, nickname, (callback) =>
        {
            if (callback.IsSuccess())
            {
                BackendLog(callback, LogType.GREEN, "UpdateNickname");
                success?.Invoke();
            }
            else
            {
                BackendLog(callback, LogType.RED, "UpdateNickname");
                fail?.Invoke();
            }
        });
    }

    public Task<bool> CheckNicknameDuplication(string nickname, UnityAction success = null, UnityAction<string> fail = null)
    {
        var tcs = new TaskCompletionSource<bool>();

        SendQueue.Enqueue(Backend.BMember.CheckNicknameDuplication, nickname, (callback) =>
        {
            if (callback.IsSuccess())
            {
                BackendLog(callback, LogType.GREEN, "CheckNicknameDuplication");
                success?.Invoke();
                tcs.SetResult(true);
            }
            else
            {
                BackendLog(callback, LogType.RED, "CheckNicknamDuplication");
                fail?.Invoke(callback.GetMessage()); // GetMessage 대신 StatusCode를 반환하고 받은 곳에서 처리하도록 변경 필요
                tcs.SetResult(false);
            }
        });

        return tcs.Task;
    }

    #endregion
}
