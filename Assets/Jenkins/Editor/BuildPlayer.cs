using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
using UnityEditor.Build.Reporting;

namespace ThreeRabbitPackage.Jenkins
{
    public class BuildPlayer
    {
        public static void Build()
        {
            string buildItemName = GetCommand("-buildItemName");
            BuildItem buildItem = Resources.Load<BuildItem>($"Build/{buildItemName}");
            Debug.Log("BuildItemName: " + buildItemName);
            Debug.Log("BuildItemTarget: " + buildItem.buildTarget);
            Debug.Log("BuildItemOption: " + buildItem.buildOptions);
            BuildPlayerOptions buildPlayerOptions = new BuildPlayerOptions();
            buildPlayerOptions.scenes = FindEnabledEditgorScenes();
            buildPlayerOptions.locationPathName = $"{buildItem.buildTarget}/{buildItem.buildName}.apk";
            buildPlayerOptions.target = buildItem.buildTarget;
            buildPlayerOptions.options = buildItem.buildOptions;
            PlayerSettings.productName = "DavinchCode";
            PlayerSettings.keystorePass = "threerabbit1!";
            PlayerSettings.keyaliasPass = "threerabbit1!";

            BuildReport report = BuildPipeline.BuildPlayer(buildPlayerOptions);
            BuildSummary summary = report.summary;

            switch (summary.result)
            {
                case BuildResult.Succeeded:
                    Debug.Log("build succesded: " + summary.totalSize + " bytes");
                    break;

                case BuildResult.Failed:
                    Debug.Log("build succesded: " + summary.totalSize + " bytes");
                    break;
            }
        }

        private static string[] FindEnabledEditgorScenes()
        {
            List<string> EditorScenes = new List<string>();

            foreach (EditorBuildSettingsScene scene in EditorBuildSettings.scenes)
            {
                if (!scene.enabled) continue;
                EditorScenes.Add(scene.path);
            }

            return EditorScenes.ToArray();
        }

        public static string GetCommand(string strLabel)
        {
            string[] args = System.Environment.GetCommandLineArgs();
            string strArg = string.Empty;

            for (int i = 0; i < args.Length; i++)
            {
                strArg = args[i];

                if (strArg.Contains(strLabel) == true)
                {
                    string[] splitLabels = strArg.Split(':');
                    if (splitLabels.Length > 1)
                    {
                        return splitLabels[1];
                    }

                    return strArg;
                }
            }

            return string.Empty;
        }
    }
}