using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using ThreeRabbitPackage.DesignPattern;

public class GameManager : TRSingleton<GameManager>
{
    private new void Awake()
    {
        BackendManager.Instance.Init(
            success: () =>
            {
                BackendManager.Instance.MatchServerHandler();
                BackendManager.Instance.InGameServerHandler();
                LoginProcess();
            },
            fail: (message) =>
            {
                Debug.Log(message);
            });
    }

    public void LoginProcess()
    {
        // 1. 토큰 로그인을 시도한다.
        BackendManager.Instance.TokenLogin(
            success: () =>
            {
                SceneManager.LoadSceneAsync("LobbyScene");
            },
            fail: () =>
            {
                // 2. 토큰 로그인에 실패 시 게스트 로그인을 시도한다. 
                BackendManager.Instance.GuestLogin(
                    success: () =>
                    {
                        SceneManager.LoadSceneAsync("LobbyScene");
                    },
                    fail: () =>
                    {
                        Debug.Log("BackendManager: GuestLogin Fail");
                    });
            });
    }

    public void MatchingProcess(BackEnd.Tcp.MatchType matchType)
    {

    }
}

