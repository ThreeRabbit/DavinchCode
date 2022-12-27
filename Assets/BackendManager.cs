using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.Events;
using ThreeRabbitPackage.DesignPattern;
using BackEnd;

public class BackendManager : TRSingleton<BackendManager>
{
    public GameObject UICanvas;

    private void Start()
    {
        Init(
            success: () =>
            {
                Debug.Log("BackendManager: Init Success");
                LoginProcess();
            },
            fail: () =>
            {
                Debug.Log("BackendManager: Init Fail");
            }
        );
    }

    public void Init(UnityAction success = null, UnityAction fail = null)
    {
        Debug.Log("BackendManager: Init");
        var bro = Backend.Initialize(true);

        if (bro.IsSuccess())
        {
            Debug.Log("BackendManager: Init Success");
            success?.Invoke();
        }
        else
        {
            Debug.Log("BackendManager: Init Fail");
            fail?.Invoke();
        }
    }

    public void GuestLogin(UnityAction success = null, UnityAction fail = null)
    {
        SendQueue.Enqueue(Backend.BMember.GuestLogin, "게스트 로그인으로 로그인함", callback => {
            if (callback.IsSuccess())
            {
                success?.Invoke();
            }
            else
            {
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
                success?.Invoke();
            }
            else
            {
                fail?.Invoke();
            }
        });
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
}
