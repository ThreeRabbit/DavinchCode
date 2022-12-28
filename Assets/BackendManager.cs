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
    public GameObject UICanvas;

    public enum LogType { NONE, GREEN, YELLOW, RED}
    private void Start()
    {
        Init();

        
        // Backend.Match.OnJoinMatchMakingServer += (ar) => 
        // {
        //     Debug.Log("매치서버 접속 성공");
        //     Debug.Log(ar);
        // };
    }

    public void Init(UnityAction success = null, UnityAction fail = null)
    {
        var bro = Backend.Initialize(true);

        if (bro.IsSuccess())
        {
            BackendLog(bro, LogType.GREEN);
            success?.Invoke();
        }
        else
        {
            BackendLog(bro, LogType.RED);
            fail?.Invoke();
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

    public void CheckNicknameDuplication(string nickname, UnityAction success = null, UnityAction fail = null)
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
                fail?.Invoke();
            }
        });
    }

    public void BackendLog(BackendReturnObject bro, LogType logType = LogType.NONE)
    {
        switch (logType)
        {
            case LogType.NONE:
                Debug.Log($"BackendManager: StatusCode - {bro.GetStatusCode()}, ErrorCode - {bro.GetErrorCode()}, Message - {bro.GetMessage()}");
            break;

            case LogType.GREEN:
                Debug.Log($"<color=green>BackendManager: StatusCode - {bro.GetStatusCode()}, ErrorCode - {bro.GetErrorCode()}, Message - {bro.GetMessage()}</color>");
            break;

            case LogType.YELLOW:
               Debug.LogWarning($"<color=yellow>BackendManager: StatusCode - {bro.GetStatusCode()}, ErrorCode - {bro.GetErrorCode()}, Message - {bro.GetMessage()}</color>");
            break;

            case LogType.RED:
                Debug.LogError($"<color=red>BackendManager: StatusCode - {bro.GetStatusCode()}, ErrorCode - {bro.GetErrorCode()}, Message - {bro.GetMessage()}</color>");
            break;

            default:
                Debug.Log($"BackendManager: StatusCode - {bro.GetStatusCode()}, ErrorCode - {bro.GetErrorCode()}, Message - {bro.GetMessage()}");
            break;
        }
    }
    public void LoginProcess()
    {
        Debug.Log("BackendManager: LoginProcess");
        TokenLogin(
            success: () =>
            {
                Debug.Log("BackendManager: TokenLogin Success");
                UICanvas.SetActive(true);
            },
            fail: () =>
            {
                Debug.Log("BackendManager: TokenLogin Fail");
                GuestLogin(
                    success: () =>
                    {
                        Debug.Log("BackendManager: GuestLogin Success");
                        UICanvas.SetActive(true);
                    },
                    fail: () =>
                    {
                        Debug.Log("BackendManager: GuestLogin Fail");

                    });
            });
    }

    public void JoinMatchMakingServer()
    {
        ErrorInfo errorInfo = new ErrorInfo();

        Backend.Match.JoinMatchMakingServer(out errorInfo);

        Debug.Log(errorInfo);
    }

    public void Update()
    {
        Backend.AsyncPoll();
        // Backend.Match.Poll();
    }
}