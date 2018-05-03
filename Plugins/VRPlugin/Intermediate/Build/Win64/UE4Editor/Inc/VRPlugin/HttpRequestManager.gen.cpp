// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/VRPlugin.h"
#include "Public/HttpRequestManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHttpRequestManager() {}
// Cross Module References
	VRPLUGIN_API UFunction* Z_Construct_UDelegateFunction_VRPlugin_HttpRequestManagerDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_VRPlugin();
	VRPLUGIN_API UEnum* Z_Construct_UEnum_VRPlugin_EHttpRequestType();
	VRPLUGIN_API UClass* Z_Construct_UClass_UHttpRequestManager_NoRegister();
	VRPLUGIN_API UClass* Z_Construct_UClass_UHttpRequestManager();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	VRPLUGIN_API UFunction* Z_Construct_UFunction_UHttpRequestManager_HttpRequestString();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_VRPlugin_HttpRequestManagerDelegate__DelegateSignature()
	{
		struct _Script_VRPlugin_eventHttpRequestManagerDelegate_Parms
		{
			FString Content;
			int32 StatusCode;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_StatusCode = { UE4CodeGen_Private::EPropertyClass::Int, "StatusCode", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_VRPlugin_eventHttpRequestManagerDelegate_Parms, StatusCode), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Content = { UE4CodeGen_Private::EPropertyClass::Str, "Content", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_VRPlugin_eventHttpRequestManagerDelegate_Parms, Content), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StatusCode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Content,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/HttpRequestManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_VRPlugin, "HttpRequestManagerDelegate__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_VRPlugin_eventHttpRequestManagerDelegate_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EHttpRequestType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_VRPlugin_EHttpRequestType, Z_Construct_UPackage__Script_VRPlugin(), TEXT("EHttpRequestType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHttpRequestType(EHttpRequestType_StaticEnum, TEXT("/Script/VRPlugin"), TEXT("EHttpRequestType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_VRPlugin_EHttpRequestType_CRC() { return 994605905U; }
	UEnum* Z_Construct_UEnum_VRPlugin_EHttpRequestType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_VRPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHttpRequestType"), 0, Get_Z_Construct_UEnum_VRPlugin_EHttpRequestType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "_Get", (int64)_Get },
				{ "_Post", (int64)_Post },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/HttpRequestManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_VRPlugin,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EHttpRequestType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Regular,
				"EHttpRequestType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UHttpRequestManager::StaticRegisterNativesUHttpRequestManager()
	{
		UClass* Class = UHttpRequestManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HttpRequestString", &UHttpRequestManager::execHttpRequestString },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UHttpRequestManager_HttpRequestString()
	{
		struct HttpRequestManager_eventHttpRequestString_Parms
		{
			FString url;
			TEnumAsByte<EHttpRequestType> reType;
			FString content;
			TArray<uint8> content1;
			bool isbyte;
			UHttpRequestManager* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(HttpRequestManager_eventHttpRequestString_Parms, ReturnValue), Z_Construct_UClass_UHttpRequestManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_isbyte_SetBit = [](void* Obj){ ((HttpRequestManager_eventHttpRequestString_Parms*)Obj)->isbyte = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isbyte = { UE4CodeGen_Private::EPropertyClass::Bool, "isbyte", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(HttpRequestManager_eventHttpRequestString_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_isbyte_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_content1 = { UE4CodeGen_Private::EPropertyClass::Array, "content1", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HttpRequestManager_eventHttpRequestString_Parms, content1), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_content1_Inner = { UE4CodeGen_Private::EPropertyClass::Byte, "content1", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_content = { UE4CodeGen_Private::EPropertyClass::Str, "content", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HttpRequestManager_eventHttpRequestString_Parms, content), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_reType = { UE4CodeGen_Private::EPropertyClass::Byte, "reType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HttpRequestManager_eventHttpRequestString_Parms, reType), Z_Construct_UEnum_VRPlugin_EHttpRequestType, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_url = { UE4CodeGen_Private::EPropertyClass::Str, "url", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HttpRequestManager_eventHttpRequestString_Parms, url), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_isbyte,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_content1,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_content1_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_content,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_reType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_url,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "UHttpRequestManager" },
				{ "CPP_Default_isbyte", "false" },
				{ "ModuleRelativePath", "Public/HttpRequestManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UHttpRequestManager, "HttpRequestString", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(HttpRequestManager_eventHttpRequestString_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHttpRequestManager_NoRegister()
	{
		return UHttpRequestManager::StaticClass();
	}
	UClass* Z_Construct_UClass_UHttpRequestManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
				(UObject* (*)())Z_Construct_UPackage__Script_VRPlugin,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UHttpRequestManager_HttpRequestString, "HttpRequestString" }, // 530775569
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "HttpRequestManager.h" },
				{ "ModuleRelativePath", "Public/HttpRequestManager.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFailed_MetaData[] = {
				{ "ModuleRelativePath", "Public/HttpRequestManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailed = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnFailed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UHttpRequestManager, OnFailed), Z_Construct_UDelegateFunction_VRPlugin_HttpRequestManagerDelegate__DelegateSignature, METADATA_PARAMS(NewProp_OnFailed_MetaData, ARRAY_COUNT(NewProp_OnFailed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
				{ "ModuleRelativePath", "Public/HttpRequestManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnSuccess", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UHttpRequestManager, OnSuccess), Z_Construct_UDelegateFunction_VRPlugin_HttpRequestManagerDelegate__DelegateSignature, METADATA_PARAMS(NewProp_OnSuccess_MetaData, ARRAY_COUNT(NewProp_OnSuccess_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnFailed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnSuccess,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UHttpRequestManager>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UHttpRequestManager::StaticClass,
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
	IMPLEMENT_CLASS(UHttpRequestManager, 2403337619);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHttpRequestManager(Z_Construct_UClass_UHttpRequestManager, &UHttpRequestManager::StaticClass, TEXT("/Script/VRPlugin"), TEXT("UHttpRequestManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHttpRequestManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
