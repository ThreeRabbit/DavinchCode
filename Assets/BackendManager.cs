using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.Events;
using ThreeRabbitPackage.DesignPattern;
using BackEnd;
using BackEnd.Tcp;

public class BackendManager : TRSingleton<BackendManager>
{
    public enum LogType { NONE, GREEN, YELLOW, RED}

    public void Init(UnityAction success = null, UnityAction<string> fail = null)
    {
        var bro = Backend.Initialize(true);
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

    public void GuestLogin(UnityAction success = null, UnityAction fail = null)
    {
        SendQueue.Enqueue(Backend.BMember.GuestLogin, "게스트 로그인으로 로그인함", callback => {
            if (callback.IsSuccess())
            {
                BackendLog(callback, LogType.GREEN);
                success?.Invoke();
            }
            else
            {
                BackendLog(callback, LogType.RED);
                fail?.Invoke();
            }
        });
    }

    public void TokenLogin(UnityAction success = null, UnityAction fail = null)
    {
        SendQueue.Enqueue(Backend.BMember.LoginWithTheBackendToken, (callback) =>
        {
            if (callback.IsSuccess())
            {
                BackendLog(callback, LogType.GREEN);
                success?.Invoke();
            }
            else
            {
                BackendLog(callback, LogType.RED);
                fail?.Invoke();
            }
        });
    }

    public void CreateNickname(string nickname, UnityAction success = null, UnityAction fail = null)
    {
        SendQueue.Enqueue(Backend.BMember.CreateNickname, nickname, ( callback ) =>
        {
            if(callback.IsSuccess())
            {
                BackendLog(callback, LogType.GREEN);
                success?.Invoke();
            }
            else
            {
                BackendLog(callback, LogType.RED);
                fail?.Invoke();
            }
        });
    }

    public void UpdateNickname(string nickname, UnityAction success = null, UnityAction fail = null)
    {
        SendQueue.Enqueue(Backend.BMember.UpdateNickname, nickname, ( callback ) =>
        {
            if(callback.IsSuccess())
            {
                BackendLog(callback, LogType.GREEN);
                success?.Invoke();
            }
            else
            {
                BackendLog(callback, LogType.RED);
                fail?.Invoke();
            }
        });
    }

    public void CheckNicknameDuplication(string nickname, UnityAction success = null, UnityAction<string> fail = null)
    {
        SendQueue.Enqueue(Backend.BMember.CheckNicknameDuplication, nickname, ( callback ) =>
        {
            if(callback.IsSuccess())
            {
                BackendLog(callback, LogType.GREEN);
                success?.Invoke();
            }
            else
            {
                BackendLog(callback, LogType.RED);
                fail?.Invoke(callback.GetMessage());
            }
        });
    }

    public void BackendLog(BackendReturnObject bro, LogType logType = LogType.NONE, string funcName = "")
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

    public void JoinMatchMakinServer()
    {
        ErrorInfo errorInfo = new ErrorInfo();
        Backend.Match.JoinMatchMakingServer(out errorInfo);
        Debug.Log(errorInfo);
    }

    public void CreateMatchRoom()
    {
        Backend.Match.CreateMatchRoom();
    }
}
