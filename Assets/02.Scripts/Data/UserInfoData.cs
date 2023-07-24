using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UniRx;
using BackEnd;
using System.Threading.Tasks;

public class UserInfoData
{
    #region Backend
    public string gamerId;
    public string countryCode;
    public string nickname;
    public string inDate;
    public string emailForFindPassword;
    public string subscriptionType;
    public string federationId;
    #endregion

    #region UserInfoPanel
    public ReactiveProperty<ushort> level = new ReactiveProperty<ushort>();
    public ReactiveProperty<ushort> exp = new ReactiveProperty<ushort>();
    #endregion

    public async Task RequestUserInfo()
    {
        var row = await BackendManager.Instance.RequestUserInfoAsync();

        nickname = row["nickname"]?.ToString();
        gamerId = row["gamerId"]?.ToString();
        countryCode = row["countryCode"]?.ToString();
        inDate = row["inDate"]?.ToString();
        emailForFindPassword = row["emailForFindPassword"]?.ToString();
        subscriptionType = row["subscriptionType"]?.ToString();
        federationId = row["federationId"]?.ToString();

        var rowInDate = await RequestRowInDate();
        var userInfoData = await BackendManager.Instance.RequestGetMyData("UserInfoData", rowInDate, new string[] { "level", "exp" });

        level.Value = ushort.Parse(userInfoData["level"].ToString());
        exp.Value = ushort.Parse(userInfoData["exp"].ToString());
    }
    
    public async Task<string> RequestRowInDate()
    {
        var rowInDate = await BackendManager.Instance.RequestRowInDateAsync("UserInfoData");
        return rowInDate;
    }


}
