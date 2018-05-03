// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "CaiLaoBan.h"
#include "CaiLaoBanEdMode.h"

#define LOCTEXT_NAMESPACE "FCaiLaoBanModule"

void FCaiLaoBanModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	FEditorModeRegistry::Get().RegisterMode<FCaiLaoBanEdMode>(FCaiLaoBanEdMode::EM_CaiLaoBanEdModeId, LOCTEXT("CaiLaoBanEdModeName", "CaiLaoBanEdMode"), FSlateIcon(), true);
}

void FCaiLaoBanModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
	FEditorModeRegistry::Get().UnregisterMode(FCaiLaoBanEdMode::EM_CaiLaoBanEdModeId);
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FCaiLaoBanModule, CaiLaoBan)