using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ThreeRabbitPackage.DesignPattern;

public class LoginHandler : TRSingleton<LoginHandler>
{
    public void GPGSLogin()
    {
        // �̹� �α��� �� ���
        if (Social.localUser.authenticated == true)
        {
            BackendManager.Instance.FederationLogin(BackEnd.FederationType.Google, GPGSManager.Instance.GetTokens());
        }
        else
        {
            Social.localUser.Authenticate((bool success) => {
                if (success)
                {
                    // �α��� ���� -> �ڳ� ������ ȹ���� ���� ��ū���� ���� ��û
                    BackendManager.Instance.FederationLogin(BackEnd.FederationType.Google, GPGSManager.Instance.GetTokens());
                }
                else
                {
                    // �α��� ����
                    Debug.Log("Login failed for some reason");
                }
            });
        }
    }
}
