using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UniRx;
using System;

public class TitleScenePresenter : MonoBehaviour
{
	private TitleSceneModel model;
	private TitleSceneView view;

	public void Init(TitleSceneModel model, TitleSceneView view)
	{
		this.model = model;
		this.view = view;
	}
	private void SubscribeSignUpPanel(SignUpPanelView view)
	{
		view.googleSignUp_btn
			.OnClickAsObservable()?
			.Subscribe(_ => model.SignUp(TitleSceneModel.LoginType.Google))
			.AddTo(this.gameObject);
	
		view.appleSignUp_btn
			.OnClickAsObservable()?
			.Subscribe(_ => model.SignUp(TitleSceneModel.LoginType.Apple))
			.AddTo(this.gameObject);

		view.facebookSignUp_btn
			.OnClickAsObservable()?
			.Subscribe(_ => model.SignUp(TitleSceneModel.LoginType.Facebook))
			.AddTo(this.gameObject);

		view.guestSignUp_btn
			.OnClickAsObservable()?
			.Subscribe(_ => model.SignUp(TitleSceneModel.LoginType.Guest))
			.AddTo(this.gameObject);
	}
}
