// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VRPLUGIN_StringExFunctionLibrary_generated_h
#error "StringExFunctionLibrary.generated.h already included, missing '#pragma once' in StringExFunctionLibrary.h"
#endif
#define VRPLUGIN_StringExFunctionLibrary_generated_h

#define Racing_Plugins_VRPlugin_Source_VRPlugin_Public_StringExFunctionLibrary_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStringArrayToString) \
	{ \
		P_GET_TARRAY(FString,Z_Param_InStringArray); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UStringExFunctionLibrary::StringArrayToString(Z_Param_InStringArray); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStringMinus) \
	{ \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_A); \
		P_GET_PROPERTY(UStrProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UStringExFunctionLibrary::StringMinus(Z_Param_Out_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStringPlus) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_A); \
		P_GET_PROPERTY(UStrProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UStringExFunctionLibrary::StringPlus(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	}


#define Racing_Plugins_VRPlugin_Source_VRPlugin_Public_StringExFunctionLibrary_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStringArrayToString) \
	{ \
		P_GET_TARRAY(FString,Z_Param_InStringArray); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UStringExFunctionLibrary::StringArrayToString(Z_Param_InStringArray); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStringMinus) \
	{ \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_A); \
		P_GET_PROPERTY(UStrProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UStringExFunctionLibrary::StringMinus(Z_Param_Out_A,Z_Param_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStringPlus) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_A); \
		P_GET_PROPERTY(UStrProperty,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UStringExFunctionLibrary::StringPlus(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	}


#define Racing_Plugins_VRPlugin_Source_VRPlugin_Public_StringExFunctionLibrary_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStringExFunctionLibrary(); \
	friend VRPLUGIN_API class UClass* Z_Construct_UClass_UStringExFunctionLibrary(); \
public: \
	DECLARE_CLASS(UStringExFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/VRPlugin"), NO_API) \
	DECLARE_SERIALIZER(UStringExFunctionLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Racing_Plugins_VRPlugin_Source_VRPlugin_Public_StringExFunctionLibrary_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUStringExFunctionLibrary(); \
	friend VRPLUGIN_API class UClass* Z_Construct_UClass_UStringExFunctionLibrary(); \
public: \
	DECLARE_CLASS(UStringExFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/VRPlugin"), NO_API) \
	DECLARE_SERIALIZER(UStringExFunctionLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Racing_Plugins_VRPlugin_Source_VRPlugin_Public_StringExFunctionLibrary_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStringExFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStringExFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStringExFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStringExFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStringExFunctionLibrary(UStringExFunctionLibrary&&); \
	NO_API UStringExFunctionLibrary(const UStringExFunctionLibrary&); \
public:


#define Racing_Plugins_VRPlugin_Source_VRPlugin_Public_StringExFunctionLibrary_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStringExFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStringExFunctionLibrary(UStringExFunctionLibrary&&); \
	NO_API UStringExFunctionLibrary(const UStringExFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStringExFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStringExFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStringExFunctionLibrary)


#define Racing_Plugins_VRPlugin_Source_VRPlugin_Public_StringExFunctionLibrary_h_14_PRIVATE_PROPERTY_OFFSET
#define Racing_Plugins_VRPlugin_Source_VRPlugin_Public_StringExFunctionLibrary_h_11_PROLOG
#define Racing_Plugins_VRPlugin_Source_VRPlugin_Public_StringExFunctionLibrary_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Racing_Plugins_VRPlugin_Source_VRPlugin_Public_StringExFunctionLibrary_h_14_PRIVATE_PROPERTY_OFFSET \
	Racing_Plugins_VRPlugin_Source_VRPlugin_Public_StringExFunctionLibrary_h_14_RPC_WRAPPERS \
	Racing_Plugins_VRPlugin_Source_VRPlugin_Public_StringExFunctionLibrary_h_14_INCLASS \
	Racing_Plugins_VRPlugin_Source_VRPlugin_Public_StringExFunctionLibrary_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Racing_Plugins_VRPlugin_Source_VRPlugin_Public_StringExFunctionLibrary_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Racing_Plugins_VRPlugin_Source_VRPlugin_Public_StringExFunctionLibrary_h_14_PRIVATE_PROPERTY_OFFSET \
	Racing_Plugins_VRPlugin_Source_VRPlugin_Public_StringExFunctionLibrary_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Racing_Plugins_VRPlugin_Source_VRPlugin_Public_StringExFunctionLibrary_h_14_INCLASS_NO_PURE_DECLS \
	Racing_Plugins_VRPlugin_Source_VRPlugin_Public_StringExFunctionLibrary_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Racing_Plugins_VRPlugin_Source_VRPlugin_Public_StringExFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
