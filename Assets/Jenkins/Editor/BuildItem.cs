using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;

namespace ThreeRabbitPackage.Build
{
    [CreateAssetMenu(fileName = "Build Item", menuName = "Assets/Build", order = int.MaxValue)]
    public class BuildItem : ScriptableObject
    {
        [HideInInspector] public string buildName;
        public string productName;
        public BuildTarget buildTarget;
        public BuildOptions buildOptions;
        public string[] defineSymbols;
    }
}
