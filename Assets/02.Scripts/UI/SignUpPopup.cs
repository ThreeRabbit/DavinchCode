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
					ThreeRabbitPackage.PopupManager.Instance.InstantiatePopup("NicknamePopup");
				},
				fail: error =>
				{
					TRCommonPopup.Instantiate(ThreeRabbitPackage.PopupManager.Instance.transform)
						.SetTitle("Error")
						.SetMessage($"status:{error.GetStatusCode()},{error.GetMessage()}")
						.SetConfirm(
							confirmAction: thisPopup =>
							{
								Destroy(thisPopup);
							},
							confirmText: I2.Loc.LocalizationManager.GetTranslation("OK"))
						.Build();
			});
		}).AddTo(this.gameObject);
	}
}
