// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VRPLUGIN_VRPawnEx_generated_h
#error "VRPawnEx.generated.h already included, missing '#pragma once' in VRPawnEx.h"
#endif
#define VRPLUGIN_VRPawnEx_generated_h

#define Racing_Plugins_VRPlugin_Source_VRPlugin_Public_VRPawnEx_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnFaceButtonRight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Axis); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnFaceButtonRight(Z_Param_Axis); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnFaceButtonForward) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Axis); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnFaceButtonForward(Z_Param_Axis); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTriggerUpL) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TriggerUpL(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTriggerDownL) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TriggerDownL(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTriggerUpR) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TriggerUpR(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTriggerDownR) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TriggerDownR(); \
		P_NATIVE_END; \
	}


#define Racing_Plugins_VRPlugin_Source_VRPlugin_Public_VRPawnEx_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnFaceButtonRight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Axis); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnFaceButtonRight(Z_Param_Axis); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnFaceButtonForward) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Axis); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnFaceButtonForward(Z_Param_Axis); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTriggerUpL) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TriggerUpL(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTriggerDownL) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TriggerDownL(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTriggerUpR) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TriggerUpR(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTriggerDownR) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TriggerDownR(); \
		P_NATIVE_END; \
	}


#define Racing_Plugins_VRPlugin_Source_VRPlugin_Public_VRPawnEx_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVRPawnEx(); \
	friend VRPLUGIN_API class UClass* Z_Construct_UClass_AVRPawnEx(); \
public: \
	DECLARE_CLASS(AVRPawnEx, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/VRPlugin"), NO_API) \
	DECLARE_SERIALIZER(AVRPawnEx) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Racing_Plugins_VRPlugin_Source_VRPlugin_Public_VRPawnEx_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAVRPawnEx(); \
	friend VRPLUGIN_API class UClass* Z_Construct_UClass_AVRPawnEx(); \
public: \
	DECLARE_CLASS(AVRPawnEx, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/VRPlugin"), NO_API) \
	DECLARE_SERIALIZER(AVRPawnEx) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Racing_Plugins_VRPlugin_Source_VRPlugin_Public_VRPawnEx_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVRPawnEx(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVRPawnEx) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVRPawnEx); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVRPawnEx); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVRPawnEx(AVRPawnEx&&); \
	NO_API AVRPawnEx(const AVRPawnEx&); \
public:


#define Racing_Plugins_VRPlugin_Source_VRPlugin_Public_VRPawnEx_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVRPawnEx(AVRPawnEx&&); \
	NO_API AVRPawnEx(const AVRPawnEx&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVRPawnEx); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVRPawnEx); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AVRPawnEx)


#define Racing_Plugins_VRPlugin_Source_VRPlugin_Public_VRPawnEx_h_13_PRIVATE_PROPERTY_OFFSET
#define Racing_Plugins_VRPlugin_Source_VRPlugin_Public_VRPawnEx_h_10_PROLOG
#define Racing_Plugins_VRPlugin_Source_VRPlugin_Public_VRPawnEx_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Racing_Plugins_VRPlugin_Source_VRPlugin_Public_VRPawnEx_h_13_PRIVATE_PROPERTY_OFFSET \
	Racing_Plugins_VRPlugin_Source_VRPlugin_Public_VRPawnEx_h_13_RPC_WRAPPERS \
	Racing_Plugins_VRPlugin_Source_VRPlugin_Public_VRPawnEx_h_13_INCLASS \
	Racing_Plugins_VRPlugin_Source_VRPlugin_Public_VRPawnEx_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Racing_Plugins_VRPlugin_Source_VRPlugin_Public_VRPawnEx_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Racing_Plugins_VRPlugin_Source_VRPlugin_Public_VRPawnEx_h_13_PRIVATE_PROPERTY_OFFSET \
	Racing_Plugins_VRPlugin_Source_VRPlugin_Public_VRPawnEx_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Racing_Plugins_VRPlugin_Source_VRPlugin_Public_VRPawnEx_h_13_INCLASS_NO_PURE_DECLS \
	Racing_Plugins_VRPlugin_Source_VRPlugin_Public_VRPawnEx_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Racing_Plugins_VRPlugin_Source_VRPlugin_Public_VRPawnEx_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
