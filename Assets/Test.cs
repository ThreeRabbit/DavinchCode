using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using BackEnd;
public class Test : MonoBehaviour
{
    private async void Update()
    {
        if(Input.GetKey(KeyCode.U))
        {

        }
        if(Input.GetKey(KeyCode.A))
        {
            BackEnd.Backend.BMember.DeleteGuestInfo();
        }
    }
}
