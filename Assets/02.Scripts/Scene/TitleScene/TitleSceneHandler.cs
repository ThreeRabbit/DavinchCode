using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using UniRx;
using System;
using UnityEngine.SceneManagement;

public class TitleSceneHandler : MonoBehaviour
{
    #region MVP
    private TitleSceneModel titleSceneModel = new TitleSceneModel();
    [SerializeField] private TitleSceneView titleSceneView;
    [SerializeField] private TitleScenePresenter titleScenePresenter;
    #endregion

    #region Procedure
    LoginProcedure loginProcedure = new LoginProcedure();
    #endregion

    #region UI Panel
    public GameObject signUpPanel;
	#endregion

	public async void Start()
    {
        // 최초 타이틀 씬 진입 시 signUpPanel 비활성화
        signUpPanel.SetActive(false);

        // 타이틀 씬 프레젠터 초기화
        titleScenePresenter.Init(titleSceneModel, titleSceneView);

		// 토큰 로그인을 시도
		if (await loginProcedure.TokenLoginAsync())
		{
			// 성공한 경우 LobbyScene으로 이동
			SceneManager.LoadSceneAsync("LobbyScene");
		}
		else
		{
			// 실패한 경우 signUpPanel 활성화
			signUpPanel.SetActive(true);
		}

	}
}
