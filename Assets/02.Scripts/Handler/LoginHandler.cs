using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ThreeRabbitPackage.DesignPattern;

public class LoginHandler : TRSingleton<LoginHandler>
{
	public void GoogleLogin()
	{
		BackendManager.Instance.FederationLogin(BackEnd.FederationType.Google, GPGSManager.Instance.GetTokens());
	}
}
