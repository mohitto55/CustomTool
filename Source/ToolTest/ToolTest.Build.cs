// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ToolTest : ModuleRules
{
	public ToolTest(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
