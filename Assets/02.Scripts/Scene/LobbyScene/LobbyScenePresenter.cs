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

        SubscribeUserInfo();
    }

    private void SubscribeUserInfo()
    {
        model.userInfoData.exp.Subscribe(exp =>
        {
           var userInfoPanel = view.userInfoPanel.GetComponent<UserInfoPanel>();

            userInfoPanel.nickname_txt.text = model.userInfoData.nickname == null ?
                                              model.userInfoData.gamerId : model.userInfoData.nickname;

            userInfoPanel.exp_txt.text = $"{exp} / 1234";
        }).AddTo(this.gameObject);
    }

    public void Update()
    {
        if(Input.GetKey(KeyCode.F1))
        {
            model.userInfoData.exp.Value++;
        }
    }
}
