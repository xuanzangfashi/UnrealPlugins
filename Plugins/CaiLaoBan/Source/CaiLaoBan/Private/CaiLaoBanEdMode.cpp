// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "CaiLaoBan.h"
#include "CaiLaoBanEdMode.h"
#include "CaiLaoBanEdModeToolkit.h"
#include "Toolkits/ToolkitManager.h"

const FEditorModeID FCaiLaoBanEdMode::EM_CaiLaoBanEdModeId = TEXT("EM_CaiLaoBanEdMode");

FCaiLaoBanEdMode::FCaiLaoBanEdMode()
{

}

FCaiLaoBanEdMode::~FCaiLaoBanEdMode()
{

}

void FCaiLaoBanEdMode::Enter()
{
	FEdMode::Enter();

	if (!Toolkit.IsValid() && UsesToolkits())
	{
		Toolkit = MakeShareable(new FCaiLaoBanEdModeToolkit);
		Toolkit->Init(Owner->GetToolkitHost());
	}
}

void FCaiLaoBanEdMode::Exit()
{
	if (Toolkit.IsValid())
	{
		FToolkitManager::Get().CloseToolkit(Toolkit.ToSharedRef());
		Toolkit.Reset();
	}

	// Call base Exit method to ensure proper cleanup
	FEdMode::Exit();
}

bool FCaiLaoBanEdMode::UsesToolkits() const
{
	return true;
}




