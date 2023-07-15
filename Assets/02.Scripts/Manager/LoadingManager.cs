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
	/// LoadingManager Ŭ������ ������Ʈ ������ ���� �̱��� ������ ��������� DontDestroy�� �������� ����
	/// �� ������ LoadingCanvas ������ LoadingManager ������Ʈ�� �����ϰ� 
	/// LoadingCansvas�� ���� ���� �� �� ���ŵǱ� ������ LoadingManager�� ��ȿ���� Ȯ���� �� ����
	/// ���� ����� �� ������ LoadingCanvas�� �����صξ����� ���� �ε�� �� LoadingManager�� Awake() �޼��带 �����ϸ鼭 Init�� ������
	/// Init������ subject�� �����ϴµ� 
	/// �� ���� ���� ����� ������ ��ü�� �ı��Ǹ鼭 ������ �����ǰ� 
	/// �׷����� Awake() �޼��忡�� ������ �ٽ� ���־�� ��.
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
