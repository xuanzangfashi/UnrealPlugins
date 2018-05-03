// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/VRPlugin.h"
#include "Public/VRInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRInterface() {}
// Cross Module References
	VRPLUGIN_API UClass* Z_Construct_UClass_UVRInterface_NoRegister();
	VRPLUGIN_API UClass* Z_Construct_UClass_UVRInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_VRPlugin();
	VRPLUGIN_API UFunction* Z_Construct_UFunction_UVRInterface_OnHoverL();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	VRPLUGIN_API UFunction* Z_Construct_UFunction_UVRInterface_OnHoverR();
	VRPLUGIN_API UFunction* Z_Construct_UFunction_UVRInterface_OnOverlapL();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	VRPLUGIN_API UFunction* Z_Construct_UFunction_UVRInterface_OnOverlapR();
	VRPLUGIN_API UFunction* Z_Construct_UFunction_UVRInterface_OnTriggerDownL();
	VRPLUGIN_API UFunction* Z_Construct_UFunction_UVRInterface_OnTriggerDownR();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	VRPLUGIN_API UFunction* Z_Construct_UFunction_UVRInterface_OnTriggerUpL();
	VRPLUGIN_API UFunction* Z_Construct_UFunction_UVRInterface_OnTriggerUpR();
// End Cross Module References
	void IVRInterface::OnHoverL(UObject* HoverObject, FVector SelectPositon)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnHoverL instead.");
	}
	void IVRInterface::OnHoverR(UObject* HoverObject)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnHoverR instead.");
	}
	void IVRInterface::OnOverlapL(UPrimitiveComponent* Hand, FName HitBoneName)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnOverlapL instead.");
	}
	void IVRInterface::OnOverlapR(UPrimitiveComponent* Hand, FName HitBoneName)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnOverlapR instead.");
	}
	void IVRInterface::OnTriggerDownL(UPrimitiveComponent* Hand, FName HitBoneName, UObject* HitObject, FVector SelectPosition)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnTriggerDownL instead.");
	}
	void IVRInterface::OnTriggerDownR(UPrimitiveComponent* Hand, FName HitBoneName, UObject* HitObject, UCameraComponent* Camera)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnTriggerDownR instead.");
	}
	void IVRInterface::OnTriggerUpL()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnTriggerUpL instead.");
	}
	void IVRInterface::OnTriggerUpR()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnTriggerUpR instead.");
	}
	void UVRInterface::StaticRegisterNativesUVRInterface()
	{
		UClass* Class = UVRInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnHoverL", &IVRInterface::execOnHoverL },
			{ "OnHoverR", &IVRInterface::execOnHoverR },
			{ "OnOverlapL", &IVRInterface::execOnOverlapL },
			{ "OnOverlapR", &IVRInterface::execOnOverlapR },
			{ "OnTriggerDownL", &IVRInterface::execOnTriggerDownL },
			{ "OnTriggerDownR", &IVRInterface::execOnTriggerDownR },
			{ "OnTriggerUpL", &IVRInterface::execOnTriggerUpL },
			{ "OnTriggerUpR", &IVRInterface::execOnTriggerUpR },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UVRInterface_OnHoverL()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SelectPositon = { UE4CodeGen_Private::EPropertyClass::Struct, "SelectPositon", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRInterface_eventOnHoverL_Parms, SelectPositon), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HoverObject = { UE4CodeGen_Private::EPropertyClass::Object, "HoverObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRInterface_eventOnHoverL_Parms, HoverObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SelectPositon,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HoverObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRInterface" },
				{ "ModuleRelativePath", "Public/VRInterface.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRInterface, "OnHoverL", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C820C00, sizeof(VRInterface_eventOnHoverL_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRInterface_OnHoverR()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HoverObject = { UE4CodeGen_Private::EPropertyClass::Object, "HoverObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRInterface_eventOnHoverR_Parms, HoverObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HoverObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRInterface" },
				{ "ModuleRelativePath", "Public/VRInterface.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRInterface, "OnHoverR", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, sizeof(VRInterface_eventOnHoverR_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRInterface_OnOverlapL()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_HitBoneName = { UE4CodeGen_Private::EPropertyClass::Name, "HitBoneName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRInterface_eventOnOverlapL_Parms, HitBoneName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hand_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Hand = { UE4CodeGen_Private::EPropertyClass::Object, "Hand", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(VRInterface_eventOnOverlapL_Parms, Hand), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_Hand_MetaData, ARRAY_COUNT(NewProp_Hand_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HitBoneName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Hand,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRInterface" },
				{ "ModuleRelativePath", "Public/VRInterface.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRInterface, "OnOverlapL", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, sizeof(VRInterface_eventOnOverlapL_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRInterface_OnOverlapR()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_HitBoneName = { UE4CodeGen_Private::EPropertyClass::Name, "HitBoneName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRInterface_eventOnOverlapR_Parms, HitBoneName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hand_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Hand = { UE4CodeGen_Private::EPropertyClass::Object, "Hand", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(VRInterface_eventOnOverlapR_Parms, Hand), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_Hand_MetaData, ARRAY_COUNT(NewProp_Hand_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HitBoneName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Hand,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRInterface" },
				{ "ModuleRelativePath", "Public/VRInterface.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRInterface, "OnOverlapR", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, sizeof(VRInterface_eventOnOverlapR_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRInterface_OnTriggerDownL()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_SelectPosition = { UE4CodeGen_Private::EPropertyClass::Struct, "SelectPosition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRInterface_eventOnTriggerDownL_Parms, SelectPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitObject = { UE4CodeGen_Private::EPropertyClass::Object, "HitObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRInterface_eventOnTriggerDownL_Parms, HitObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_HitBoneName = { UE4CodeGen_Private::EPropertyClass::Name, "HitBoneName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRInterface_eventOnTriggerDownL_Parms, HitBoneName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hand_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Hand = { UE4CodeGen_Private::EPropertyClass::Object, "Hand", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(VRInterface_eventOnTriggerDownL_Parms, Hand), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_Hand_MetaData, ARRAY_COUNT(NewProp_Hand_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SelectPosition,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HitObject,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HitBoneName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Hand,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRInterface" },
				{ "ModuleRelativePath", "Public/VRInterface.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRInterface, "OnTriggerDownL", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C820C00, sizeof(VRInterface_eventOnTriggerDownL_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRInterface_OnTriggerDownR()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Camera = { UE4CodeGen_Private::EPropertyClass::Object, "Camera", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(VRInterface_eventOnTriggerDownR_Parms, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(NewProp_Camera_MetaData, ARRAY_COUNT(NewProp_Camera_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitObject = { UE4CodeGen_Private::EPropertyClass::Object, "HitObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRInterface_eventOnTriggerDownR_Parms, HitObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_HitBoneName = { UE4CodeGen_Private::EPropertyClass::Name, "HitBoneName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VRInterface_eventOnTriggerDownR_Parms, HitBoneName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hand_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Hand = { UE4CodeGen_Private::EPropertyClass::Object, "Hand", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(VRInterface_eventOnTriggerDownR_Parms, Hand), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(NewProp_Hand_MetaData, ARRAY_COUNT(NewProp_Hand_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Camera,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HitObject,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HitBoneName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Hand,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRInterface" },
				{ "ModuleRelativePath", "Public/VRInterface.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRInterface, "OnTriggerDownR", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, sizeof(VRInterface_eventOnTriggerDownR_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRInterface_OnTriggerUpL()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRInterface" },
				{ "ModuleRelativePath", "Public/VRInterface.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRInterface, "OnTriggerUpL", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVRInterface_OnTriggerUpR()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VRInterface" },
				{ "ModuleRelativePath", "Public/VRInterface.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRInterface, "OnTriggerUpR", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVRInterface_NoRegister()
	{
		return UVRInterface::StaticClass();
	}
	UClass* Z_Construct_UClass_UVRInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UInterface,
				(UObject* (*)())Z_Construct_UPackage__Script_VRPlugin,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UVRInterface_OnHoverL, "OnHoverL" }, // 4086862558
				{ &Z_Construct_UFunction_UVRInterface_OnHoverR, "OnHoverR" }, // 2584792541
				{ &Z_Construct_UFunction_UVRInterface_OnOverlapL, "OnOverlapL" }, // 2854760079
				{ &Z_Construct_UFunction_UVRInterface_OnOverlapR, "OnOverlapR" }, // 1246651509
				{ &Z_Construct_UFunction_UVRInterface_OnTriggerDownL, "OnTriggerDownL" }, // 3373636271
				{ &Z_Construct_UFunction_UVRInterface_OnTriggerDownR, "OnTriggerDownR" }, // 2571289555
				{ &Z_Construct_UFunction_UVRInterface_OnTriggerUpL, "OnTriggerUpL" }, // 364336317
				{ &Z_Construct_UFunction_UVRInterface_OnTriggerUpR, "OnTriggerUpR" }, // 3631976408
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/VRInterface.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<IVRInterface>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UVRInterface::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00084081u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVRInterface, 494727722);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVRInterface(Z_Construct_UClass_UVRInterface, &UVRInterface::StaticClass, TEXT("/Script/VRPlugin"), TEXT("UVRInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVRInterface);
	static FName NAME_UVRInterface_OnHoverL = FName(TEXT("OnHoverL"));
	void IVRInterface::Execute_OnHoverL(UObject* O, UObject* HoverObject, FVector SelectPositon)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVRInterface::StaticClass()));
		VRInterface_eventOnHoverL_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVRInterface_OnHoverL);
		if (Func)
		{
			Parms.HoverObject=HoverObject;
			Parms.SelectPositon=SelectPositon;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVRInterface*)(O->GetNativeInterfaceAddress(UVRInterface::StaticClass())))
		{
			I->OnHoverL_Implementation(HoverObject,SelectPositon);
		}
	}
	static FName NAME_UVRInterface_OnHoverR = FName(TEXT("OnHoverR"));
	void IVRInterface::Execute_OnHoverR(UObject* O, UObject* HoverObject)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVRInterface::StaticClass()));
		VRInterface_eventOnHoverR_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVRInterface_OnHoverR);
		if (Func)
		{
			Parms.HoverObject=HoverObject;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVRInterface*)(O->GetNativeInterfaceAddress(UVRInterface::StaticClass())))
		{
			I->OnHoverR_Implementation(HoverObject);
		}
	}
	static FName NAME_UVRInterface_OnOverlapL = FName(TEXT("OnOverlapL"));
	void IVRInterface::Execute_OnOverlapL(UObject* O, UPrimitiveComponent* Hand, FName HitBoneName)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVRInterface::StaticClass()));
		VRInterface_eventOnOverlapL_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVRInterface_OnOverlapL);
		if (Func)
		{
			Parms.Hand=Hand;
			Parms.HitBoneName=HitBoneName;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVRInterface*)(O->GetNativeInterfaceAddress(UVRInterface::StaticClass())))
		{
			I->OnOverlapL_Implementation(Hand,HitBoneName);
		}
	}
	static FName NAME_UVRInterface_OnOverlapR = FName(TEXT("OnOverlapR"));
	void IVRInterface::Execute_OnOverlapR(UObject* O, UPrimitiveComponent* Hand, FName HitBoneName)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVRInterface::StaticClass()));
		VRInterface_eventOnOverlapR_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVRInterface_OnOverlapR);
		if (Func)
		{
			Parms.Hand=Hand;
			Parms.HitBoneName=HitBoneName;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVRInterface*)(O->GetNativeInterfaceAddress(UVRInterface::StaticClass())))
		{
			I->OnOverlapR_Implementation(Hand,HitBoneName);
		}
	}
	static FName NAME_UVRInterface_OnTriggerDownL = FName(TEXT("OnTriggerDownL"));
	void IVRInterface::Execute_OnTriggerDownL(UObject* O, UPrimitiveComponent* Hand, FName HitBoneName, UObject* HitObject, FVector SelectPosition)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVRInterface::StaticClass()));
		VRInterface_eventOnTriggerDownL_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVRInterface_OnTriggerDownL);
		if (Func)
		{
			Parms.Hand=Hand;
			Parms.HitBoneName=HitBoneName;
			Parms.HitObject=HitObject;
			Parms.SelectPosition=SelectPosition;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVRInterface*)(O->GetNativeInterfaceAddress(UVRInterface::StaticClass())))
		{
			I->OnTriggerDownL_Implementation(Hand,HitBoneName,HitObject,SelectPosition);
		}
	}
	static FName NAME_UVRInterface_OnTriggerDownR = FName(TEXT("OnTriggerDownR"));
	void IVRInterface::Execute_OnTriggerDownR(UObject* O, UPrimitiveComponent* Hand, FName HitBoneName, UObject* HitObject, UCameraComponent* Camera)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVRInterface::StaticClass()));
		VRInterface_eventOnTriggerDownR_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UVRInterface_OnTriggerDownR);
		if (Func)
		{
			Parms.Hand=Hand;
			Parms.HitBoneName=HitBoneName;
			Parms.HitObject=HitObject;
			Parms.Camera=Camera;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IVRInterface*)(O->GetNativeInterfaceAddress(UVRInterface::StaticClass())))
		{
			I->OnTriggerDownR_Implementation(Hand,HitBoneName,HitObject,Camera);
		}
	}
	static FName NAME_UVRInterface_OnTriggerUpL = FName(TEXT("OnTriggerUpL"));
	void IVRInterface::Execute_OnTriggerUpL(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVRInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UVRInterface_OnTriggerUpL);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IVRInterface*)(O->GetNativeInterfaceAddress(UVRInterface::StaticClass())))
		{
			I->OnTriggerUpL_Implementation();
		}
	}
	static FName NAME_UVRInterface_OnTriggerUpR = FName(TEXT("OnTriggerUpR"));
	void IVRInterface::Execute_OnTriggerUpR(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UVRInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UVRInterface_OnTriggerUpR);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IVRInterface*)(O->GetNativeInterfaceAddress(UVRInterface::StaticClass())))
		{
			I->OnTriggerUpR_Implementation();
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
