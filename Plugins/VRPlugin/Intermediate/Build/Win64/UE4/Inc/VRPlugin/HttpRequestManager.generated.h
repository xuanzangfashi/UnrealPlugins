// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UHttpRequestManager;
#ifdef VRPLUGIN_HttpRequestManager_generated_h
#error "HttpRequestManager.generated.h already included, missing '#pragma once' in HttpRequestManager.h"
#endif
#define VRPLUGIN_HttpRequestManager_generated_h

#define Racing_Plugins_VRPlugin_Source_VRPlugin_Public_HttpRequestManager_h_9_DELEGATE \
struct _Script_VRPlugin_eventHttpRequestManagerDelegate_Parms \
{ \
	FString Content; \
	int32 StatusCode; \
}; \
static inline void FHttpRequestManagerDelegate_DelegateWrapper(const FMulticastScriptDelegate& HttpRequestManagerDelegate, const FString& Content, int32 StatusCode) \
{ \
	_Script_VRPlugin_eventHttpRequestManagerDelegate_Parms Parms; \
	Parms.Content=Content; \
	Parms.StatusCode=StatusCode; \
	HttpRequestManagerDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Racing_Plugins_VRPlugin_Source_VRPlugin_Public_HttpRequestManager_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHttpRequestString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_url); \
		P_GET_PROPERTY(UByteProperty,Z_Param_reType); \
		P_GET_PROPERTY(UStrProperty,Z_Param_content); \
		P_GET_TARRAY(uint8,Z_Param_content1); \
		P_GET_UBOOL(Z_Param_isbyte); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UHttpRequestManager**)Z_Param__Result=UHttpRequestManager::HttpRequestString(Z_Param_url,EHttpRequestType(Z_Param_reType),Z_Param_content,Z_Param_content1,Z_Param_isbyte); \
		P_NATIVE_END; \
	}


#define Racing_Plugins_VRPlugin_Source_VRPlugin_Public_HttpRequestManager_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHttpRequestString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_url); \
		P_GET_PROPERTY(UByteProperty,Z_Param_reType); \
		P_GET_PROPERTY(UStrProperty,Z_Param_content); \
		P_GET_TARRAY(uint8,Z_Param_content1); \
		P_GET_UBOOL(Z_Param_isbyte); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UHttpRequestManager**)Z_Param__Result=UHttpRequestManager::HttpRequestString(Z_Param_url,EHttpRequestType(Z_Param_reType),Z_Param_content,Z_Param_content1,Z_Param_isbyte); \
		P_NATIVE_END; \
	}


#define Racing_Plugins_VRPlugin_Source_VRPlugin_Public_HttpRequestManager_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHttpRequestManager(); \
	friend VRPLUGIN_API class UClass* Z_Construct_UClass_UHttpRequestManager(); \
public: \
	DECLARE_CLASS(UHttpRequestManager, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/VRPlugin"), NO_API) \
	DECLARE_SERIALIZER(UHttpRequestManager) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Racing_Plugins_VRPlugin_Source_VRPlugin_Public_HttpRequestManager_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUHttpRequestManager(); \
	friend VRPLUGIN_API class UClass* Z_Construct_UClass_UHttpRequestManager(); \
public: \
	DECLARE_CLASS(UHttpRequestManager, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/VRPlugin"), NO_API) \
	DECLARE_SERIALIZER(UHttpRequestManager) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Racing_Plugins_VRPlugin_Source_VRPlugin_Public_HttpRequestManager_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHttpRequestManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHttpRequestManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHttpRequestManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHttpRequestManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHttpRequestManager(UHttpRequestManager&&); \
	NO_API UHttpRequestManager(const UHttpRequestManager&); \
public:


#define Racing_Plugins_VRPlugin_Source_VRPlugin_Public_HttpRequestManager_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHttpRequestManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHttpRequestManager(UHttpRequestManager&&); \
	NO_API UHttpRequestManager(const UHttpRequestManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHttpRequestManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHttpRequestManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHttpRequestManager)


#define Racing_Plugins_VRPlugin_Source_VRPlugin_Public_HttpRequestManager_h_20_PRIVATE_PROPERTY_OFFSET
#define Racing_Plugins_VRPlugin_Source_VRPlugin_Public_HttpRequestManager_h_17_PROLOG
#define Racing_Plugins_VRPlugin_Source_VRPlugin_Public_HttpRequestManager_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Racing_Plugins_VRPlugin_Source_VRPlugin_Public_HttpRequestManager_h_20_PRIVATE_PROPERTY_OFFSET \
	Racing_Plugins_VRPlugin_Source_VRPlugin_Public_HttpRequestManager_h_20_RPC_WRAPPERS \
	Racing_Plugins_VRPlugin_Source_VRPlugin_Public_HttpRequestManager_h_20_INCLASS \
	Racing_Plugins_VRPlugin_Source_VRPlugin_Public_HttpRequestManager_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Racing_Plugins_VRPlugin_Source_VRPlugin_Public_HttpRequestManager_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Racing_Plugins_VRPlugin_Source_VRPlugin_Public_HttpRequestManager_h_20_PRIVATE_PROPERTY_OFFSET \
	Racing_Plugins_VRPlugin_Source_VRPlugin_Public_HttpRequestManager_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Racing_Plugins_VRPlugin_Source_VRPlugin_Public_HttpRequestManager_h_20_INCLASS_NO_PURE_DECLS \
	Racing_Plugins_VRPlugin_Source_VRPlugin_Public_HttpRequestManager_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Racing_Plugins_VRPlugin_Source_VRPlugin_Public_HttpRequestManager_h


#define FOREACH_ENUM_EHTTPREQUESTTYPE(op) \
	op(_Get) \
	op(_Post) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
