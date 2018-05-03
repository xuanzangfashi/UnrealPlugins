// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "LittleFatTransformMeshPrivatePCH.h"
#include "LittleFatTransformMeshCommands.h"

#define LOCTEXT_NAMESPACE "FLittleFatTransformMeshModule"

void FLittleFatTransformMeshCommands::RegisterCommands()
{
	UI_COMMAND(PluginAction, "LittleFatTransformMesh", "Execute LittleFatTransformMesh action", EUserInterfaceActionType::Button, FInputGesture());
	UI_COMMAND(PluginAction1, "LittleFatTransformMesh1", "Execute LittleFatTransformMesh action1", EUserInterfaceActionType::Button, FInputGesture());
}

#undef LOCTEXT_NAMESPACE
