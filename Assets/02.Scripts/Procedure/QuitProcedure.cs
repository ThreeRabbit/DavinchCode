#if !UNITY_IOS
using UnityEngine;

public class QuitProcedure
{
	public static void Update()
	{
		if (ThreeRabbitPackage.PopupManager.Instance.trPopupList.Count > 0) return;

		if (Input.GetKey(KeyCode.Escape))
		{
			QuitProcess();
		}
	}

	public static void QuitProcess()
	{
		TRCommonPopup.Instantiate(ThreeRabbitPackage.PopupManager.Instance.transform)
			.SetTitle(I2.Loc.LocalizationManager.GetTranslation("System"))
			.SetMessage(I2.Loc.LocalizationManager.GetTranslation("QuitMessage"))
			.SetConfirm(
				confirmAction: thisPopup =>
				{
					Object.Destroy(thisPopup);
					Application.Quit();
				},
				confirmText: I2.Loc.LocalizationManager.GetTranslation("Quit"))
			.SetCancel(
				cancelAction: thisPopup =>
				{
					Object.Destroy(thisPopup);
				},
				cancelText: I2.Loc.LocalizationManager.GetTranslation("Cancel"))
			.Build();
	}
}
#endif