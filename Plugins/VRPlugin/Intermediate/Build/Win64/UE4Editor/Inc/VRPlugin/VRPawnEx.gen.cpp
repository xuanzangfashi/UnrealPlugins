// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/VRPlugin.h"
#include "Public/VRPawnEx.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRPawnEx() {}
// Cross Module References
	VRPLUGIN_API UClass* Z_Construct_UClass_AVRPawnEx_NoRegister();
	VRPLUGIN_API UClass* Z_Construct_UClass_AVRPawnEx();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_VRPlugin();
	VRPLUGIN_API UFunction* Z_Construct_UFunction_AVRPawnEx_OnFaceButtonForward();
	VRPLUGIN_API UFunction* Z_Construct_UFunction_AVRPawnEx_OnFaceButtonRight();
	VRPLUGIN_API UFunction* Z_Construct_UFunction_AVRPawnEx_TriggerDownL();
	VRPLUGIN_API UFunction* Z_Construct_UFunction_AVRPawnEx_TriggerDownR();
	VRPLUGIN_API UFunction* Z_Construct_UFunction_AVRPawnEx_TriggerUpL();
	VRPLUGIN_API UFunction* Z_Construct_UFunction_AVRPawnEx_TriggerUpR();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UFloatingPawnMovement_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetInteractionComponent_NoRegister();
	HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UMotionControllerComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	void AVRPawnEx::StaticRegisterNativesAVRPawnEx()
	{
		UClass* Class = AVRPawnEx::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnFaceButtonForward", &AVRPawnEx::execOnFaceButtonForward },
			{ "OnFaceButtonRight", &AVRPawnEx::execOnFaceButtonRight },
			{ "TriggerDownL", &AVRPawnEx::execTriggerDownL },
			{ "TriggerDownR", &AVRPawnEx::execTriggerDownR },
			{ "TriggerUpL", &AVRPawnEx::execTriggerUpL },
			{ "TriggerUpR", &AVRPawnEx::execTriggerUpR },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AVRPawnEx_OnFaceButtonForward()
	{
		struct VRPawnEx_eventOnFaceButtonForward_Parms
		{
			float Axis;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Axis = { UE4CodeGen_Private::EPropertyClass::Float, "Axis", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRPawnEx_eventOnFaceButtonForward_Parms, Axis), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Axis,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/VRPawnEx.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRPawnEx, "OnFaceButtonForward", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020400, sizeof(VRPawnEx_eventOnFaceButtonForward_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVRPawnEx_OnFaceButtonRight()
	{
		struct VRPawnEx_eventOnFaceButtonRight_Parms
		{
			float Axis;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Axis = { UE4CodeGen_Private::EPropertyClass::Float, "Axis", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRPawnEx_eventOnFaceButtonRight_Parms, Axis), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Axis,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/VRPawnEx.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRPawnEx, "OnFaceButtonRight", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020400, sizeof(VRPawnEx_eventOnFaceButtonRight_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVRPawnEx_TriggerDownL()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/VRPawnEx.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRPawnEx, "TriggerDownL", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVRPawnEx_TriggerDownR()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/VRPawnEx.h" },
				{ "ToolTip", "Events" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRPawnEx, "TriggerDownR", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVRPawnEx_TriggerUpL()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/VRPawnEx.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRPawnEx, "TriggerUpL", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVRPawnEx_TriggerUpR()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/VRPawnEx.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRPawnEx, "TriggerUpR", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AVRPawnEx_NoRegister()
	{
		return AVRPawnEx::StaticClass();
	}
	UClass* Z_Construct_UClass_AVRPawnEx()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_APawn,
				(UObject* (*)())Z_Construct_UPackage__Script_VRPlugin,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AVRPawnEx_OnFaceButtonForward, "OnFaceButtonForward" }, // 3964217478
				{ &Z_Construct_UFunction_AVRPawnEx_OnFaceButtonRight, "OnFaceButtonRight" }, // 1304320380
				{ &Z_Construct_UFunction_AVRPawnEx_TriggerDownL, "TriggerDownL" }, // 3886455065
				{ &Z_Construct_UFunction_AVRPawnEx_TriggerDownR, "TriggerDownR" }, // 1200609948
				{ &Z_Construct_UFunction_AVRPawnEx_TriggerUpL, "TriggerUpL" }, // 2555072758
				{ &Z_Construct_UFunction_AVRPawnEx_TriggerUpR, "TriggerUpR" }, // 4142647693
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "VRPawnEx.h" },
				{ "ModuleRelativePath", "Public/VRPawnEx.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftOrRightMove_MetaData[] = {
				{ "Category", "VRPawnEx" },
				{ "ModuleRelativePath", "Public/VRPawnEx.h" },
			};
#endif
			auto NewProp_LeftOrRightMove_SetBit = [](void* Obj){ ((AVRPawnEx*)Obj)->LeftOrRightMove = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_LeftOrRightMove = { UE4CodeGen_Private::EPropertyClass::Bool, "LeftOrRightMove", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000004, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AVRPawnEx), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_LeftOrRightMove_SetBit)>::SetBit, METADATA_PARAMS(NewProp_LeftOrRightMove_MetaData, ARRAY_COUNT(NewProp_LeftOrRightMove_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[] = {
				{ "Category", "VRPawnEx" },
				{ "ModuleRelativePath", "Public/VRPawnEx.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MoveSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "MoveSpeed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000004, 1, nullptr, STRUCT_OFFSET(AVRPawnEx, MoveSpeed), METADATA_PARAMS(NewProp_MoveSpeed_MetaData, ARRAY_COUNT(NewProp_MoveSpeed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Moveable_MetaData[] = {
				{ "Category", "VRPawnEx" },
				{ "ModuleRelativePath", "Public/VRPawnEx.h" },
				{ "ToolTip", "Origin Vars" },
			};
#endif
			auto NewProp_Moveable_SetBit = [](void* Obj){ ((AVRPawnEx*)Obj)->Moveable = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Moveable = { UE4CodeGen_Private::EPropertyClass::Bool, "Moveable", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000004, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AVRPawnEx), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_Moveable_SetBit)>::SetBit, METADATA_PARAMS(NewProp_Moveable_MetaData, ARRAY_COUNT(NewProp_Moveable_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RayComL_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "VRPawnEx" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/VRPawnEx.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RayComL = { UE4CodeGen_Private::EPropertyClass::Object, "RayComL", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a000d, 1, nullptr, STRUCT_OFFSET(AVRPawnEx, RayComL), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_RayComL_MetaData, ARRAY_COUNT(NewProp_RayComL_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RayComR_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "VRPawnEx" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/VRPawnEx.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RayComR = { UE4CodeGen_Private::EPropertyClass::Object, "RayComR", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a000d, 1, nullptr, STRUCT_OFFSET(AVRPawnEx, RayComR), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_RayComR_MetaData, ARRAY_COUNT(NewProp_RayComR_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatingPawnMovementCom_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "VRPawnEx" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/VRPawnEx.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FloatingPawnMovementCom = { UE4CodeGen_Private::EPropertyClass::Object, "FloatingPawnMovementCom", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a000d, 1, nullptr, STRUCT_OFFSET(AVRPawnEx, FloatingPawnMovementCom), Z_Construct_UClass_UFloatingPawnMovement_NoRegister, METADATA_PARAMS(NewProp_FloatingPawnMovementCom_MetaData, ARRAY_COUNT(NewProp_FloatingPawnMovementCom_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetSelecter_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "VRPawnEx" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/VRPawnEx.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WidgetSelecter = { UE4CodeGen_Private::EPropertyClass::Object, "WidgetSelecter", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a000d, 1, nullptr, STRUCT_OFFSET(AVRPawnEx, WidgetSelecter), Z_Construct_UClass_UWidgetInteractionComponent_NoRegister, METADATA_PARAMS(NewProp_WidgetSelecter_MetaData, ARRAY_COUNT(NewProp_WidgetSelecter_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightHandMesh_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "VRPawnEx" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/VRPawnEx.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RightHandMesh = { UE4CodeGen_Private::EPropertyClass::Object, "RightHandMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a000d, 1, nullptr, STRUCT_OFFSET(AVRPawnEx, RightHandMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_RightHandMesh_MetaData, ARRAY_COUNT(NewProp_RightHandMesh_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftHandMesh_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "VRPawnEx" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/VRPawnEx.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LeftHandMesh = { UE4CodeGen_Private::EPropertyClass::Object, "LeftHandMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a000d, 1, nullptr, STRUCT_OFFSET(AVRPawnEx, LeftHandMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_LeftHandMesh_MetaData, ARRAY_COUNT(NewProp_LeftHandMesh_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightHand_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "VRPawnEx" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/VRPawnEx.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RightHand = { UE4CodeGen_Private::EPropertyClass::Object, "RightHand", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a000d, 1, nullptr, STRUCT_OFFSET(AVRPawnEx, RightHand), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(NewProp_RightHand_MetaData, ARRAY_COUNT(NewProp_RightHand_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftHand_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "VRPawnEx" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/VRPawnEx.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LeftHand = { UE4CodeGen_Private::EPropertyClass::Object, "LeftHand", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a000d, 1, nullptr, STRUCT_OFFSET(AVRPawnEx, LeftHand), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(NewProp_LeftHand_MetaData, ARRAY_COUNT(NewProp_LeftHand_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VRPawnExCamera_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "VRPawnEx" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/VRPawnEx.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VRPawnExCamera = { UE4CodeGen_Private::EPropertyClass::Object, "VRPawnExCamera", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a000d, 1, nullptr, STRUCT_OFFSET(AVRPawnEx, VRPawnExCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(NewProp_VRPawnExCamera_MetaData, ARRAY_COUNT(NewProp_VRPawnExCamera_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "VRPawnEx" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/VRPawnEx.h" },
				{ "ToolTip", "Components" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Root = { UE4CodeGen_Private::EPropertyClass::Object, "Root", RF_Public|RF_Transient|RF_MarkAsNative, 0x00100000000a000d, 1, nullptr, STRUCT_OFFSET(AVRPawnEx, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_Root_MetaData, ARRAY_COUNT(NewProp_Root_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LeftOrRightMove,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MoveSpeed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Moveable,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RayComL,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RayComR,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FloatingPawnMovementCom,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WidgetSelecter,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RightHandMesh,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LeftHandMesh,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RightHand,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LeftHand,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VRPawnExCamera,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Root,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AVRPawnEx>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AVRPawnEx::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVRPawnEx, 2784601958);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVRPawnEx(Z_Construct_UClass_AVRPawnEx, &AVRPawnEx::StaticClass, TEXT("/Script/VRPlugin"), TEXT("AVRPawnEx"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVRPawnEx);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
