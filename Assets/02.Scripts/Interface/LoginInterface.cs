using System.Collections;
using System.Collections.Generic;
using System.Threading.Tasks;
using UnityEngine;

public interface ILogin
{
    public abstract Task<bool> Login();
}

public interface ISignin
{
    public abstract Task<bool> Signin();
}

public interface ICreateNickname
{
    public abstract Task<bool> HasNickname();
    public abstract Task<bool> CreateNickname();
}