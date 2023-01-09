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
        BackendManager.Instance.TokenLogin(
            success: () =>
            {
                SceneManager.LoadSceneAsync("LobbyScene");
            },
            fail: () =>
            {
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

