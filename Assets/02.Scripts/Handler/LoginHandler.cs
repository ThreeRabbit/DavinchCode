using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ThreeRabbitPackage.DesignPattern;

public class LoginHandler : TRSingleton<LoginHandler>
{
	LoginProcedure loginProcedure;
	public void GoogleLogin()
	{
		loginProcedure = new LoginProcedure();
		loginProcedure.GoogleLogin();
	}
}
