using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UniRx;

public class TitleSceneModel
{
    public enum LoginType { Google, Apple, Facebook, Guest }
    private LoginProcedure loginProcedure = new LoginProcedure();
    public void SignUp(LoginType loginType)
    {
        switch (loginType)
        {
            case LoginType.Google:
                loginProcedure.GoogleLogin();
                break;

            case LoginType.Apple:
                loginProcedure.AppleLogin();
                break;

            case LoginType.Facebook:
                loginProcedure.FacebookLogin();
                break;

            case LoginType.Guest:
                loginProcedure.GuestLogin();
                break;
        }
    }
}
