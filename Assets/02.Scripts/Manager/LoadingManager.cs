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
	/// LoadingManager 클래스는 컴포넌트 접근을 위해 싱글턴 패턴을 사용하지만 DontDestroy로 관리되지 않음
	/// 그 이유는 LoadingCanvas 하위에 LoadingManager 오브젝트가 존재하고 
	/// LoadingCansvas는 씬이 변경 될 때 제거되기 때문에 LoadingManager의 유효성을 확신할 수 없음
	/// 따라서 현재는 각 씬마다 LoadingCanvas를 생성해두었으며 씬이 로드될 때 LoadingManager의 Awake() 메서드를 실행하면서 Init도 실행함
	/// Init에서는 subject를 구독하는데 
	/// 이 또한 씬이 변경될 때마다 객체가 파괴되면서 구독이 해제되고 
	/// 그로인해 Awake() 메서드에서 구독을 다시 해주어야 함
	/// </summary>
	private void Awake()
	{
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
