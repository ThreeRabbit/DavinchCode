using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LobbySceneHandler : MonoBehaviour
{
    #region MVP
    private LobbySceneModel lobbySceneModel = new LobbySceneModel();
    [SerializeField] private LobbySceneView lobbySceneView;
    [SerializeField] private LobbyScenePresenter lobbyScenePresenter;
    #endregion

    private async void Start()
    {
        // 서버로부터 유저 정보를 불러옴
        UserInfoData.RequestPlayerData();
        lobbyScenePresenter.Init(lobbySceneModel, lobbySceneView);
    }

}
