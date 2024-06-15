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
        // 로비씬 메인 패널을 닫아둠
        lobbySceneView.LobbySceneMainPanel.gameObject.SetActive(false);

        // 서버로부터 유저 정보를 불러옴
        LoadingManager.Instance.IsLoading(true);
        await lobbySceneModel.userInfoData.Request();
        await lobbySceneModel.playerData.Request();
        LoadingManager.Instance.IsLoading(false);

        // 로비 씬 프레젠터 초기화
        lobbyScenePresenter.Init(lobbySceneModel, lobbySceneView);

        // 로비 씬 메인 패널 활성화
        lobbySceneView.LobbySceneMainPanel.gameObject.SetActive(true);

    }

}
