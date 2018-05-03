// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class VRPlugin : ModuleRules
{
	public VRPlugin(ReadOnlyTargetRules Target) : base(Target)
	{
		
		PublicIncludePaths.AddRange(
			new string[] {
				"VRPlugin/Public"
				// ... add public include paths required here ...
			}
			);
				
		
		PrivateIncludePaths.AddRange(
			new string[] {
				"VRPlugin/Private",
				// ... add other private include paths required here ...
			}
			);
			
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
                "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" ,"UMG" , "SteamVRController", "SteamVR" ,"ImageWrapper",
				// ... add other public dependencies that you statically link with here ...
			}
			);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
               // "UnrealEd",
                //"InputCore",
               // "LevelEditor",
                "CoreUObject",
                "Engine",
                "Slate",
                "SlateCore",
                //"ContentBrowser",
                //"DesktopPlatform",
                "Http"
				// ... add private dependencies that you statically link with here ...	
			}
			);
		
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
                //"ImageWrapper"
				// ... add any modules that your module loads dynamically here ...
			}
			);
	}
}
