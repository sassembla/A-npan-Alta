// #if UNITY_IOS
using System.IO;
using UnityEditor;
using UnityEditor.Callbacks;
using UnityEditor.iOS.Xcode;

public class XcodePostProcessForSwift
{
    [PostProcessBuild]
    static void OnPostProcessBuild(BuildTarget target, string path)
    {
        var projectPath = PBXProject.GetPBXProjectPath(path);
        var project = new PBXProject();
        project.ReadFromString(File.ReadAllText(projectPath));

        // swiftのverを指定する。
        var targetGuid = project.GetUnityFrameworkTargetGuid();
        project.AddBuildProperty(targetGuid, "SWIFT_VERSION", "5.0");

        File.WriteAllText(projectPath, project.WriteToString());
    }
}
// #endif