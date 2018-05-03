// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "SlateBasics.h"
#include "LittleFatTransformMeshStyle.h"

class FLittleFatTransformMeshCommands : public TCommands<FLittleFatTransformMeshCommands>
{
public:

	FLittleFatTransformMeshCommands()
		: TCommands<FLittleFatTransformMeshCommands>(TEXT("LittleFatTransformMesh"), NSLOCTEXT("Contexts", "LittleFatTransformMesh", "LittleFatTransformMesh Plugin"), NAME_None, FLittleFatTransformMeshStyle::GetStyleSetName())
	{
	}

	// TCommands<> interface
	virtual void RegisterCommands() override;

public:
	TSharedPtr< FUICommandInfo > PluginAction;
	TSharedPtr< FUICommandInfo > PluginAction1;
};
