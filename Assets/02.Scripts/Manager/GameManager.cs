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
            },
            fail: (message) =>
            {
                TRLog.Red(message);
            });
        GPGSManager.Instance.Init(
            success: () =>
			{
                TRLog.Green("GPGS Init: Scuccess");
			},
            fail: ()=>
			{
                TRLog.Red("GPGS Init: Fail");
            });
    }

	private void Update()
	{
		if(Input.GetKey(KeyCode.A))
		{
            BackEnd.Backend.BMember.DeleteGuestInfo();
        }
	}
}

