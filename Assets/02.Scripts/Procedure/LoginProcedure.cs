using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ThreeRabbitPackage;
using UnityEngine.SceneManagement;
public class LoginProcedure : MonoBehaviour
{
	public void GoogleLogin()
	{
		// 구글 소셜 로그인 진행
		GPGSManager.Instance.GPGSLogin(
			success: () =>
			{
				// 뒤끝 서버에 페더레이션 로그인을 진행한다.
				BackendManager.Instance.FederationLogin(
					federationType: BackEnd.FederationType.Google,
					token: GPGSManager.Instance.GetTokens(),
					success: () =>
					{
						SceneManager.LoadSceneAsync("LobbyScene");
					},
					fail: () =>
					{
						GameObject messagePopup = PopupManager.Instance.CreateCommonPopup();
						messagePopup.GetComponent<TRCommonPopup>().Init(
							title: "System",
							message: "뒤끝 서버 로그인 실패",
							okAction: () =>
							{
								Destroy(messagePopup);
							});
					});
			},
			fail: () =>
			{
				GameObject messagePopup = PopupManager.Instance.CreateCommonPopup();
				messagePopup.GetComponent<TRCommonPopup>().Init(
					title: "System",
					message: "구글 로그인에 실패",
					okAction: () =>
					{
						Destroy(messagePopup);
					});
			});

	}
}
