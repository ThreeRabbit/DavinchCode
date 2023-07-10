using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ThreeRabbitPackage;
using UnityEngine.SceneManagement;
public class LoginProcedure : MonoBehaviour
{
	public void GoogleLogin()
	{
		// ���� �Ҽ� �α��� ����
		GPGSManager.Instance.GPGSLogin(
			success: () =>
			{
				// �ڳ� ������ ������̼� �α����� �����Ѵ�.
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
							message: "�ڳ� ���� �α��� ����",
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
					message: "���� �α��ο� ����",
					okAction: () =>
					{
						Destroy(messagePopup);
					});
			});

	}
}
