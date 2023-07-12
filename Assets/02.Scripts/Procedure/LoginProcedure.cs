using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ThreeRabbitPackage;
using UnityEngine.SceneManagement;
using System;


public class LoginProcedure
{
	public void GoogleLogin()
	{
		GPGSManager.Instance.GPGSLogin(
			success: () =>
			{
				BackendManager.Instance.FederationLogin(
					federationType: BackEnd.FederationType.Google,
					token: GPGSManager.Instance.GetTokens(),
					success: () =>
					{
						SceneManager.LoadSceneAsync("LobbyScene");
					},
					fail: () =>
					{
						GameObject messagePopup = PopupManager.Instance.CreateCommonPopup();
						messagePopup.GetComponent<TRCommonPopup>().Init(
							title: "System",
							message: "�α��� ����",
							okAction: () =>
							{
								UnityEngine.Object.Destroy(messagePopup);
							});
					});
			},
			fail: () =>
			{
				GameObject messagePopup = PopupManager.Instance.CreateCommonPopup();
				messagePopup.GetComponent<TRCommonPopup>().Init(
					title: "System",
					message: "�α��� ����",
					okAction: () =>
					{
						UnityEngine.Object.Destroy(messagePopup);
					});
			});

	}

	internal void FacebookLogin()
	{
		throw new NotImplementedException();
	}

	internal void AppleLogin()
	{
		throw new NotImplementedException();
	}

	public void GuestLogin()
	{
		BackendManager.Instance.GuestLogin(
			success: () =>
			{
				SceneManager.LoadSceneAsync("LobbyScene");
			},
			fail: (callback) =>
			{
				
			});
	}

	public void LoginProcess()
	{
		BackendManager.Instance.TokenLogin(
			success: () =>
			{
				// �κ� ������ �̵�
			},
			fail: () =>
			{
				// SignUpPanel Ȱ��ȭ
			});
	}
}
