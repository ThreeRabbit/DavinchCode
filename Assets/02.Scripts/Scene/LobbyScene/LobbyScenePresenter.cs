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

        model.userInfoData.nickNameProperty.Subscribe(nickname =>
        {
            // 만약 유저가 닉네임을 생성하지 않았을 경우 gamerId를 닉네임으로 설정
            lobbySceneMainPanel.nickname_txt.text = string.IsNullOrEmpty(BackEnd.Backend.UserNickName) ?
                             model.userInfoData.gamerId : model.userInfoData.nickname;
        }).AddTo(this.gameObject);

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
