// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "CaiLaoBan.h"
#include "CaiLaoBanEdMode.h"
#include "CaiLaoBanEdModeToolkit.h"

#include "./Editor/UnrealEd/Public/Toolkits/AssetEditorManager.h"

#define LOCTEXT_NAMESPACE "FCaiLaoBanEdModeToolkit"


TSharedPtr<SEditableTextBox> FCaiLaoBanEdModeToolkit::AssetPreFixed;
TSharedPtr<SEditableTextBox> FCaiLaoBanEdModeToolkit::AssetFixed;

FCaiLaoBanEdModeToolkit::FCaiLaoBanEdModeToolkit()
{
}

void FCaiLaoBanEdModeToolkit::Init(const TSharedPtr<IToolkitHost>& InitToolkitHost)
{
	struct Locals
	{
		static bool IsWidgetEnabled()
		{
			return GEditor->GetSelectedActors()->Num() != 0;
		}

		static FReply OnButtonClick(FVector InOffset)
		{
			USelection* SelectedActors = GEditor->GetSelectedActors();

			// Let editor know that we're about to do something that we want to undo/redo
			GEditor->BeginTransaction(LOCTEXT("MoveActorsTransactionName", "MoveActors"));

			// For each selected actor
			for (FSelectionIterator Iter(*SelectedActors); Iter; ++Iter)
			{
				if (AActor* LevelActor = Cast<AActor>(*Iter))
				{
					// Register actor in opened transaction (undo/redo)
					LevelActor->Modify();
					// Move actor to given location
					LevelActor->TeleportTo(LevelActor->GetActorLocation() + InOffset, FRotator(0, 0, 0));
				}
			}

			// We're done moving actors so close transaction
			GEditor->EndTransaction();

			return FReply::Handled();
		}

		static TSharedRef<SWidget> MakeButton(FText InLabel, const FVector InOffset)
		{
			return SNew(SButton)
				.Text(InLabel)
				.OnClicked_Static(&Locals::OnButtonClick, InOffset);
		}
	};

	const float Factor = 256.0f;

	SAssignNew(ToolkitWidget, SBorder)
		.HAlign(HAlign_Center)
		.Padding(25)
		.IsEnabled_Static(&Locals::IsWidgetEnabled)
		[
			SNew(SVerticalBox)
			+ SVerticalBox::Slot()
		.AutoHeight()
		.HAlign(HAlign_Center)
		.Padding(50)
		[
			SNew(STextBlock)
			.AutoWrapText(true)
		.Text(LOCTEXT("HelperLabel", "Select some actors and move them around using buttons below"))
		]
	+ SVerticalBox::Slot()
		.HAlign(HAlign_Center)
		.AutoHeight()
		[
			SNew(SButton)
			.Text(LOCTEXT("UpButtonLabel", "Override"))
		.OnClicked_Static(&FCaiLaoBanEdModeToolkit::OnOverrideButtonClick)
		]
	+ SVerticalBox::Slot()
		.HAlign(HAlign_Center)
		.AutoHeight()
		[
			SNew(SHorizontalBox)
			+ SHorizontalBox::Slot()
		.AutoWidth()
		[
			SNew(SButton)
			.Text(LOCTEXT("RenameAsset", "RenameAsset"))
		.OnClicked_Static(&FCaiLaoBanEdModeToolkit::OnReamAssetButtonClick)
		]
	+ SHorizontalBox::Slot()
		.AutoWidth()
		[
			SAssignNew(AssetPreFixed, SEditableTextBox)
			.Text(LOCTEXT("AssetPreFixed", "AssetPreFixed"))
		]
		]
	+ SVerticalBox::Slot()
		.HAlign(HAlign_Center)
		.AutoHeight()
		[
			SAssignNew(AssetFixed, SEditableTextBox)
			.Text(LOCTEXT("AssetFixed", "AssetFixed"))
		]

		];

	FModeToolkit::Init(InitToolkitHost);
}

FName FCaiLaoBanEdModeToolkit::GetToolkitFName() const
{
	return FName("CaiLaoBanEdMode");
}

FText FCaiLaoBanEdModeToolkit::GetBaseToolkitName() const
{
	return NSLOCTEXT("CaiLaoBanEdModeToolkit", "DisplayName", "CaiLaoBanEdMode Tool");
}

class FEdMode* FCaiLaoBanEdModeToolkit::GetEditorMode() const
{
	return GLevelEditorModeTools().GetActiveMode(FCaiLaoBanEdMode::EM_CaiLaoBanEdModeId);
}

FReply FCaiLaoBanEdModeToolkit::OnOverrideButtonClick()
{

	USelection*ActorsSet = GEditor->GetSelectedActors();
	TArray<AActor*> ActorArr;
	ActorsSet->GetSelectedObjects(ActorArr);
	for (int i = 0; i < ActorArr.Num(); i++)
	{
		AStaticMeshActor* TmpStaticMeshActor = Cast<AStaticMeshActor>(ActorArr[i]);
		if (TmpStaticMeshActor)
		{
			TArray<UMaterialInterface*> TmpMats;
			TmpMats = TmpStaticMeshActor->GetStaticMeshComponent()->GetMaterials();

			for (int j = 0; j < TmpMats.Num(); j++)
			{
				TmpStaticMeshActor->GetStaticMeshComponent()->StaticMesh->StaticMaterials[j].MaterialInterface = TmpMats[j];
				TmpStaticMeshActor->GetStaticMeshComponent()->StaticMesh->Modify(true);



			}


		}
	}
	return FReply::Handled();
}

FReply FCaiLaoBanEdModeToolkit::OnReamAssetButtonClick()
{
	TArray<FAssetData> AllSelectAsset;
	GEditor->GetContentBrowserSelections(AllSelectAsset);
	for (int i = 0; i < AllSelectAsset.Num(); i++)
	{
		UObject*TmpObj = AllSelectAsset[i].GetAsset();
		TmpObj->Rename(*(AssetPreFixed->GetText().ToString() + TmpObj->GetName() + AssetFixed->GetText().ToString()));
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, AllSelectAsset[i].AssetName.ToString());
	}
	return FReply::Handled();
}

#undef LOCTEXT_NAMESPACE
