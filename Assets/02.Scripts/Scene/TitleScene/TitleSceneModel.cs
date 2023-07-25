using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UniRx;

public class TitleSceneModel
{
    public enum LoginType { Google, Apple, Facebook, Guest }
    public Subject<bool> loginSubject = new Subject<bool>();
    public PlayerData playerData = new PlayerData();

    public async void SignUp(LoginType loginType)
    {
        switch (loginType)
        {
            case LoginType.Google:
                if(await LoginProcedure.GoogleLogin())
                {
                    loginSubject.OnNext(true);
                }
  
                break;

            case LoginType.Apple:
                //loginProcedure.AppleLogin();
                break;

            case LoginType.Facebook:
                //loginProcedure.FacebookLogin();
                break;

            case LoginType.Guest:
                if(await LoginProcedure.GuestLogin())
                {
                    loginSubject.OnNext(true);
                }

                break;
        }
    }

    public async void RequestAddDataTables()
    {
        await playerData.RequestAddPlayerData();
    }
}
