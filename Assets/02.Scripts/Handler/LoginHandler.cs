using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ThreeRabbitPackage.DesignPattern;

public class LoginHandler : TRSingleton<LoginHandler>
{
    public void GPGSLogin()
    {
        // 이미 로그인 된 경우
        if (Social.localUser.authenticated == true)
        {
            BackendManager.Instance.FederationLogin(BackEnd.FederationType.Google, GPGSManager.Instance.GetTokens());
        }
        else
        {
            Social.localUser.Authenticate((bool success) => {
                if (success)
                {
                    // 로그인 성공 -> 뒤끝 서버에 획득한 구글 토큰으로 가입 요청
                    BackendManager.Instance.FederationLogin(BackEnd.FederationType.Google, GPGSManager.Instance.GetTokens());
                }
                else
                {
                    // 로그인 실패
                    Debug.Log("Login failed for some reason");
                }
            });
        }
    }
}
