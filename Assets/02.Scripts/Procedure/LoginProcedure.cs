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
		var tcs = new TaskCompletionSource<bool>();
		BackendManager.Instance.TokenLogin(
			success: () =>
			{
				tcs.SetResult(true);
			},
			fail: (callback) =>
			{
				tcs.SetResult(false);
				OpenLoginFailPopup(callback.GetMessage());
			});
		return tcs.Task;
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
				OpenLoginFailPopup(callback.GetMessage());
			});
	}

	public static Task<bool> GoogleLoginAsync()
    {
		GPGSManager.Instance.GPGSLogin(
			success: () =>
			{

			},
			fail: () =>
			{

			});

		return null;
    }

	public static void OpenLoginFailPopup(string errorMessage = null)
    {
		TRCommonPopup.Instantiate(PopupManager.Instance.transform)
		.SetTitle("System")
		.SetMessage(errorMessage)
		.SetConfirm(
			confirmAction: obj =>
			{
				UnityEngine.Object.Destroy(obj);
			},
			confirmText: I2.Loc.LocalizationManager.GetTranslation("OK"))
		.Build();
	}
}
