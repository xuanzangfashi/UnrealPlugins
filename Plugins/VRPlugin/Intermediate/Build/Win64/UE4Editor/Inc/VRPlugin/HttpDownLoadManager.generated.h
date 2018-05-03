// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UHttpDownloadManager;
#ifdef VRPLUGIN_HttpDownLoadManager_generated_h
#error "HttpDownLoadManager.generated.h already included, missing '#pragma once' in HttpDownLoadManager.h"
#endif
#define VRPLUGIN_HttpDownLoadManager_generated_h

#define Racing_Plugins_VRPlugin_Source_VRPlugin_Public_HttpDownLoadManager_h_8_DELEGATE \
struct _Script_VRPlugin_eventDownloadFileDelegate_Parms \
{ \
	FString DestinationPath; \
	float DownloadPercent; \
}; \
static inline void FDownloadFileDelegate_DelegateWrapper(const FMulticastScriptDelegate& DownloadFileDelegate, const FString& DestinationPath, float DownloadPercent) \
{ \
	_Script_VRPlugin_eventDownloadFileDelegate_Parms Parms; \
	Parms.DestinationPath=DestinationPath; \
	Parms.DownloadPercent=DownloadPercent; \
	DownloadFileDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Racing_Plugins_VRPlugin_Source_VRPlugin_Public_HttpDownLoadManager_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDownLoadFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_url); \
		P_GET_PROPERTY(UStrProperty,Z_Param_dir); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UHttpDownloadManager**)Z_Param__Result=UHttpDownloadManager::DownLoadFile(Z_Param_url,Z_Param_dir); \
		P_NATIVE_END; \
	}


#define Racing_Plugins_VRPlugin_Source_VRPlugin_Public_HttpDownLoadManager_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDownLoadFile) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_url); \
		P_GET_PROPERTY(UStrProperty,Z_Param_dir); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UHttpDownloadManager**)Z_Param__Result=UHttpDownloadManager::DownLoadFile(Z_Param_url,Z_Param_dir); \
		P_NATIVE_END; \
	}


#define Racing_Plugins_VRPlugin_Source_VRPlugin_Public_HttpDownLoadManager_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHttpDownloadManager(); \
	friend VRPLUGIN_API class UClass* Z_Construct_UClass_UHttpDownloadManager(); \
public: \
	DECLARE_CLASS(UHttpDownloadManager, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/VRPlugin"), NO_API) \
	DECLARE_SERIALIZER(UHttpDownloadManager) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Racing_Plugins_VRPlugin_Source_VRPlugin_Public_HttpDownLoadManager_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUHttpDownloadManager(); \
	friend VRPLUGIN_API class UClass* Z_Construct_UClass_UHttpDownloadManager(); \
public: \
	DECLARE_CLASS(UHttpDownloadManager, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/VRPlugin"), NO_API) \
	DECLARE_SERIALIZER(UHttpDownloadManager) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Racing_Plugins_VRPlugin_Source_VRPlugin_Public_HttpDownLoadManager_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHttpDownloadManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHttpDownloadManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHttpDownloadManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHttpDownloadManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHttpDownloadManager(UHttpDownloadManager&&); \
	NO_API UHttpDownloadManager(const UHttpDownloadManager&); \
public:


#define Racing_Plugins_VRPlugin_Source_VRPlugin_Public_HttpDownLoadManager_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHttpDownloadManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHttpDownloadManager(UHttpDownloadManager&&); \
	NO_API UHttpDownloadManager(const UHttpDownloadManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHttpDownloadManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHttpDownloadManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHttpDownloadManager)


#define Racing_Plugins_VRPlugin_Source_VRPlugin_Public_HttpDownLoadManager_h_13_PRIVATE_PROPERTY_OFFSET
#define Racing_Plugins_VRPlugin_Source_VRPlugin_Public_HttpDownLoadManager_h_10_PROLOG
#define Racing_Plugins_VRPlugin_Source_VRPlugin_Public_HttpDownLoadManager_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Racing_Plugins_VRPlugin_Source_VRPlugin_Public_HttpDownLoadManager_h_13_PRIVATE_PROPERTY_OFFSET \
	Racing_Plugins_VRPlugin_Source_VRPlugin_Public_HttpDownLoadManager_h_13_RPC_WRAPPERS \
	Racing_Plugins_VRPlugin_Source_VRPlugin_Public_HttpDownLoadManager_h_13_INCLASS \
	Racing_Plugins_VRPlugin_Source_VRPlugin_Public_HttpDownLoadManager_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Racing_Plugins_VRPlugin_Source_VRPlugin_Public_HttpDownLoadManager_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Racing_Plugins_VRPlugin_Source_VRPlugin_Public_HttpDownLoadManager_h_13_PRIVATE_PROPERTY_OFFSET \
	Racing_Plugins_VRPlugin_Source_VRPlugin_Public_HttpDownLoadManager_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Racing_Plugins_VRPlugin_Source_VRPlugin_Public_HttpDownLoadManager_h_13_INCLASS_NO_PURE_DECLS \
	Racing_Plugins_VRPlugin_Source_VRPlugin_Public_HttpDownLoadManager_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Racing_Plugins_VRPlugin_Source_VRPlugin_Public_HttpDownLoadManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
