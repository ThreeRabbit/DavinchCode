using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ThreeRabbitPackage.DesignPattern;

public class LoginHandler : TRSingleton<LoginHandler>
{
	public void GoogleLogin()
	{
		GPGSManager.Instance.GPGSLogin();
	}
}
