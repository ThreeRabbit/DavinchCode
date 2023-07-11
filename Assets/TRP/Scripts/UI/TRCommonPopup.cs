using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Events;

public class TRCommonPopup : TRPopup
{
	[Header("Image")]
	public Image bg_img;
	public Image item_img;

	[Header("Text")]
	public Text title_txt;
	public Text message_txt;
	public Text ok_txt;
	public Text cancel_txt;

	[Header("Button")]
	public Button ok_btn;
	public Button cancel_btn;

	[Header("Enable Object")]
	public GameObject title;
	public GameObject item;
	public GameObject message;
	public GameObject buttonGroup;


	public void Awake()
	{
		base.Open();

		title.SetActive(false);
		item.SetActive(false);
		message.SetActive(false);
		buttonGroup.SetActive(false);
	}

	public void OnDestroy()
	{
		base.Close();
	}

	public void Init(string title, string message, UnityAction okAction)
	{
		this.title.SetActive(true);
		title_txt.text = title;

		this.message.SetActive(true);
		message_txt.text = message;

		this.buttonGroup.SetActive(true);
		this.cancel_btn.gameObject.SetActive(false);
		this.ok_btn.gameObject.SetActive(true);
		ok_txt.text = I2.Loc.LocalizationManager.GetTranslation("OK");
		ok_btn.onClick.AddListener(okAction);
	}

	public void Init(string title, string message, UnityAction okAction, string okText)
	{
		this.title.SetActive(true);
		title_txt.text = title;

		this.message.SetActive(true);
		message_txt.text = message;

		this.buttonGroup.SetActive(true);
		this.cancel_btn.gameObject.SetActive(false);
		this.ok_btn.gameObject.SetActive(true);
		ok_txt.text = okText;
		ok_btn.onClick.AddListener(okAction);

	}

	public void Init(string title, string message, UnityAction okAction, UnityAction cancelAction)
	{
		this.title.SetActive(true);
		title_txt.text = title;

		this.message.SetActive(true);
		message_txt.text = message;

		this.buttonGroup.SetActive(true);
		this.cancel_btn.gameObject.SetActive(true);
		this.ok_btn.gameObject.SetActive(true);

		ok_txt.text = I2.Loc.LocalizationManager.GetTranslation("Yes");
		ok_btn.onClick.AddListener(okAction);

		cancel_txt.text = I2.Loc.LocalizationManager.GetTranslation("No");
		cancel_btn.onClick.AddListener(cancelAction);
	}
}
