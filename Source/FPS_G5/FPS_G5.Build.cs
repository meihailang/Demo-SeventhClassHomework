// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class FPS_G5 : ModuleRules
{
	public FPS_G5(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
