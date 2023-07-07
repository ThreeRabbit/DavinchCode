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
                //LoginProcess();
            },
            fail: (message) =>
            {
                Debug.Log(message);
            });
    }

	private void Update()
	{
		if(Input.GetKey(KeyCode.A))
		{
            BackEnd.Backend.BMember.DeleteGuestInfo();
        }
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
                
            });
    }

    public void MatchingProcess(BackEnd.Tcp.MatchType matchType)
    {

    }
}

