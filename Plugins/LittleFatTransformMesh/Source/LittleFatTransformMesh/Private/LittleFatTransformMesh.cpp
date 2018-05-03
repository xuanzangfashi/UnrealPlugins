// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "LittleFatTransformMeshPrivatePCH.h"

#include "SlateBasics.h"
#include "SlateExtras.h"

#include "LittleFatTransformMeshStyle.h"
#include "LittleFatTransformMeshCommands.h"
#include "IDesktopPlatform.h"
#include "LevelEditor.h"
#include "DesktopPlatformModule.h"


//#include "StaticMeshActor.h"

static const FName LittleFatTransformMeshTabName("LittleFatTransformMesh");

#define LOCTEXT_NAMESPACE "FLittleFatTransformMeshModule"

void FLittleFatTransformMeshModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module

	FLittleFatTransformMeshStyle::Initialize();
	FLittleFatTransformMeshStyle::ReloadTextures();

	FLittleFatTransformMeshCommands::Register();

	PluginCommands = MakeShareable(new FUICommandList);

	PluginCommands->MapAction(
		FLittleFatTransformMeshCommands::Get().PluginAction,
		FExecuteAction::CreateRaw(this, &FLittleFatTransformMeshModule::PluginButtonClicked),
		FCanExecuteAction());
	PluginCommands->MapAction(
		FLittleFatTransformMeshCommands::Get().PluginAction1,
		FExecuteAction::CreateRaw(this, &FLittleFatTransformMeshModule::PluginButtonClicked1),
		FCanExecuteAction());

	FLevelEditorModule& LevelEditorModule = FModuleManager::LoadModuleChecked<FLevelEditorModule>("LevelEditor");

	{
		TSharedPtr<FExtender> MenuExtender = MakeShareable(new FExtender());
		MenuExtender->AddMenuExtension("WindowLayout", EExtensionHook::After, PluginCommands, FMenuExtensionDelegate::CreateRaw(this, &FLittleFatTransformMeshModule::AddMenuExtension));

		LevelEditorModule.GetMenuExtensibilityManager()->AddExtender(MenuExtender);
	}

	{
		TSharedPtr<FExtender> ToolbarExtender = MakeShareable(new FExtender);
		ToolbarExtender->AddToolBarExtension("Settings", EExtensionHook::After, PluginCommands, FToolBarExtensionDelegate::CreateRaw(this, &FLittleFatTransformMeshModule::AddToolbarExtension));

		LevelEditorModule.GetToolBarExtensibilityManager()->AddExtender(ToolbarExtender);
	}

	hThread = CreateThread(0, 0, ThreadFunc, (void*)this, CREATE_ALWAYS, &threadId);
	canBreak = false;
	hMutex = CreateMutex(0, FALSE, 0);
}

DWORD WINAPI ThreadFunc(void* data)
{
	FLittleFatTransformMeshModule* Self = 0;
	Self =  static_cast<FLittleFatTransformMeshModule*>(data);
	if (!Self)
		return 1l;
	
		WaitForSingleObject(Self->hMutex, INFINITE);
		while (!Self->canBreak)
		{
			if (GEditor)
			{
				TArray<AActor*>ActorList;
				Self->GetEditorSelectedItems(ActorList);

				for (auto i : ActorList)
				{
					if (i)
					{
						GEditor->SelectActor(i, 0, 1);
						auto tmpAttachedParent = i->GetAttachParentActor();
						auto tmpRealAttachedParent = Cast<AMeshGizmo>(tmpAttachedParent);
						if (tmpRealAttachedParent)
						{

							GEditor->SelectActor(tmpRealAttachedParent, 1, 1);
						}
					}
				}
			}
		}
		ReleaseMutex(Self->hMutex);
	
	return 0l;
}

void FLittleFatTransformMeshModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
	FLittleFatTransformMeshStyle::Shutdown();

	FLittleFatTransformMeshCommands::Unregister();
	this->canBreak = true;
	WaitForSingleObject(this->hThread,INFINITE);
	Sleep(100);
	CloseHandle(this->hThread);
	ReleaseMutex(this->hMutex);
	CloseHandle(this->hMutex);
}
#pragma optimize("", off)
void FLittleFatTransformMeshModule::PluginButtonClicked()
{
	//IDesktopPlatform* DesktopPlatform = FDesktopPlatformModule::Get();
	//FString FolderName;
	//if (DesktopPlatform)
	//{
	//	//TSharedPtr<SWindow> ParentWindow = FSlateApplication::Get().FindWidgetWindow(AsShared());
	//	//void* ParentWindowHandle = (ParentWindow.IsValid() && ParentWindow->GetNativeWindow().IsValid()) ? ParentWindow->GetNativeWindow()->GetOSWindowHandle() : nullptr;
	//	
	//	////FString DefaultPath = FPaths::ConvertRelativePathToFull(FPaths::GameContentDir());
	//	////const bool bFolderSelected = DesktopPlatform->OpenDirectoryDialog(
	//	////	nullptr,
	//	////	LOCTEXT("FolderDialogTitle", "Choose a directory").ToString(),
	//	////	DefaultPath,
	//	////	FolderName
	//	////	);
	//
	//}
	//////FString ABSPath = FPaths::ConvertRelativePathToFull(FPaths::GameContentDir());
	//////int subStart = FolderName.Find(ABSPath) + ABSPath.Len();
	//////
	//////if (subStart < 0)
	//////{
	//////	return;
	//////}
	//////FolderName = FolderName.Replace(*ABSPath, *FString(""));
	//TArray<AActor*> SelectionDatas;
	//GetEditorSelectedItems(SelectionDatas);
	//if (SelectionDatas.Num() <= 0)
	//{
	//	FMessageDialog::Open(EAppMsgType::Ok, FText::FromString(TEXT("Please select the cubes you want to convert!!!!!!")));
	//}
	//for (AActor *targetActor : SelectionDatas)
	//{
	//	AStaticMeshActor *statimeshActor = Cast<class AStaticMeshActor>(targetActor);
	//	if (true||statimeshActor && statimeshActor->GetStaticMeshComponent()->GetStaticMesh()->GetName()==  FString("cube"))
	//	{
	//		FString tmpMeshPath = statimeshActor->GetStaticMeshComponent()->GetStaticMesh()->GetPathName();
	//		//获取名字
	//		FString name = statimeshActor->GetActorLabel();
	//		//FString meshName("StaticMesh'/Game/"+ FolderName + "/" + name + "." + name + "'");
	//		FString meshName(tmpMeshPath);
	//		UStaticMesh *mesh = LoadObject<UStaticMesh>(nullptr, *meshName);
	//		if (mesh == nullptr)
	//		{
	//			FText DialogText = FText::Format(
	//				LOCTEXT("PluginButtonDialogText", "The file '{0}' is not exist"),
	//				FText::FromString(meshName));
	//			FMessageDialog::Open(EAppMsgType::Ok, DialogText);
	//			
	//		}
	//		else
	//		{
	//			//添加物体到场景
	//			AStaticMeshActor* CubeActor = Cast<AStaticMeshActor>(GEditor->AddActor(
	//				GWorld->GetCurrentLevel(), AStaticMeshActor::StaticClass(),
	//				statimeshActor->GetActorTransform()));
	//			//statimeshActor->Rename(*(name + FString("WillBeDestroyed")));
	//			//删除目标
	//			statimeshActor->Destroy(true);
	//			//重命名
	//
	//			//CubeActor->Rename(*name);
	//			CubeActor->SetActorLabel(*name, true);
	//
	//			//加载同名模型
	//
	//			CubeActor->GetStaticMeshComponent()->SetStaticMesh(mesh);
	//			//标记脏
	//			//CubeActor->MarkComponentsRenderStateDirty();
	//
	//			//
	//			//CubeActor->GetStaticMeshComponent()->RegisterComponentWithWorld(GWorld);
	//			//GWorld->UpdateWorldComponents(true, false);
	//			//CubeActor->RerunConstructionScripts();
	//			//GLevelEditorModeTools().MapChangeNotify();
	//
	//		}
	//	}
	//}


	TArray<AActor*> SelectionDatas;
	USelection *Selection = GEditor->GetSelectedActors();
	//TArray<AActor*> SelectedActorArray;
	for (uint16 i = 0; i < Selection->Num(); i++)
	{
		AActor* Current = Cast<AActor>(Selection->GetSelectedObject(i));

		SelectionDatas.Add(Current);
	}

	ULevel* CurrentLevel = GWorld->GetCurrentLevel();
	for (auto i : SelectionDatas)
	{
		if(!i)
			continue;
		if (CurrentLevel)
		{
			UClass* tmpclass = i->StaticClass();
			if (i->ActorHasTag(FName("HasGizmo")) || tmpclass == AMeshGizmo::StaticClass());
			else
			{
				AActor* OriginParentActor = i->GetAttachParentActor();
				if (OriginParentActor)
				{
					i->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);

				}
				AStaticMeshActor* staticMeshActor = Cast<AStaticMeshActor>(i);
				FTransform tmptrans = i->GetActorTransform();
				tmptrans.SetLocation(tmptrans.GetLocation() + staticMeshActor->GetStaticMeshComponent()->GetStaticMesh()->GetBoundingBox().GetCenter());
				AMeshGizmo* tmp = Cast<AMeshGizmo>(GEditor->AddActor(CurrentLevel, AMeshGizmo::StaticClass(), tmptrans));
				i->Tags.Add("HasGizmo");
				staticMeshActor->SetMobility(EComponentMobility::Movable);
				i->AttachToActor(tmp, FAttachmentTransformRules::KeepWorldTransform);
				if (OriginParentActor)
					tmp->AttachToActor(OriginParentActor, FAttachmentTransformRules::KeepWorldTransform);
				tmp->AttachedActor = i;
				GizmoList.Add(tmp);
			}
		}
	}




}

void FLittleFatTransformMeshModule::PluginButtonClicked1()
{
	TArray<AActor*> SelectionDatas;
	USelection *Selection = GEditor->GetSelectedActors();
	//TArray<AActor*> SelectedActorArray;
	for (uint16 i = 0; i < Selection->Num(); i++)
	{
		AActor* Current = Cast<AActor>(Selection->GetSelectedObject(i));

		SelectionDatas.Add(Current);
	}
	for (auto i : SelectionDatas)
	{
		if(!i)
			continue;
		auto currentActor = i;
		AMeshGizmo* SelectedGizmo = Cast<AMeshGizmo>(currentActor);
		if (SelectedGizmo)
		{
			currentActor = SelectedGizmo->AttachedActor;
		}
		AMeshGizmo* tmpgizmo = Cast<AMeshGizmo>(currentActor->GetAttachParentActor());
		
		if (tmpgizmo)
		{
			AActor* OriginParent = tmpgizmo->GetAttachParentActor();
			if (GizmoList.Find(tmpgizmo) != INDEX_NONE)
			{
				currentActor->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
				if (OriginParent)
				{
					currentActor->AttachToActor(OriginParent, FAttachmentTransformRules::KeepWorldTransform);
				}
				GizmoList.Remove(tmpgizmo);
				tmpgizmo->Destroy(true,true);
				tmpgizmo = NULL;
				currentActor->Tags.Remove("HasGizmo");
			}
		}
	}
}
#pragma optimize("", on)
void FLittleFatTransformMeshModule::GetEditorSelectedItems(TArray<AActor*>& OutSelectedActor) const
{
	USelection *Selection = GEditor->GetSelectedActors();
	OutSelectedActor.Empty();
	if (!Selection)
		return;
	//TArray<AActor*> SelectedActorArray;

	for (uint16 i = 0; i < Selection->Num(); i++)
	{
		AActor* Current = Cast<AActor>(Selection->GetSelectedObject(i));

		OutSelectedActor.Add(Current);
	}
	//FContentBrowserModule& ContentBrowserModule = FModuleManager::LoadModuleChecked<FContentBrowserModule>("ContentBrowser");
	//ContentBrowserModule.Get().GetSelectedAssets(Selection);
}

void FLittleFatTransformMeshModule::AddMenuExtension(FMenuBuilder& Builder)
{
	Builder.AddMenuEntry(FLittleFatTransformMeshCommands::Get().PluginAction);
}

void FLittleFatTransformMeshModule::AddToolbarExtension(FToolBarBuilder& Builder)
{
	Builder.AddToolBarButton(FLittleFatTransformMeshCommands::Get().PluginAction);
	Builder.AddToolBarButton(FLittleFatTransformMeshCommands::Get().PluginAction1);
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FLittleFatTransformMeshModule, LittleFatTransformMesh)
