// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class TestProj01 : ModuleRules
{
	public TestProj01(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
