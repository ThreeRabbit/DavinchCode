using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UniRx;
using BackEnd.Tcp;
public class LobbyView : MonoBehaviour
{
    public Button match_btn;
    public Text match_txt;
    private void Awake()
    {
        LobbyPresenter.Instance.InitLobbyView(this);
        LobbyPresenter.Instance.JoinMatchServer();
        SubscribeLobbyUI();       
    }

    private void SubscribeLobbyUI()
    {
        match_btn.OnClickAsObservable().Subscribe(_ =>
        {
            LobbyPresenter.Instance.MatchMaking(MatchType.Random, MatchModeType.Melee, "Normal");
        }).AddTo(this.gameObject);

        
    }

}
