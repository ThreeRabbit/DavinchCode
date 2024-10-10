using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SplashSceneHandler : MonoBehaviour
{
    private async void Start()
    {
        // 게임 매니저 초기화
        GameManager.Instance.Init();

        // 토큰 로그인 시도
		if (await LoginProcedure.Do(LoginProcedure.TokenLoginAdapter))
		{
            // 성공한 경우 LobbyScene으로 이동
            SceneManager.LoadSceneAsync("LobbyScene");
		}
		else
		{
            // 실패한 경우 TitleScene으로 이동
            SceneManager.LoadSceneAsync("TitleScene");
		}
	}
}
