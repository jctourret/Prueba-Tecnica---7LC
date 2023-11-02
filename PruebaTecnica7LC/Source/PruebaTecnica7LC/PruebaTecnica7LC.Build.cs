// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class PruebaTecnica7LC : ModuleRules
{
	public PruebaTecnica7LC(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
