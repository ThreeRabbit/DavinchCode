using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using ThreeRabbitPackage.DesignPattern;
using UniRx;

public class LoadingManager : TRSingleton<LoadingManager>
{
	public GameObject loadingPanel;
	public Subject<bool> subject = new Subject<bool>();

	/// <summary>
    /// LoadingManager는 초기화 시점에 loadingPanel에 바인딩 된 프리팹을 참조하여 subject의 이벤트를 구독해야 함.
    /// 따라서 현재 GameManager에서 Init() 메서드를 호출 하지 않으며 SplashScene에 인스턴스를 미리 생성해두고 인스턴스가 초기화 될 때 Init()메서드를 호출함
	/// </summary>
	private void Awake()
	{
        base.Awake();
        Init();
	}

	public void Init()
	{
		loadingPanel.SetActive(false);

		subject.Subscribe(isLoading =>
		{
			if (isLoading)
			{
				loadingPanel.SetActive(true);
			}
			else
			{
				loadingPanel.SetActive(false);
			}
		}).AddTo(this.gameObject);
	}

	public void Update()
	{
		if (Input.GetKey(KeyCode.B)) subject.OnNext(true);
		if (Input.GetKey(KeyCode.C)) subject.OnNext(false);
	}
}
