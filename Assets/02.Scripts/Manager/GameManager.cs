using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using ThreeRabbitPackage.DesignPattern;
using System.Threading.Tasks;

public class GameManager : TRSingleton<GameManager>
{
    private void Awake()
    {
        base.Awake();
    }
    public void Init()
     {
        SendQueueManager.Instance.Init(
            success: () =>
            {
                TRLog.Green("SendQueueManager Init: Scuccess");
            },
            fail: () =>
            {
                TRLog.Red("SendQueueManager Init: Fail");
            });

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
            BackEnd.Backend.BMember.Logout();
        }
	}
}

