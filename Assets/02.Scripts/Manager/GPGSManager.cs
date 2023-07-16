using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ThreeRabbitPackage.DesignPattern;
using GooglePlayGames;
using GooglePlayGames.BasicApi;
using UnityEngine.Events;
using System.Threading.Tasks;

public class GPGSManager : TRSingleton<GPGSManager>
{
	private void Awake()
	{
		base.Awake();
	}

	public void Init(UnityAction success = null, UnityAction fail = null)
	{
		// GPGS 플러그인 설정
		PlayGamesClientConfiguration config = new PlayGamesClientConfiguration
			.Builder()
			.RequestServerAuthCode(false)
			.RequestEmail()
			.RequestIdToken()
			.Build();

		// 커스텀 된 정보로 GPGS 초기화
		PlayGamesPlatform.InitializeInstance(config);
		PlayGamesPlatform.DebugLogEnabled = true;

		// GPGS 활성화
		if(PlayGamesPlatform.Activate() != null)
		{
			success?.Invoke();
		}
		else
		{
			fail?.Invoke();
		}
	}

	public void GPGSLogin(UnityAction success = null, UnityAction fail = null)
	{
        // 이미 로그인 된 경우
        if (PlayGamesPlatform.Instance.localUser.authenticated == true)
		{
			success?.Invoke();
		}
		else
		{
            PlayGamesPlatform.Instance.localUser.Authenticate((bool isSuccess, string callback) => {
				if (isSuccess)
				{
                    success?.Invoke();
				}
				else
				{
                    fail?.Invoke();
					Debug.Log($"GPGSLogin Fail: {callback}");
				}
			});
		}
	}

	public string GetTokens()
    {
		if (PlayGamesPlatform.Instance.localUser.authenticated)
		{
			// 유저 토큰 받기 
			string _IDtoken = PlayGamesPlatform.Instance.GetIdToken();
			return _IDtoken;
		}
		else
		{
			Debug.Log("접속되어 있지 않습니다. PlayGamesPlatform.Instance.localUser.authenticated :  fail");
			return null;
		}
    }
}
