using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UniRx;

public class SignUpPopup : MonoBehaviour
{
	public Button google_btn;
	public Button facebook_btn;
	public Button apple_btn;
	public Button guest_btn;

	private void Awake()
	{
		guest_btn.OnClickAsObservable().Subscribe(_ =>
		{
			BackendManager.Instance.GuestLogin(
				success: () =>
				{
					ThreeRabbitPackage.PopupManager.Instance.CreatePopup("NicknamePopup");
				},
				fail: error =>
				{
					ThreeRabbitPackage.PopupManager.Instance
					.CreateCommonPopup()
					.GetComponent<TRCommonPopup>()
					.Init(
						title: "Error",
						message: $"status:{error.GetStatusCode()},{error.GetMessage()}",
						okAction: () =>
						{
							//TODO: SignUp 팝업에서 에러 발생 시 처리
						}
					);
				});
		}).AddTo(this.gameObject);
	}
}
