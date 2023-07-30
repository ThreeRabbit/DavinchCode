using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UniRx;
using ThreeRabbitPackage.DesignPattern;

public class LobbyScenePresenter : TRSingleton<LobbyScenePresenter>
{
    private LobbySceneModel model;
    private LobbySceneView view;

    public LobbySceneView View { get { return view; } private set { view = value; } }

    public void Init(LobbySceneModel model, LobbySceneView view)
    {
        this.model = model;
        this.view = view;

        InitUserInfoPanel();
        SubscribeUserInfo();
    }

    private async void InitUserInfoPanel()
    {
        var userInfoPanel = view.userInfoPanel.GetComponent<UserInfoPanel>();

        await model.userInfoData.Request();

        userInfoPanel.nickname_txt.text = model.userInfoData.nickname == null ?
                 model.userInfoData.gamerId : model.userInfoData.nickname;
    }
    private void SubscribeUserInfo()
    {
        var userInfoPanel = view.userInfoPanel.GetComponent<UserInfoPanel>();

        // 닉네임
        model.userInfoData.nickNameProperty.Subscribe(nickname =>
        {
            userInfoPanel.nickname_txt.text = model.userInfoData.nickname == null ?
                             model.userInfoData.gamerId : model.userInfoData.nickname;
        }).AddTo(this.gameObject);

        // 레벨
        model.playerData.level.Subscribe(level =>
        {
            userInfoPanel.level_txt.text = $"{level}";
        }).AddTo(this.gameObject);

        // 경험치
        model.playerData.exp.Subscribe(exp =>
        {
            userInfoPanel.exp_txt.text = $"{exp} / 1234";
        }).AddTo(this.gameObject);     
    }

    public async void Update()
    {
        if (Input.GetKey(KeyCode.F1))
        {
            model.playerData.exp.Value++;
            BackEnd.Param param = new BackEnd.Param();
            param.Add("exp", model.playerData.exp.Value + 1);
            await model.playerData.RequestUpdate(param);
            await model.playerData.Request();
        }
    }
}
