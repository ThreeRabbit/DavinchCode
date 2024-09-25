using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ThreeRabbitPackage;
using UnityEngine.SceneManagement;
using System;
using System.Threading.Tasks;

public class LoginProcedure
{
    public static async Task<bool> TokenLogin()
    {
        if (!await BackendManager.Instance.TokenLoginAsync())
        {
            return false;
        }

        if (BackEnd.Backend.UserNickName == string.Empty)
        {
            PopupManager.Instance.InstantiatePopup("NicknamePopup");
        }

        return true;
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
        // 게스트로 로그인
        if(!await BackendManager.Instance.GuestLoginAsync())
        {
            OpenLoginFailPopup("LoginProcedure: Guest Login Fail");
            return false;
        }

        if(BackEnd.Backend.UserNickName.IsNullOrEmpty())
        {
            PopupManager.Instance.InstantiatePopup("NicknamePopup");
        }

        return true;
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
