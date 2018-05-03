// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/VRPlugin.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRPlugin_init() {}
	VRPLUGIN_API UFunction* Z_Construct_UDelegateFunction_VRPlugin_DownloadFileDelegate__DelegateSignature();
	VRPLUGIN_API UFunction* Z_Construct_UDelegateFunction_VRPlugin_HttpRequestManagerDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_VRPlugin()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_VRPlugin_DownloadFileDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_VRPlugin_HttpRequestManagerDelegate__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/VRPlugin",
				PKG_CompiledIn | 0x00000080,
				0xBC5CA5C8,
				0xF58E13D7,
				SingletonFuncArray, ARRAY_COUNT(SingletonFuncArray),
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
