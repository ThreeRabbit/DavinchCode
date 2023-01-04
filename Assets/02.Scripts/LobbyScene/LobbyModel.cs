using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ThreeRabbitPackage;
using UniRx;

public class LobbyModel
{
    public ReactiveProperty<int> matchWaitingTime = new ReactiveProperty<int>();
    public System.IDisposable matchTimeHandler;

    public void LobbyModelInit()
    {
        SubscribeLobbyModel();
    }

    public void SubscribeLobbyModel()
    {
        matchWaitingTime.Subscribe(time =>
        {
            if (time > 5)
            {
                matchTimeHandler.Dispose();
                matchWaitingTime.Value = 0;
            }
        });
    }
}
