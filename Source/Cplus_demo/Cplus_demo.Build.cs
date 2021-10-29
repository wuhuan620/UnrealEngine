// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Cplus_demo : ModuleRules
{
	public Cplus_demo(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
