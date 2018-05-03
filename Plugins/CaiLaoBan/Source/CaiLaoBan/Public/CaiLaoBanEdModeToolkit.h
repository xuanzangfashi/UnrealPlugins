// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Editor/UnrealEd/Public/Toolkits/BaseToolkit.h"


class FCaiLaoBanEdModeToolkit : public FModeToolkit
{
public:

	FCaiLaoBanEdModeToolkit();

	static TSharedPtr<SEditableTextBox> AssetPreFixed;
	static TSharedPtr<SEditableTextBox> AssetFixed;

	/** FModeToolkit interface */
	virtual void Init(const TSharedPtr<IToolkitHost>& InitToolkitHost) override;

	/** IToolkit interface */
	virtual FName GetToolkitFName() const override;
	virtual FText GetBaseToolkitName() const override;
	virtual class FEdMode* GetEditorMode() const override;
	virtual TSharedPtr<class SWidget> GetInlineContent() const override { return ToolkitWidget; }

private:

	TSharedPtr<SWidget> ToolkitWidget;

public:
	static FReply OnOverrideButtonClick();
	static FReply OnReamAssetButtonClick();
};
