using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UniRx;

public class LobbySceneModel
{
    public UserInfoData userInfoData = new UserInfoData();
    public PlayerData playerData = new PlayerData();

    //public ReactiveProperty<int> matchWaitingTime = new ReactiveProperty<int>();
    //public System.IDisposable matchTimeHandler;

    //public void LobbyModelInit()
    //{
    //    SubscribeLobbyModel();
    //}

    //public void SubscribeLobbyModel()
    //{
    //    matchWaitingTime.Subscribe(time =>
    //    {
    //        if (time > BackendManager.Instance.matchTime)
    //        {
    //            matchTimeHandler.Dispose();
    //            matchWaitingTime.Value = 0;
    //        }
    //    });
    //}

}
