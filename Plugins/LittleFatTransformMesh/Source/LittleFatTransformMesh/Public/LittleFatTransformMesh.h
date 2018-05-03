// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "ModuleManager.h"
#include "ContentBrowserModule.h"
#include "AssetData.h"
#include "MeshGizmo.h"
#include <windows.h>
class FToolBarBuilder;
class FMenuBuilder;

class FLittleFatTransformMeshModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
	
	/** This function will be bound to Command. */
	void PluginButtonClicked();
	void PluginButtonClicked1();
	void GetEditorSelectedItems(TArray<AActor*>& OutSelectedActor) const;
private:

	void AddToolbarExtension(FToolBarBuilder& Builder);
	void AddMenuExtension(FMenuBuilder& Builder);

private:
	TSharedPtr<class FUICommandList> PluginCommands;
	TArray<AMeshGizmo*> GizmoList;
private:
	unsigned long threadId;
	void* hThread;

public:
	void* hMutex;
	bool canBreak;
};

DWORD WINAPI ThreadFunc(void* data);