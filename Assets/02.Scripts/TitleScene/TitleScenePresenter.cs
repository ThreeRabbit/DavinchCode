using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UniRx;
using System;

public class TitleScenePresenter : IDisposable
{
	private TitleSceneModel model;
	private TitleSceneView view;
	private CompositeDisposable disposables = new CompositeDisposable();

	public TitleScenePresenter(TitleSceneModel model, TitleSceneView view)
	{
		this.model = model;
		this.view = view;

		SubscribeSignUpButton();
	}

	public void Dispose()
	{
		disposables.Dispose();
	}

	private void SubscribeSignUpButton()
	{
		var googleSignUpDisposable = view.googleSignUp_btn
			.OnClickAsObservable()?
			.Subscribe(_ => model.SignUp(TitleSceneModel.LoginType.Google));
		disposables.Add(googleSignUpDisposable);

		var appleSignUpDisposable = view.appleSignUp_btn
			.OnClickAsObservable()?
			.Subscribe(_ => model.SignUp(TitleSceneModel.LoginType.Apple));
		disposables.Add(appleSignUpDisposable);

		var facebookSignUpDisposable = view.facebookSignUp_btn
			.OnClickAsObservable()?
			.Subscribe(_ => model.SignUp(TitleSceneModel.LoginType.Facebook));
		disposables.Add(facebookSignUpDisposable);

		var guestSignUpDisposable = view.guestSignUp_btn
			.OnClickAsObservable()?
			.Subscribe(_ => model.SignUp(TitleSceneModel.LoginType.Guest));
		disposables.Add(guestSignUpDisposable);
	}
}
