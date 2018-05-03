// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture2D;
class UObject;
#ifdef VRPLUGIN_FilesManager_generated_h
#error "FilesManager.generated.h already included, missing '#pragma once' in FilesManager.h"
#endif
#define VRPLUGIN_FilesManager_generated_h

#define Racing_Plugins_VRPlugin_Source_VRPlugin_Public_FilesManager_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLoadTexture2D) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ImagePath); \
		P_GET_UBOOL_REF(Z_Param_Out_IsValid); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_OutWidth); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_OutHeight); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture2D**)Z_Param__Result=UFilesManager::LoadTexture2D(Z_Param_ImagePath,Z_Param_Out_IsValid,Z_Param_Out_OutWidth,Z_Param_Out_OutHeight); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadAsset_Runtime) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_InClass); \
		P_GET_PROPERTY(UStrProperty,Z_Param_LocalPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UObject**)Z_Param__Result=UFilesManager::LoadAsset_Runtime(Z_Param_InClass,Z_Param_LocalPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEncodingToBase64FromByte) \
	{ \
		P_GET_TARRAY(uint8,Z_Param_bytes); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_base64STR); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFilesManager::EncodingToBase64FromByte(Z_Param_bytes,Z_Param_Out_base64STR); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEncodingToBase64Str) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_source); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_OutStr); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFilesManager::EncodingToBase64Str(Z_Param_source,Z_Param_Out_OutStr); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadFileToByteBuffer) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_absPath); \
		P_GET_TARRAY_REF(uint8,Z_Param_Out_outByte); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFilesManager::LoadFileToByteBuffer(Z_Param_absPath,Z_Param_Out_outByte); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadFileToStrBuffer) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_absPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UFilesManager::LoadFileToStrBuffer(Z_Param_absPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWriteFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Path); \
		P_GET_PROPERTY(UStrProperty,Z_Param_InChars); \
		P_GET_UBOOL(Z_Param_Overwrite); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFilesManager::WriteFile(Z_Param_Path,Z_Param_InChars,Z_Param_Overwrite); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReadFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Path); \
		P_GET_TARRAY_REF(FString,Z_Param_Out_OutChars); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFilesManager::ReadFile(Z_Param_Path,Z_Param_Out_OutChars); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeleteFolder) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Path); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFilesManager::DeleteFolder(Z_Param_Path); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeleteFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Path); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFilesManager::DeleteFile(Z_Param_Path); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFileSize) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Path); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_size); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFilesManager::GetFileSize(Z_Param_Path,Z_Param_Out_size); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Path); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFilesManager::CreateFile(Z_Param_Path); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateFolder) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Path); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFilesManager::CreateFolder(Z_Param_Path); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsFileExist) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Path); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFilesManager::IsFileExist(Z_Param_Path); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFullGameSavePath) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UFilesManager::GetFullGameSavePath(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFullGameContentPath) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UFilesManager::GetFullGameContentPath(); \
		P_NATIVE_END; \
	}


#define Racing_Plugins_VRPlugin_Source_VRPlugin_Public_FilesManager_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLoadTexture2D) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ImagePath); \
		P_GET_UBOOL_REF(Z_Param_Out_IsValid); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_OutWidth); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_OutHeight); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture2D**)Z_Param__Result=UFilesManager::LoadTexture2D(Z_Param_ImagePath,Z_Param_Out_IsValid,Z_Param_Out_OutWidth,Z_Param_Out_OutHeight); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadAsset_Runtime) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_InClass); \
		P_GET_PROPERTY(UStrProperty,Z_Param_LocalPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UObject**)Z_Param__Result=UFilesManager::LoadAsset_Runtime(Z_Param_InClass,Z_Param_LocalPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEncodingToBase64FromByte) \
	{ \
		P_GET_TARRAY(uint8,Z_Param_bytes); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_base64STR); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFilesManager::EncodingToBase64FromByte(Z_Param_bytes,Z_Param_Out_base64STR); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEncodingToBase64Str) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_source); \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_OutStr); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFilesManager::EncodingToBase64Str(Z_Param_source,Z_Param_Out_OutStr); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadFileToByteBuffer) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_absPath); \
		P_GET_TARRAY_REF(uint8,Z_Param_Out_outByte); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFilesManager::LoadFileToByteBuffer(Z_Param_absPath,Z_Param_Out_outByte); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadFileToStrBuffer) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_absPath); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UFilesManager::LoadFileToStrBuffer(Z_Param_absPath); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWriteFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Path); \
		P_GET_PROPERTY(UStrProperty,Z_Param_InChars); \
		P_GET_UBOOL(Z_Param_Overwrite); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFilesManager::WriteFile(Z_Param_Path,Z_Param_InChars,Z_Param_Overwrite); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReadFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Path); \
		P_GET_TARRAY_REF(FString,Z_Param_Out_OutChars); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFilesManager::ReadFile(Z_Param_Path,Z_Param_Out_OutChars); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeleteFolder) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Path); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFilesManager::DeleteFolder(Z_Param_Path); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeleteFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Path); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFilesManager::DeleteFile(Z_Param_Path); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFileSize) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Path); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_size); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFilesManager::GetFileSize(Z_Param_Path,Z_Param_Out_size); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Path); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFilesManager::CreateFile(Z_Param_Path); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateFolder) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Path); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFilesManager::CreateFolder(Z_Param_Path); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsFileExist) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Path); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UFilesManager::IsFileExist(Z_Param_Path); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFullGameSavePath) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UFilesManager::GetFullGameSavePath(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFullGameContentPath) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UFilesManager::GetFullGameContentPath(); \
		P_NATIVE_END; \
	}


#define Racing_Plugins_VRPlugin_Source_VRPlugin_Public_FilesManager_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFilesManager(); \
	friend VRPLUGIN_API class UClass* Z_Construct_UClass_UFilesManager(); \
public: \
	DECLARE_CLASS(UFilesManager, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/VRPlugin"), NO_API) \
	DECLARE_SERIALIZER(UFilesManager) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Racing_Plugins_VRPlugin_Source_VRPlugin_Public_FilesManager_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUFilesManager(); \
	friend VRPLUGIN_API class UClass* Z_Construct_UClass_UFilesManager(); \
public: \
	DECLARE_CLASS(UFilesManager, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/VRPlugin"), NO_API) \
	DECLARE_SERIALIZER(UFilesManager) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Racing_Plugins_VRPlugin_Source_VRPlugin_Public_FilesManager_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFilesManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFilesManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFilesManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFilesManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFilesManager(UFilesManager&&); \
	NO_API UFilesManager(const UFilesManager&); \
public:


#define Racing_Plugins_VRPlugin_Source_VRPlugin_Public_FilesManager_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFilesManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFilesManager(UFilesManager&&); \
	NO_API UFilesManager(const UFilesManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFilesManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFilesManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFilesManager)


#define Racing_Plugins_VRPlugin_Source_VRPlugin_Public_FilesManager_h_15_PRIVATE_PROPERTY_OFFSET
#define Racing_Plugins_VRPlugin_Source_VRPlugin_Public_FilesManager_h_12_PROLOG
#define Racing_Plugins_VRPlugin_Source_VRPlugin_Public_FilesManager_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Racing_Plugins_VRPlugin_Source_VRPlugin_Public_FilesManager_h_15_PRIVATE_PROPERTY_OFFSET \
	Racing_Plugins_VRPlugin_Source_VRPlugin_Public_FilesManager_h_15_RPC_WRAPPERS \
	Racing_Plugins_VRPlugin_Source_VRPlugin_Public_FilesManager_h_15_INCLASS \
	Racing_Plugins_VRPlugin_Source_VRPlugin_Public_FilesManager_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Racing_Plugins_VRPlugin_Source_VRPlugin_Public_FilesManager_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Racing_Plugins_VRPlugin_Source_VRPlugin_Public_FilesManager_h_15_PRIVATE_PROPERTY_OFFSET \
	Racing_Plugins_VRPlugin_Source_VRPlugin_Public_FilesManager_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Racing_Plugins_VRPlugin_Source_VRPlugin_Public_FilesManager_h_15_INCLASS_NO_PURE_DECLS \
	Racing_Plugins_VRPlugin_Source_VRPlugin_Public_FilesManager_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Racing_Plugins_VRPlugin_Source_VRPlugin_Public_FilesManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
