using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ThreeRabbitPackage.DesignPattern;
public class TestFuncManager : TRSingleton<TestFuncManager>
{
    public void Logout()
    {
        BackEnd.Backend.BMember.DeleteGuestInfo();
        BackEnd.Backend.BMember.Logout();   
    }
}
