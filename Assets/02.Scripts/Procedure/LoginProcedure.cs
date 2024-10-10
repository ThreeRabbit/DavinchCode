using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ThreeRabbitPackage;
using UnityEngine.SceneManagement;
using System;
using System.Threading.Tasks;

public static class LoginProcedure
{
    // TokenLogin
    private static readonly Lazy<TokenLoginAdapter> tokenLoginAdapter =
    new Lazy<TokenLoginAdapter>(() => new TokenLoginAdapter());

    public static TokenLoginAdapter TokenLoginAdapter => tokenLoginAdapter.Value;

    // GuestLogin
    private static readonly Lazy<GuestLoginAdapter> guestLoginAdapter =
    new Lazy<GuestLoginAdapter>(() => new GuestLoginAdapter());

    public static GuestLoginAdapter GuestLoginAdapter => guestLoginAdapter.Value;

    // GoogleLogin
    private static readonly Lazy<GoogleLoginAdapter> googleLoginAdapter =
    new Lazy<GoogleLoginAdapter>(() => new GoogleLoginAdapter());

    public static GoogleLoginAdapter GoogleLoginAdapter => googleLoginAdapter.Value;

    // AppleLogin
    private static readonly Lazy<AppleLoginAdapter> appleLoginAdapter =
    new Lazy<AppleLoginAdapter>(() => new AppleLoginAdapter());

    public static AppleLoginAdapter AppleLoginAdapter => appleLoginAdapter.Value;

    // FacebookLogin
    private static readonly Lazy<FacebookLoginAdapter> facebookLoginAdapter =
    new Lazy<FacebookLoginAdapter>(() => new FacebookLoginAdapter());

    public static FacebookLoginAdapter FacebookLoginAdapter => facebookLoginAdapter.Value;


    public static async Task<bool> Do(ILogin loginAdapter, Action successAction = null, Action failAction = null)
    {
        if(!await loginAdapter.Login())
        {
            failAction?.Invoke();
            return false;
        }

        if (BackEnd.Backend.UserNickName.IsNullOrEmpty())
        {
            PopupManager.Instance.InstantiatePopup("NicknamePopup");
        }

        successAction?.Invoke();
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

public class TokenLoginAdapter : ILogin
{
    public async Task<bool> Login()
    {
        if (!await BackendManager.Instance.TokenLoginAsync())
        {
            return false;
        }

        return true;
    }
}

public class GuestLoginAdapter : ILogin
{
    public async Task<bool> Login()
    {
        // 게스트로 로그인
        if (!await BackendManager.Instance.GuestLoginAsync())
        {
            return false;
        }

        return true;
    }
}

public class GoogleLoginAdapter : ILogin
{
    public async Task<bool> Login()
    {
        // TODO: 나중에 바깥에서 세팅 가능하도록 처리할 것
        string google_code = "4/0AeaYSHCuDcNr-Kai7Hx42BpreFACh3wLVEe5u7ZF-phOY8qv6lAHQ2R7a5Y3zWOqkfqocw";

        var GPGSToken = await BackendManager.Instance.GetGPGSAccessToken(google_code);

        if (!await BackendManager.Instance.FederationLoginAsync(BackEnd.FederationType.Google, GPGSToken))
        {
            return false;
        }

        return true;
    }
}

public class FacebookLoginAdapter : ILogin
{
    public async Task<bool> Login()
    {
        // TODO: 토큰 처리
        if (!await BackendManager.Instance.FederationLoginAsync(BackEnd.FederationType.Facebook, ""))
        {
            return false;
        }

        return true;
    }
}

public class AppleLoginAdapter : ILogin
{
    public async Task<bool> Login()
    {
        // TODO: 토큰 처리
        if (!await BackendManager.Instance.FederationLoginAsync(BackEnd.FederationType.Apple, ""))
        {
            return false;
        }

        return true;
    }
}