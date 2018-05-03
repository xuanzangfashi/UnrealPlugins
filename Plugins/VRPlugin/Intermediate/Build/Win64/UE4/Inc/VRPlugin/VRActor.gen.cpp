// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/VRPlugin.h"
#include "Public/VRActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRActor() {}
// Cross Module References
	VRPLUGIN_API UClass* Z_Construct_UClass_AVRActor_NoRegister();
	VRPLUGIN_API UClass* Z_Construct_UClass_AVRActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_VRPlugin();
	VRPLUGIN_API UFunction* Z_Construct_UFunction_AVRActor_OnHoverL();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	VRPLUGIN_API UFunction* Z_Construct_UFunction_AVRActor_OnHoverR();
	VRPLUGIN_API UFunction* Z_Construct_UFunction_AVRActor_OnOverlapL();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	VRPLUGIN_API UFunction* Z_Construct_UFunction_AVRActor_OnOverlapR();
	VRPLUGIN_API UFunction* Z_Construct_UFunction_AVRActor_OnTriggerDownL();
	VRPLUGIN_API UFunction* Z_Construct_UFunction_AVRActor_OnTriggerDownR();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	VRPLUGIN_API UFunction* Z_Construct_UFunction_AVRActor_OnTriggerUpL();
	VRPLUGIN_API UFunction* Z_Construct_UFunction_AVRActor_OnTriggerUpR();
	VRPLUGIN_API UClass* Z_Construct_UClass_UVRInterface_NoRegister();
// End Cross Module References
	static FName NAME_AVRActor_OnHoverL = FName(TEXT("OnHoverL"));
	void AVRActor::OnHoverL(UObject* HoverObject, FVector SelectPositon)
	{
		VRActor_eventOnHoverL_Parms Parms;
		Parms.HoverObject=HoverObject;
		Parms.SelectPositon=SelectPositon;
		ProcessEvent(FindFunctionChecked(NAME_AVRActor_OnHoverL),&Parms);
	}
	static FName NAME_AVRActor_OnHoverR = FName(TEXT("OnHoverR"));
	void AVRActor::OnHoverR(UObject* HoverObject)
	{
		VRActor_eventOnHoverR_Parms Parms;
		Parms.HoverObject=HoverObject;
		ProcessEvent(FindFunctionChecked(NAME_AVRActor_OnHoverR),&Parms);
	}
	static FName NAME_AVRActor_OnOverlapL = FName(TEXT("OnOverlapL"));
	void AVRActor::OnOverlapL(UPrimitiveComponent* Hand, FName HitBoneName)
	{
		VRActor_eventOnOverlapL_Parms Parms;
		Parms.Hand=Hand;
		Parms.HitBoneName=HitBoneName;
		ProcessEvent(FindFunctionChecked(NAME_AVRActor_OnOverlapL),&Parms);
	}
	static FName NAME_AVRActor_OnOverlapR = FName(TEXT("OnOverlapR"));
	void AVRActor::OnOverlapR(UPrimitiveComponent* Hand, FName HitBoneName)
	{
		VRActor_eventOnOverlapR_Parms Parms;
		Parms.Hand=Hand;
		Parms.HitBoneName=HitBoneName;
		ProcessEvent(FindFunctionChecked(NAME_AVRActor_OnOverlapR),&Parms);
	}
	static FName NAME_AVRActor_OnTriggerDownL = FName(TEXT("OnTriggerDownL"));
	void AVRActor::OnTriggerDownL(UPrimitiveComponent* Hand, FName HitBoneName, UObject* HitObject, FVector SelectPosition)
	{
		VRActor_eventOnTriggerDownL_Parms Parms;
		Parms.Hand=Hand;
		Parms.HitBoneName=HitBoneName;
		Parms.HitObject=HitObject;
		Parms.SelectPosition=SelectPosition;
		ProcessEvent(FindFunctionChecked(NAME_AVRActor_OnTriggerDownL),&Parms);
	}
	static FName NAME_AVRActor_OnTriggerDownR = FName(TEXT("OnTriggerDownR"));
	void AVRActor::OnTriggerDownR(UPrimitiveComponent* Hand, FName HitBoneName, UObject* HitObject, UCameraComponent* Camera)
	{
		VRActor_eventOnTriggerDownR_Parms Parms;
		Parms.Hand=Hand;
		Parms.HitBoneName=HitBoneName;
		Parms.HitObject=HitObject;
		Parms.Camera=Camera;
		ProcessEvent(FindFunctionChecked(NAME_AVRActor_OnTriggerDownR),&Parms);
	}
	static FName NAME_AVRActor_OnTriggerUpL = FName(TEXT("OnTriggerUpL"));
	void AVRActor::OnTriggerUpL()
	{
		ProcessEvent(FindFunctionChecked(NAME_AVRActor_OnTriggerUpL),NULL);
	}
	static FName NAME_AVRActor_OnTriggerUpR = FName(TEXT("OnTriggerUpR"));
	void AVRActor::OnTriggerUpR()
	{
		ProcessEvent(FindFunctionChecked(NAME_AVRActor_OnTriggerUpR),NULL);
	}
	void AVRActor::StaticRegisterNativesAVRActor()
	{
		UClass* Class = AVRActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnHoverL", &AVRActor::execOnHoverL },
			{ "OnHoverR", &AVRActor::execOnHoverR },
			{ "OnOverlapL", &AVRActor::execOnOverlapL },
			{ "OnOverlapR", &AVRActor::execOnOverlapR },
			{ "OnTriggerDownL", &AVRActor::execOnTriggerDownL },
			{ "OnTriggerDownR", &AVRActor::execOnTriggerDownR },
			{ "OnTriggerUpL", &AVRActor::execOnTriggerUpL },
			{ "OnTriggerUpR", &AVRActor::execOnTriggerUpR },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AVRActor_OnHoverL()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SelectPositon = { UE4CodeGen_Private::EPropertyClass::Struct, "SelectPositon", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRActor_eventOnHoverL_Parms, SelectPositon), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HoverObject = { UE4CodeGen_Private::EPropertyClass::Object, "HoverObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRActor_eventOnHoverL_Parms, HoverObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SelectPositon,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HoverObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRInterface1" },
				{ "ModuleRelativePath", "Public/VRActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRActor, "OnHoverL", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C820C00, sizeof(VRActor_eventOnHoverL_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVRActor_OnHoverR()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HoverObject = { UE4CodeGen_Private::EPropertyClass::Object, "HoverObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRActor_eventOnHoverR_Parms, HoverObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HoverObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRInterface1" },
				{ "ModuleRelativePath", "Public/VRActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRActor, "OnHoverR", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, sizeof(VRActor_eventOnHoverR_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVRActor_OnOverlapL()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_HitBoneName = { UE4CodeGen_Private::EPropertyClass::Name, "HitBoneName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRActor_eventOnOverlapL_Parms, HitBoneName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hand_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Hand = { UE4CodeGen_Private::EPropertyClass::Object, "Hand", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(VRActor_eventOnOverlapL_Parms, Hand), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_Hand_MetaData, ARRAY_COUNT(NewProp_Hand_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HitBoneName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Hand,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRInterface1" },
				{ "ModuleRelativePath", "Public/VRActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRActor, "OnOverlapL", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, sizeof(VRActor_eventOnOverlapL_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVRActor_OnOverlapR()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_HitBoneName = { UE4CodeGen_Private::EPropertyClass::Name, "HitBoneName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRActor_eventOnOverlapR_Parms, HitBoneName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hand_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Hand = { UE4CodeGen_Private::EPropertyClass::Object, "Hand", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(VRActor_eventOnOverlapR_Parms, Hand), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_Hand_MetaData, ARRAY_COUNT(NewProp_Hand_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HitBoneName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Hand,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRInterface1" },
				{ "ModuleRelativePath", "Public/VRActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRActor, "OnOverlapR", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, sizeof(VRActor_eventOnOverlapR_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVRActor_OnTriggerDownL()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SelectPosition = { UE4CodeGen_Private::EPropertyClass::Struct, "SelectPosition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRActor_eventOnTriggerDownL_Parms, SelectPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitObject = { UE4CodeGen_Private::EPropertyClass::Object, "HitObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRActor_eventOnTriggerDownL_Parms, HitObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_HitBoneName = { UE4CodeGen_Private::EPropertyClass::Name, "HitBoneName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRActor_eventOnTriggerDownL_Parms, HitBoneName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hand_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Hand = { UE4CodeGen_Private::EPropertyClass::Object, "Hand", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(VRActor_eventOnTriggerDownL_Parms, Hand), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_Hand_MetaData, ARRAY_COUNT(NewProp_Hand_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SelectPosition,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HitObject,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HitBoneName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Hand,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRInterface1" },
				{ "ModuleRelativePath", "Public/VRActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRActor, "OnTriggerDownL", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C820C00, sizeof(VRActor_eventOnTriggerDownL_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVRActor_OnTriggerDownR()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Camera = { UE4CodeGen_Private::EPropertyClass::Object, "Camera", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(VRActor_eventOnTriggerDownR_Parms, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(NewProp_Camera_MetaData, ARRAY_COUNT(NewProp_Camera_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitObject = { UE4CodeGen_Private::EPropertyClass::Object, "HitObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRActor_eventOnTriggerDownR_Parms, HitObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_HitBoneName = { UE4CodeGen_Private::EPropertyClass::Name, "HitBoneName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRActor_eventOnTriggerDownR_Parms, HitBoneName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hand_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Hand = { UE4CodeGen_Private::EPropertyClass::Object, "Hand", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(VRActor_eventOnTriggerDownR_Parms, Hand), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_Hand_MetaData, ARRAY_COUNT(NewProp_Hand_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Camera,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HitObject,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HitBoneName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Hand,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRInterface1" },
				{ "ModuleRelativePath", "Public/VRActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRActor, "OnTriggerDownR", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, sizeof(VRActor_eventOnTriggerDownR_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVRActor_OnTriggerUpL()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRInterface1" },
				{ "ModuleRelativePath", "Public/VRActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRActor, "OnTriggerUpL", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVRActor_OnTriggerUpR()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRInterface1" },
				{ "ModuleRelativePath", "Public/VRActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRActor, "OnTriggerUpR", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AVRActor_NoRegister()
	{
		return AVRActor::StaticClass();
	}
	UClass* Z_Construct_UClass_AVRActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_VRPlugin,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AVRActor_OnHoverL, "OnHoverL" }, // 1402834661
				{ &Z_Construct_UFunction_AVRActor_OnHoverR, "OnHoverR" }, // 382382914
				{ &Z_Construct_UFunction_AVRActor_OnOverlapL, "OnOverlapL" }, // 3593590930
				{ &Z_Construct_UFunction_AVRActor_OnOverlapR, "OnOverlapR" }, // 2960473066
				{ &Z_Construct_UFunction_AVRActor_OnTriggerDownL, "OnTriggerDownL" }, // 4168487876
				{ &Z_Construct_UFunction_AVRActor_OnTriggerDownR, "OnTriggerDownR" }, // 677518740
				{ &Z_Construct_UFunction_AVRActor_OnTriggerUpL, "OnTriggerUpL" }, // 3964651186
				{ &Z_Construct_UFunction_AVRActor_OnTriggerUpR, "OnTriggerUpR" }, // 183261931
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "VRActor.h" },
				{ "ModuleRelativePath", "Public/VRActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[] = {
				{ Z_Construct_UClass_UVRInterface_NoRegister, (int32)VTABLE_OFFSET(AVRActor, IVRInterface), false },
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AVRActor>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AVRActor::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				InterfaceParams, ARRAY_COUNT(InterfaceParams),
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVRActor, 4181174384);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVRActor(Z_Construct_UClass_AVRActor, &AVRActor::StaticClass, TEXT("/Script/VRPlugin"), TEXT("AVRActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVRActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
