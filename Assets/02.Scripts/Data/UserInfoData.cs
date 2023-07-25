using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UniRx;
using BackEnd;
using System.Threading.Tasks;

public class UserInfoData
{
    #region Backend
    public static string gamerId;
    public static string countryCode;
    public static string nickname;
    public static string inDate;
    public static string emailForFindPassword;
    public static string subscriptionType;
    public static string federationId;
    #endregion

    #region UserInfoPanel
    public static ReactiveProperty<ushort> level = new ReactiveProperty<ushort>();
    public static ReactiveProperty<ushort> exp = new ReactiveProperty<ushort>();
    #endregion

    public static async Task RequestUserInfo()
    {
        var row = await BackendManager.Instance.RequestUserInfoAsync();

        nickname = row["nickname"]?.ToString();
        gamerId = row["gamerId"]?.ToString();
        countryCode = row["countryCode"]?.ToString();
        inDate = row["inDate"]?.ToString();
        emailForFindPassword = row["emailForFindPassword"]?.ToString();
        subscriptionType = row["subscriptionType"]?.ToString();
        federationId = row["federationId"]?.ToString();
    }

    public static async void RequestPlayerData()
    {
        // 뒤끝DB에 등록 된 PlayerData 테이블
        string playerDataTableName = "PlayerData";
        string[] playerDataColumn = new string[] { "level", "exp" };

        // 뒤끝 서버에 rowInDate를 요청
        var rowInDate = await BackendManager.Instance.RequestRowInDateAsync(playerDataTableName);

        //만약 rowInDate가 null인 경우 유저가 처음 접속하여 테이블이 없는 경우이므로 PlayerData 테이블을 추가
        if(rowInDate == null)
        {
            await AddPlayerDataTable(playerDataTableName);
        }
        // PlayerData테이블과 rowInDate를 통해 플레이어 데이터를 초기화 함
        var playerData = await BackendManager.Instance.RequestGetMyData(playerDataTableName, rowInDate, playerDataColumn);

        // 값을 초기화 함
        level.Value = ushort.Parse(playerData["level"].ToString());
        exp.Value = ushort.Parse(playerData["exp"].ToString());
    }

    private static Task<bool> AddPlayerDataTable(string playerDataTableName)
    {
        var tcs = new TaskCompletionSource<bool>();

        Param param = new Param();
        param.Add("level", 1);
        param.Add("exp", 0);

        BackendManager.Instance.RequestTableInsertAsync(playerDataTableName, param);

        tcs.SetResult(true);
        return tcs.Task;
    }

}
