// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/VRPlugin.h"
#include "Public/FilesManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFilesManager() {}
// Cross Module References
	VRPLUGIN_API UClass* Z_Construct_UClass_UFilesManager_NoRegister();
	VRPLUGIN_API UClass* Z_Construct_UClass_UFilesManager();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_VRPlugin();
	VRPLUGIN_API UFunction* Z_Construct_UFunction_UFilesManager_CreateFile();
	VRPLUGIN_API UFunction* Z_Construct_UFunction_UFilesManager_CreateFolder();
	VRPLUGIN_API UFunction* Z_Construct_UFunction_UFilesManager_DeleteFile();
	VRPLUGIN_API UFunction* Z_Construct_UFunction_UFilesManager_DeleteFolder();
	VRPLUGIN_API UFunction* Z_Construct_UFunction_UFilesManager_EncodingToBase64FromByte();
	VRPLUGIN_API UFunction* Z_Construct_UFunction_UFilesManager_EncodingToBase64Str();
	VRPLUGIN_API UFunction* Z_Construct_UFunction_UFilesManager_GetFileSize();
	VRPLUGIN_API UFunction* Z_Construct_UFunction_UFilesManager_GetFullGameContentPath();
	VRPLUGIN_API UFunction* Z_Construct_UFunction_UFilesManager_GetFullGameSavePath();
	VRPLUGIN_API UFunction* Z_Construct_UFunction_UFilesManager_IsFileExist();
	VRPLUGIN_API UFunction* Z_Construct_UFunction_UFilesManager_LoadAsset_Runtime();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	VRPLUGIN_API UFunction* Z_Construct_UFunction_UFilesManager_LoadFileToByteBuffer();
	VRPLUGIN_API UFunction* Z_Construct_UFunction_UFilesManager_LoadFileToStrBuffer();
	VRPLUGIN_API UFunction* Z_Construct_UFunction_UFilesManager_LoadTexture2D();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	VRPLUGIN_API UFunction* Z_Construct_UFunction_UFilesManager_ReadFile();
	VRPLUGIN_API UFunction* Z_Construct_UFunction_UFilesManager_WriteFile();
// End Cross Module References
	void UFilesManager::StaticRegisterNativesUFilesManager()
	{
		UClass* Class = UFilesManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateFile", &UFilesManager::execCreateFile },
			{ "CreateFolder", &UFilesManager::execCreateFolder },
			{ "DeleteFile", &UFilesManager::execDeleteFile },
			{ "DeleteFolder", &UFilesManager::execDeleteFolder },
			{ "EncodingToBase64FromByte", &UFilesManager::execEncodingToBase64FromByte },
			{ "EncodingToBase64Str", &UFilesManager::execEncodingToBase64Str },
			{ "GetFileSize", &UFilesManager::execGetFileSize },
			{ "GetFullGameContentPath", &UFilesManager::execGetFullGameContentPath },
			{ "GetFullGameSavePath", &UFilesManager::execGetFullGameSavePath },
			{ "IsFileExist", &UFilesManager::execIsFileExist },
			{ "LoadAsset_Runtime", &UFilesManager::execLoadAsset_Runtime },
			{ "LoadFileToByteBuffer", &UFilesManager::execLoadFileToByteBuffer },
			{ "LoadFileToStrBuffer", &UFilesManager::execLoadFileToStrBuffer },
			{ "LoadTexture2D", &UFilesManager::execLoadTexture2D },
			{ "ReadFile", &UFilesManager::execReadFile },
			{ "WriteFile", &UFilesManager::execWriteFile },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UFilesManager_CreateFile()
	{
		struct FilesManager_eventCreateFile_Parms
		{
			FString Path;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Path = { UE4CodeGen_Private::EPropertyClass::Str, "Path", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FilesManager_eventCreateFile_Parms, Path), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Path,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "UFilesManager|Files|Files" },
				{ "CompactNodeTitle", "Files" },
				{ "Keywords", "CreateFile" },
				{ "ModuleRelativePath", "Public/FilesManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UFilesManager, "CreateFile", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(FilesManager_eventCreateFile_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UFilesManager_CreateFolder()
	{
		struct FilesManager_eventCreateFolder_Parms
		{
			FString Path;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((FilesManager_eventCreateFolder_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FilesManager_eventCreateFolder_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Path = { UE4CodeGen_Private::EPropertyClass::Str, "Path", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FilesManager_eventCreateFolder_Parms, Path), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Path,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "UFilesManager|Files|Files" },
				{ "CompactNodeTitle", "Files" },
				{ "Keywords", "CreateFolder" },
				{ "ModuleRelativePath", "Public/FilesManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UFilesManager, "CreateFolder", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(FilesManager_eventCreateFolder_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UFilesManager_DeleteFile()
	{
		struct FilesManager_eventDeleteFile_Parms
		{
			FString Path;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((FilesManager_eventDeleteFile_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FilesManager_eventDeleteFile_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Path = { UE4CodeGen_Private::EPropertyClass::Str, "Path", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FilesManager_eventDeleteFile_Parms, Path), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Path,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "UFilesManager|Files|Files" },
				{ "CompactNodeTitle", "Files" },
				{ "Keywords", "DeleteFile" },
				{ "ModuleRelativePath", "Public/FilesManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UFilesManager, "DeleteFile", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(FilesManager_eventDeleteFile_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UFilesManager_DeleteFolder()
	{
		struct FilesManager_eventDeleteFolder_Parms
		{
			FString Path;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((FilesManager_eventDeleteFolder_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FilesManager_eventDeleteFolder_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Path = { UE4CodeGen_Private::EPropertyClass::Str, "Path", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FilesManager_eventDeleteFolder_Parms, Path), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Path,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "UFilesManager|Files|Files" },
				{ "CompactNodeTitle", "Files" },
				{ "Keywords", "DeleteFolder" },
				{ "ModuleRelativePath", "Public/FilesManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UFilesManager, "DeleteFolder", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(FilesManager_eventDeleteFolder_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UFilesManager_EncodingToBase64FromByte()
	{
		struct FilesManager_eventEncodingToBase64FromByte_Parms
		{
			TArray<uint8> bytes;
			FString base64STR;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_base64STR = { UE4CodeGen_Private::EPropertyClass::Str, "base64STR", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(FilesManager_eventEncodingToBase64FromByte_Parms, base64STR), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_bytes = { UE4CodeGen_Private::EPropertyClass::Array, "bytes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FilesManager_eventEncodingToBase64FromByte_Parms, bytes), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_bytes_Inner = { UE4CodeGen_Private::EPropertyClass::Byte, "bytes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_base64STR,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bytes,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bytes_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "UFilesManager" },
				{ "ModuleRelativePath", "Public/FilesManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UFilesManager, "EncodingToBase64FromByte", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(FilesManager_eventEncodingToBase64FromByte_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UFilesManager_EncodingToBase64Str()
	{
		struct FilesManager_eventEncodingToBase64Str_Parms
		{
			FString source;
			FString OutStr;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_OutStr = { UE4CodeGen_Private::EPropertyClass::Str, "OutStr", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(FilesManager_eventEncodingToBase64Str_Parms, OutStr), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_source = { UE4CodeGen_Private::EPropertyClass::Str, "source", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FilesManager_eventEncodingToBase64Str_Parms, source), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutStr,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_source,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "UFilesManager" },
				{ "ModuleRelativePath", "Public/FilesManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UFilesManager, "EncodingToBase64Str", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(FilesManager_eventEncodingToBase64Str_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UFilesManager_GetFileSize()
	{
		struct FilesManager_eventGetFileSize_Parms
		{
			FString Path;
			int32 size;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((FilesManager_eventGetFileSize_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FilesManager_eventGetFileSize_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_size = { UE4CodeGen_Private::EPropertyClass::Int, "size", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(FilesManager_eventGetFileSize_Parms, size), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Path = { UE4CodeGen_Private::EPropertyClass::Str, "Path", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FilesManager_eventGetFileSize_Parms, Path), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_size,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Path,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "UFilesManager|Files|Files" },
				{ "CompactNodeTitle", "Files" },
				{ "Keywords", "GetFileSize" },
				{ "ModuleRelativePath", "Public/FilesManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UFilesManager, "GetFileSize", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(FilesManager_eventGetFileSize_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UFilesManager_GetFullGameContentPath()
	{
		struct FilesManager_eventGetFullGameContentPath_Parms
		{
			FString ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FilesManager_eventGetFullGameContentPath_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "UFilesManager|Paths|Paths" },
				{ "CompactNodeTitle", "Paths" },
				{ "Keywords", "GetFullGameContentPath" },
				{ "ModuleRelativePath", "Public/FilesManager.h" },
				{ "ToolTip", "Paths" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UFilesManager, "GetFullGameContentPath", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(FilesManager_eventGetFullGameContentPath_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UFilesManager_GetFullGameSavePath()
	{
		struct FilesManager_eventGetFullGameSavePath_Parms
		{
			FString ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FilesManager_eventGetFullGameSavePath_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "UFilesManager|Paths|Paths" },
				{ "CompactNodeTitle", "Paths" },
				{ "Keywords", "GetFullGameSavePath" },
				{ "ModuleRelativePath", "Public/FilesManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UFilesManager, "GetFullGameSavePath", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(FilesManager_eventGetFullGameSavePath_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UFilesManager_IsFileExist()
	{
		struct FilesManager_eventIsFileExist_Parms
		{
			FString Path;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((FilesManager_eventIsFileExist_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FilesManager_eventIsFileExist_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Path = { UE4CodeGen_Private::EPropertyClass::Str, "Path", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FilesManager_eventIsFileExist_Parms, Path), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Path,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "UFilesManager|Files|Files" },
				{ "CompactNodeTitle", "Files" },
				{ "Keywords", "IsFileExist" },
				{ "ModuleRelativePath", "Public/FilesManager.h" },
				{ "ToolTip", "Files" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UFilesManager, "IsFileExist", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(FilesManager_eventIsFileExist_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UFilesManager_LoadAsset_Runtime()
	{
		struct FilesManager_eventLoadAsset_Runtime_Parms
		{
			TSubclassOf<UObject>  InClass;
			FString LocalPath;
			UObject* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FilesManager_eventLoadAsset_Runtime_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_LocalPath = { UE4CodeGen_Private::EPropertyClass::Str, "LocalPath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FilesManager_eventLoadAsset_Runtime_Parms, LocalPath), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_InClass = { UE4CodeGen_Private::EPropertyClass::Class, "InClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000080, 1, nullptr, STRUCT_OFFSET(FilesManager_eventLoadAsset_Runtime_Parms, InClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LocalPath,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InClass,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "UFilesManager|Files|Files" },
				{ "CompactNodeTitle", "Files" },
				{ "Keywords", "ReadFile" },
				{ "ModuleRelativePath", "Public/FilesManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UFilesManager, "LoadAsset_Runtime", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(FilesManager_eventLoadAsset_Runtime_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UFilesManager_LoadFileToByteBuffer()
	{
		struct FilesManager_eventLoadFileToByteBuffer_Parms
		{
			FString absPath;
			TArray<uint8> outByte;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((FilesManager_eventLoadFileToByteBuffer_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FilesManager_eventLoadFileToByteBuffer_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_outByte = { UE4CodeGen_Private::EPropertyClass::Array, "outByte", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(FilesManager_eventLoadFileToByteBuffer_Parms, outByte), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_outByte_Inner = { UE4CodeGen_Private::EPropertyClass::Byte, "outByte", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_absPath = { UE4CodeGen_Private::EPropertyClass::Str, "absPath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FilesManager_eventLoadFileToByteBuffer_Parms, absPath), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_outByte,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_outByte_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_absPath,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "UFilesManager|Files|Files" },
				{ "CompactNodeTitle", "Files" },
				{ "Keywords", "ReadFile" },
				{ "ModuleRelativePath", "Public/FilesManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UFilesManager, "LoadFileToByteBuffer", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(FilesManager_eventLoadFileToByteBuffer_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UFilesManager_LoadFileToStrBuffer()
	{
		struct FilesManager_eventLoadFileToStrBuffer_Parms
		{
			FString absPath;
			FString ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FilesManager_eventLoadFileToStrBuffer_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_absPath = { UE4CodeGen_Private::EPropertyClass::Str, "absPath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FilesManager_eventLoadFileToStrBuffer_Parms, absPath), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_absPath,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "UFilesManager|Files|Files" },
				{ "CompactNodeTitle", "Files" },
				{ "Keywords", "ReadFile" },
				{ "ModuleRelativePath", "Public/FilesManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UFilesManager, "LoadFileToStrBuffer", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(FilesManager_eventLoadFileToStrBuffer_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UFilesManager_LoadTexture2D()
	{
		struct FilesManager_eventLoadTexture2D_Parms
		{
			FString ImagePath;
			bool IsValid;
			int32 OutWidth;
			int32 OutHeight;
			UTexture2D* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FilesManager_eventLoadTexture2D_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_OutHeight = { UE4CodeGen_Private::EPropertyClass::Int, "OutHeight", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(FilesManager_eventLoadTexture2D_Parms, OutHeight), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_OutWidth = { UE4CodeGen_Private::EPropertyClass::Int, "OutWidth", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(FilesManager_eventLoadTexture2D_Parms, OutWidth), METADATA_PARAMS(nullptr, 0) };
			auto NewProp_IsValid_SetBit = [](void* Obj){ ((FilesManager_eventLoadTexture2D_Parms*)Obj)->IsValid = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsValid = { UE4CodeGen_Private::EPropertyClass::Bool, "IsValid", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FilesManager_eventLoadTexture2D_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_IsValid_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImagePath_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ImagePath = { UE4CodeGen_Private::EPropertyClass::Str, "ImagePath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FilesManager_eventLoadTexture2D_Parms, ImagePath), METADATA_PARAMS(NewProp_ImagePath_MetaData, ARRAY_COUNT(NewProp_ImagePath_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutHeight,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutWidth,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IsValid,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ImagePath,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "UFilesManager|Files|Files" },
				{ "CompactNodeTitle", "Files" },
				{ "Keywords", "ReadFile" },
				{ "ModuleRelativePath", "Public/FilesManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UFilesManager, "LoadTexture2D", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(FilesManager_eventLoadTexture2D_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UFilesManager_ReadFile()
	{
		struct FilesManager_eventReadFile_Parms
		{
			FString Path;
			TArray<FString> OutChars;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((FilesManager_eventReadFile_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FilesManager_eventReadFile_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutChars = { UE4CodeGen_Private::EPropertyClass::Array, "OutChars", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(FilesManager_eventReadFile_Parms, OutChars), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_OutChars_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "OutChars", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Path = { UE4CodeGen_Private::EPropertyClass::Str, "Path", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FilesManager_eventReadFile_Parms, Path), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutChars,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutChars_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Path,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "UFilesManager|Files|Files" },
				{ "CompactNodeTitle", "Files" },
				{ "Keywords", "ReadFile" },
				{ "ModuleRelativePath", "Public/FilesManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UFilesManager, "ReadFile", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(FilesManager_eventReadFile_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UFilesManager_WriteFile()
	{
		struct FilesManager_eventWriteFile_Parms
		{
			FString Path;
			FString InChars;
			bool Overwrite;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((FilesManager_eventWriteFile_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FilesManager_eventWriteFile_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_Overwrite_SetBit = [](void* Obj){ ((FilesManager_eventWriteFile_Parms*)Obj)->Overwrite = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Overwrite = { UE4CodeGen_Private::EPropertyClass::Bool, "Overwrite", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FilesManager_eventWriteFile_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_Overwrite_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_InChars = { UE4CodeGen_Private::EPropertyClass::Str, "InChars", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FilesManager_eventWriteFile_Parms, InChars), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Path = { UE4CodeGen_Private::EPropertyClass::Str, "Path", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FilesManager_eventWriteFile_Parms, Path), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Overwrite,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InChars,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Path,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "UFilesManager|Files|Files" },
				{ "CompactNodeTitle", "Files" },
				{ "Keywords", "WirteFile" },
				{ "ModuleRelativePath", "Public/FilesManager.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UFilesManager, "WriteFile", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(FilesManager_eventWriteFile_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFilesManager_NoRegister()
	{
		return UFilesManager::StaticClass();
	}
	UClass* Z_Construct_UClass_UFilesManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
				(UObject* (*)())Z_Construct_UPackage__Script_VRPlugin,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UFilesManager_CreateFile, "CreateFile" }, // 4010480859
				{ &Z_Construct_UFunction_UFilesManager_CreateFolder, "CreateFolder" }, // 1989809467
				{ &Z_Construct_UFunction_UFilesManager_DeleteFile, "DeleteFile" }, // 2752966287
				{ &Z_Construct_UFunction_UFilesManager_DeleteFolder, "DeleteFolder" }, // 841704798
				{ &Z_Construct_UFunction_UFilesManager_EncodingToBase64FromByte, "EncodingToBase64FromByte" }, // 3224767019
				{ &Z_Construct_UFunction_UFilesManager_EncodingToBase64Str, "EncodingToBase64Str" }, // 3258987305
				{ &Z_Construct_UFunction_UFilesManager_GetFileSize, "GetFileSize" }, // 189491405
				{ &Z_Construct_UFunction_UFilesManager_GetFullGameContentPath, "GetFullGameContentPath" }, // 2067059477
				{ &Z_Construct_UFunction_UFilesManager_GetFullGameSavePath, "GetFullGameSavePath" }, // 2905398731
				{ &Z_Construct_UFunction_UFilesManager_IsFileExist, "IsFileExist" }, // 2613182871
				{ &Z_Construct_UFunction_UFilesManager_LoadAsset_Runtime, "LoadAsset_Runtime" }, // 1075404446
				{ &Z_Construct_UFunction_UFilesManager_LoadFileToByteBuffer, "LoadFileToByteBuffer" }, // 4235693199
				{ &Z_Construct_UFunction_UFilesManager_LoadFileToStrBuffer, "LoadFileToStrBuffer" }, // 1461674901
				{ &Z_Construct_UFunction_UFilesManager_LoadTexture2D, "LoadTexture2D" }, // 2712099993
				{ &Z_Construct_UFunction_UFilesManager_ReadFile, "ReadFile" }, // 1796922596
				{ &Z_Construct_UFunction_UFilesManager_WriteFile, "WriteFile" }, // 3918142690
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "FilesManager.h" },
				{ "ModuleRelativePath", "Public/FilesManager.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UFilesManager>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UFilesManager::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
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
	IMPLEMENT_CLASS(UFilesManager, 2984719441);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFilesManager(Z_Construct_UClass_UFilesManager, &UFilesManager::StaticClass, TEXT("/Script/VRPlugin"), TEXT("UFilesManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFilesManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
