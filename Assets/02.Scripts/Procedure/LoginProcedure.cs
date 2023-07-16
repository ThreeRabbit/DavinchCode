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

    #region Google Login
    public static async Task<bool> GoogleLogin()
	{
        if(!await GPGSLoginAsync())
        {
            OpenLoginFailPopup("LoginProcedure: Google Federation Login Fail");
            return false;
        }

        if(!await FederationLoginAsync(BackEnd.FederationType.Google, GPGSManager.Instance.GetTokens()))
        {
            OpenLoginFailPopup("LoginProcedure: Google Federation Login Fail");
            return false;
        }

        return true;
    }

    private static Task<bool> GPGSLoginAsync()
    {
        var tcs = new TaskCompletionSource<bool>();

        GPGSManager.Instance.GPGSLogin(
            success: () =>
            {
                tcs.SetResult(true);
            },
            fail: () =>
            {
                tcs.SetResult(false);
            });

        return tcs.Task;
    }

    private static Task<bool> FederationLoginAsync(BackEnd.FederationType federationType, string token)
    {
        var tcs = new TaskCompletionSource<bool>();

        BackendManager.Instance.FederationLogin(
            federationType: federationType,
            token: token,
            success: () =>
            {
                tcs.SetResult(true);
            },
            fail: () =>
            {
                tcs.SetResult(false);
            });

        return tcs.Task;
    }
    #endregion

    internal void FacebookLogin()
	{
		throw new NotImplementedException();
	}

	internal void AppleLogin()
	{
		throw new NotImplementedException();
	}

    #region GuestLogin
    public static async Task<bool> GuestLogin()
	{
        if(!await GuestLoginAsync())
        {
            return false;
        }

        return true;
	}

    private static Task<bool> GuestLoginAsync()
    {
        var tcs = new TaskCompletionSource<bool>();

        BackendManager.Instance.GuestLogin(
            success: () =>
            {
                tcs.SetResult(true);
            },
            fail: (callback) =>
            {
                OpenLoginFailPopup(callback.GetMessage());
                tcs.SetResult(false);
            });

        return tcs.Task;
    }
    #endregion

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
