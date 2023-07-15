using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ThreeRabbitPackage;
using UnityEngine.SceneManagement;
using System;
using System.Threading.Tasks;

public class LoginProcedure
{
	public static Task<bool> TokenLoginAsync()
	{
		bool isSuccess = false;
		var tcs = new TaskCompletionSource<bool>();
		BackendManager.Instance.TokenLogin(() => isSuccess = true, () => isSuccess = false);
		tcs.SetResult(isSuccess);
		Debug.Log("토큰로그인 결과: " + isSuccess);
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
						TRCommonPopup.Instantiate(PopupManager.Instance.transform)
						.SetTitle("System")
						.SetMessage("로그인 실패")
						.SetConfirm(
							confirmAction: obj =>
							{
								UnityEngine.Object.Destroy(obj);
							},
							confirmText: "OK")
						.Build();
					});
			},
			fail: () =>
			{
				TRCommonPopup.Instantiate(PopupManager.Instance.transform)
				.SetTitle("System")
				.SetMessage("로그인 실패")
				.SetConfirm(
					confirmAction: obj =>
					{
						UnityEngine.Object.Destroy(obj);
					},
					confirmText: "OK")
				.Build();
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
