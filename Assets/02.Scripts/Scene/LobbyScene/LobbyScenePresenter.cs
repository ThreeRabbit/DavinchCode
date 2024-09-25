using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UniRx;
using ThreeRabbitPackage.DesignPattern;

public class LobbyScenePresenter : TRSingleton<LobbyScenePresenter>
{
    private LobbySceneModel model;
    private LobbySceneView view;
    private MatchProcedure matchProcedure = new();

    public LobbySceneView View { get { return view; } private set { view = value; } }

    public void Init(LobbySceneModel model, LobbySceneView view)
    {
        this.model = model;
        this.view = view;

        InitLobbySceneMainPanel();
    }

    private void InitLobbySceneMainPanel()
    {
        var lobbySceneMainPanel = view.LobbySceneMainPanel;

        lobbySceneMainPanel.nickname_txt.text = BackEnd.Backend.UserNickName.IsNullOrEmpty() ?
                         model.userInfoData.gamerId : model.userInfoData.nickname;

        model.playerData.level.Subscribe(level =>
        {
            lobbySceneMainPanel.level_txt.text = $"{level}";
        }).AddTo(this.gameObject);

        model.playerData.exp.Subscribe(exp =>
        {
            lobbySceneMainPanel.exp_txt.text = $"{exp} / 1234";
        }).AddTo(this.gameObject);

        lobbySceneMainPanel.match_btn.OnClickAsObservable().Subscribe(_ =>
        {
            matchProcedure.MatchProcess();
        }).AddTo(this.gameObject);
    }

    public async void UpdateLobbySceneMainPanel()
    {
        await model.userInfoData.Request();

        var mainPanel = view.LobbySceneMainPanel;
        var userInfoData = model.userInfoData;
        var playerData = model.playerData;

        mainPanel.nickname_txt.text = userInfoData.nickname;
        mainPanel.level_txt.text = $"{playerData.level.Value}";
        mainPanel.exp_txt.text = $"{playerData.exp.Value} / 1234";
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
