using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;

namespace ThreeRabbitPackage.Jenkins
{
    [CustomEditor(typeof(BuildItem))]
    public class BuildItemEditor : Editor
    {
        public override void OnInspectorGUI()
        {
            BuildItem buildItem = target as BuildItem;

            buildItem.buildName = $"{buildItem.productName}_{buildItem.buildTarget}_{PlayerSettings.bundleVersion}_{PlayerSettings.Android.bundleVersionCode}";
            EditorGUILayout.LabelField(buildItem.buildName, GUILayout.ExpandWidth(true), GUILayout.ExpandHeight(true));
            base.OnInspectorGUI();
        }
    }
}