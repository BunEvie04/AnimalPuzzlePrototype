// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class AnimalPuzzle : ModuleRules
{
	public AnimalPuzzle(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
