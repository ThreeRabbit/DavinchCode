using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UniRx;
using System;

public class TitleScenePresenter : MonoBehaviour
{
	private TitleSceneModel model;
	private TitleSceneView view;

	public TitleSceneView View { get { return view; } private set { view = value; } }

	public void Init(TitleSceneModel model, TitleSceneView view)
	{
		this.model = model;
		this.view = view;

		SubscribeSignUpPanel();
	}

	public void SubscribeSignUpPanel()
	{
		var signUpPanelView = View.signUpPanel.GetComponent<SignUpPanelView>();
		
		signUpPanelView.googleSignUp_btn
			.OnClickAsObservable()?
			.Subscribe(_ => model.SignUp(TitleSceneModel.LoginType.Google))
			.AddTo(this.gameObject);

		signUpPanelView.appleSignUp_btn
			.OnClickAsObservable()?
			.Subscribe(_ => model.SignUp(TitleSceneModel.LoginType.Apple))
			.AddTo(this.gameObject);

		signUpPanelView.facebookSignUp_btn
			.OnClickAsObservable()?
			.Subscribe(_ => model.SignUp(TitleSceneModel.LoginType.Facebook))
			.AddTo(this.gameObject);

		signUpPanelView.guestSignUp_btn
			.OnClickAsObservable()?
			.Subscribe(_ => model.SignUp(TitleSceneModel.LoginType.Guest))
			.AddTo(this.gameObject);
	}

	public void SubscribeQuitButton()
	{
		view.quit_btn.OnClickAsObservable().Subscribe(_ =>
		{
			if (ThreeRabbitPackage.PopupManager.Instance.trPopupList.Count > 0) return;

			TRCommonPopup.Instantiate(ThreeRabbitPackage.PopupManager.Instance.transform)
			.SetTitle(I2.Loc.LocalizationManager.GetTermData("Quit").Term)
			.SetMessage("������ �����Ͻðڽ��ϱ�?")
			.SetConfirm(
				confirmAction: thisPopup =>
				{
					Destroy(thisPopup);
					Application.Quit();
				},
				confirmText: "����")
			.SetCancel(
				cancelAction: thisPopup =>
				{
					Destroy(thisPopup);
				},
				cancelText: "�ƴϿ�")
			.Build();
		}).AddTo(this.gameObject);
	}

	public void SubscribeLanguageButton()
	{
		view.language_btn.OnClickAsObservable().Subscribe(_ =>
		{

		}).AddTo(this.gameObject);
	}
}