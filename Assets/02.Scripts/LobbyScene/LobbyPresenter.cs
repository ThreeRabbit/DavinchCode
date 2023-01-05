using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ThreeRabbitPackage.DesignPattern;
using UnityEngine.SceneManagement;
using UniRx;

public class LobbyPresenter : TRSingleton<LobbyPresenter>
{
    private LobbyView _lobbyView;
    private LobbyModel _lobbyModel = new LobbyModel();

    private void Awake()
    {
        SubscribeResponseJoinMatchMakingServer();
        SubscribeCancelMatchMaking();
    }

    public void InitLobbyView(LobbyView lobbyView)
    {
        _lobbyView = lobbyView;
    }

    /// <summary>
    /// 매치 서버 접속
    /// </summary>
    public void JoinMatchServer()
    {
        BackendManager.Instance.RequestJoinMatchMakingServer();
    }

    /// <summary>
    /// 대기방 생성
    /// </summary>
    public void CreateMatchRoom()
    {
        BackendManager.Instance.RequestCreateMatchRoom();
    }

    /// <summary>
    /// 매칭 신청
    /// </summary>
    /// <param name="matchType">매칭 타입</param>
    /// <param name="matchModeType">매치 모드 타입</param>
    /// <param name="matchCardIndateKey">매치카드 인데이</param>
    public void MatchMaking(BackEnd.Tcp.MatchType matchType, BackEnd.Tcp.MatchModeType matchModeType, string matchCardIndateKey)
    {
        BackendManager.Instance.RequestMatchMaking(matchType, matchModeType, matchCardIndateKey);
        _lobbyModel.matchTimeHandler =
            Observable
            .Timer(System.TimeSpan.FromSeconds(0), System.TimeSpan.FromSeconds(1))
            .RepeatSafe()
            .Subscribe(_ =>
            {
                if(_lobbyModel.matchWaitingTime.Value > BackendManager.Instance.matchTime)
                {
                    _lobbyView.match_btn.interactable = true;
                    _lobbyView.match_txt.text = "Match";
                    CancelMatchMaking();
                }

                else
                {
                    string loading = $"Match{new string('.', _lobbyModel.matchWaitingTime.Value % 4)}";

                    if (_lobbyView != null)
                    {
                        _lobbyView.match_txt.text = loading;
                        _lobbyView.match_btn.interactable = false;
                    }
                }

                _lobbyModel.matchWaitingTime.Value++;
            }).AddTo(this.gameObject);
    }

    /// <summary>
    /// 매칭 취소
    /// </summary>
    public void CancelMatchMaking()
    {
        BackendManager.Instance.RequestCancleMatchMaking();
    }

    public void SubscribeCancelMatchMaking()
    {
        BackendManager.Instance.CancelMatchMaking.Subscribe(_ =>
        {
            SceneManager.LoadSceneAsync("GameScene");
        }).AddTo(this.gameObject);
    }

    public void SubscribeResponseJoinMatchMakingServer()
    {
        BackendManager.Instance.JoinMatchMakingServer.Subscribe(_ =>
        {
            CreateMatchRoom();
        }).AddTo(this.gameObject);
    }    
}
