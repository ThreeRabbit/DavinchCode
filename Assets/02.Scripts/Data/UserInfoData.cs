using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UniRx;
using BackEnd;
using System.Threading.Tasks;

public class UserInfoData
{
    
    public string gamerId;
    public string countryCode;
    public string nickname;
    public string inDate;
    public string emailForFindPassword;
    public string subscriptionType;
    public string federationId;

    public ReactiveProperty<string> nickNameProperty = new ReactiveProperty<string>();

    public async Task<bool> Request()
    {
        var tcs = new TaskCompletionSource<bool>();

        var row = await BackendManager.Instance.RequestUserInfoAsync();
        if(row != null)
        {
            tcs.SetResult(true);
        }
        nickname = row["nickname"]?.ToString();
        gamerId = row["gamerId"]?.ToString();
        countryCode = row["countryCode"]?.ToString();
        inDate = row["inDate"]?.ToString();
        emailForFindPassword = row["emailForFindPassword"]?.ToString();
        subscriptionType = row["subscriptionType"]?.ToString();
        federationId = row["federationId"]?.ToString();

        return tcs.Task.Result;
    }
}
