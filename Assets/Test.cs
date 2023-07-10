using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using BackEnd;
public class Test : MonoBehaviour
{
    private void Update()
    {
        if(Input.GetKey(KeyCode.U))
        {
            var data = BackendManager.Instance.GetUserInfoAsync();
            Debug.Log(data.ToString());
        }
    }
}
