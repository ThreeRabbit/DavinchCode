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
                if (callback.GetStatusCode() != "400")
                {
                    OpenLoginFailPopup(callback.GetMessage());
                }
            });

        return tcs.Task;
	}

	public static async Task<bool> GoogleLogin()
	{
        if(!await GPGSManager.Instance.GPGSLoginAsync())
        {
            OpenLoginFailPopup("LoginProcedure: Google Federation Login Fail");
            return false;
        }

        if(!await BackendManager.Instance.FederationLoginAsync(BackEnd.FederationType.Google, GPGSManager.Instance.GetTokens()))
        {
            OpenLoginFailPopup("LoginProcedure: Google Federation Login Fail");
            return false;
        }

        return true;
    }

	internal void FacebookLogin()
	{
		throw new NotImplementedException();
	}

	internal void AppleLogin()
	{
		throw new NotImplementedException();
	}

	public static async Task<bool> GuestLogin()
	{
        bool isSuccess = false;

        await BackendManager.Instance.GuestLoginAsync(
            success: () =>
            {
                isSuccess = true;
            },
            fail: (callback) =>
            {
                OpenLoginFailPopup(callback.GetMessage());
                isSuccess = false;
            });

        return isSuccess;
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
