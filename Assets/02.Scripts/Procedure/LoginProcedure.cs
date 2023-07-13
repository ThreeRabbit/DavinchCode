using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ThreeRabbitPackage;
using UnityEngine.SceneManagement;
using System;
using System.Threading.Tasks;

public class LoginProcedure
{
	public Task<bool> TokenLoginAsync()
	{
		bool isSuccess = false;
		var tcs = new TaskCompletionSource<bool>();
		BackendManager.Instance.TokenLogin(() => isSuccess = true, () => isSuccess = false);
		tcs.SetResult(isSuccess);
		return Task.FromResult(tcs.Task.Result);
	}

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
							message: "로그인 실패",
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
					message: "로그인 실패",
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
}
