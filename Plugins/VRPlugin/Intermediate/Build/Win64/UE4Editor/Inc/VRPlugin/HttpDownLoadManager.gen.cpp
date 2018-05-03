// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/VRPlugin.h"
#include "Public/HttpDownLoadManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHttpDownLoadManager() {}
// Cross Module References
	VRPLUGIN_API UFunction* Z_Construct_UDelegateFunction_VRPlugin_DownloadFileDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_VRPlugin();
	VRPLUGIN_API UClass* Z_Construct_UClass_UHttpDownloadManager_NoRegister();
	VRPLUGIN_API UClass* Z_Construct_UClass_UHttpDownloadManager();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	VRPLUGIN_API UFunction* Z_Construct_UFunction_UHttpDownloadManager_DownLoadFile();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_VRPlugin_DownloadFileDelegate__DelegateSignature()
	{
		struct _Script_VRPlugin_eventDownloadFileDelegate_Parms
		{
			FString DestinationPath;
			float DownloadPercent;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DownloadPercent = { UE4CodeGen_Private::EPropertyClass::Float, "DownloadPercent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_VRPlugin_eventDownloadFileDelegate_Parms, DownloadPercent), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_DestinationPath = { UE4CodeGen_Private::EPropertyClass::Str, "DestinationPath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_VRPlugin_eventDownloadFileDelegate_Parms, DestinationPath), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DownloadPercent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DestinationPath,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/HttpDownLoadManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_VRPlugin, "DownloadFileDelegate__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_VRPlugin_eventDownloadFileDelegate_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	void UHttpDownloadManager::StaticRegisterNativesUHttpDownloadManager()
	{
		UClass* Class = UHttpDownloadManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DownLoadFile", &UHttpDownloadManager::execDownLoadFile },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UHttpDownloadManager_DownLoadFile()
	{
		struct HttpDownloadManager_eventDownLoadFile_Parms
		{
			FString url;
			FString dir;
			UHttpDownloadManager* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(HttpDownloadManager_eventDownLoadFile_Parms, ReturnValue), Z_Construct_UClass_UHttpDownloadManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_dir = { UE4CodeGen_Private::EPropertyClass::Str, "dir", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HttpDownloadManager_eventDownLoadFile_Parms, dir), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_url = { UE4CodeGen_Private::EPropertyClass::Str, "url", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HttpDownloadManager_eventDownLoadFile_Parms, url), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_dir,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_url,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "UHttpDownloadManager" },
				{ "ModuleRelativePath", "Public/HttpDownLoadManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UHttpDownloadManager, "DownLoadFile", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(HttpDownloadManager_eventDownLoadFile_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHttpDownloadManager_NoRegister()
	{
		return UHttpDownloadManager::StaticClass();
	}
	UClass* Z_Construct_UClass_UHttpDownloadManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
				(UObject* (*)())Z_Construct_UPackage__Script_VRPlugin,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UHttpDownloadManager_DownLoadFile, "DownLoadFile" }, // 1365277355
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "HttpDownLoadManager.h" },
				{ "ModuleRelativePath", "Public/HttpDownLoadManager.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnProgress_MetaData[] = {
				{ "ModuleRelativePath", "Public/HttpDownLoadManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnProgress = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnProgress", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UHttpDownloadManager, OnProgress), Z_Construct_UDelegateFunction_VRPlugin_DownloadFileDelegate__DelegateSignature, METADATA_PARAMS(NewProp_OnProgress_MetaData, ARRAY_COUNT(NewProp_OnProgress_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFail_MetaData[] = {
				{ "ModuleRelativePath", "Public/HttpDownLoadManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFail = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnFail", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UHttpDownloadManager, OnFail), Z_Construct_UDelegateFunction_VRPlugin_DownloadFileDelegate__DelegateSignature, METADATA_PARAMS(NewProp_OnFail_MetaData, ARRAY_COUNT(NewProp_OnFail_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
				{ "ModuleRelativePath", "Public/HttpDownLoadManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnSuccess", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UHttpDownloadManager, OnSuccess), Z_Construct_UDelegateFunction_VRPlugin_DownloadFileDelegate__DelegateSignature, METADATA_PARAMS(NewProp_OnSuccess_MetaData, ARRAY_COUNT(NewProp_OnSuccess_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnProgress,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnFail,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnSuccess,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UHttpDownloadManager>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UHttpDownloadManager::StaticClass,
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
	IMPLEMENT_CLASS(UHttpDownloadManager, 963651707);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHttpDownloadManager(Z_Construct_UClass_UHttpDownloadManager, &UHttpDownloadManager::StaticClass, TEXT("/Script/VRPlugin"), TEXT("UHttpDownloadManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHttpDownloadManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
