// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class task_00 : ModuleRules
{
	public task_00(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
