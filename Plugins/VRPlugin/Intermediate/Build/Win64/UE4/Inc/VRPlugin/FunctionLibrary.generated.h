// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class AActor;
struct FVector;
class APawn;
struct FHitResult;
#ifdef VRPLUGIN_FunctionLibrary_generated_h
#error "FunctionLibrary.generated.h already included, missing '#pragma once' in FunctionLibrary.h"
#endif
#define VRPLUGIN_FunctionLibrary_generated_h

#define Racing_Plugins_VRPlugin_Source_VRPlugin_Public_FunctionLibrary_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetNULL) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UObject**)Z_Param__Result=UFunctionLibrary::GetNULL(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearIgoneActors) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFunctionLibrary::ClearIgoneActors(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIgoneActors) \
	{ \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_OutActors); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFunctionLibrary::GetIgoneActors(Z_Param_Out_OutActors); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveIgoneActor) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_InActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFunctionLibrary::RemoveIgoneActor(Z_Param_InActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddIgoneActor) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_InActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFunctionLibrary::AddIgoneActor(Z_Param_InActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRayCast) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Start); \
		P_GET_STRUCT(FVector,Z_Param_Dir); \
		P_GET_OBJECT(APawn,Z_Param_player); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FHitResult*)Z_Param__Result=UFunctionLibrary::RayCast(Z_Param_Start,Z_Param_Dir,Z_Param_player); \
		P_NATIVE_END; \
	}


#define Racing_Plugins_VRPlugin_Source_VRPlugin_Public_FunctionLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetNULL) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UObject**)Z_Param__Result=UFunctionLibrary::GetNULL(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearIgoneActors) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFunctionLibrary::ClearIgoneActors(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIgoneActors) \
	{ \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_OutActors); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFunctionLibrary::GetIgoneActors(Z_Param_Out_OutActors); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveIgoneActor) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_InActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFunctionLibrary::RemoveIgoneActor(Z_Param_InActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddIgoneActor) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_InActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UFunctionLibrary::AddIgoneActor(Z_Param_InActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRayCast) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_Start); \
		P_GET_STRUCT(FVector,Z_Param_Dir); \
		P_GET_OBJECT(APawn,Z_Param_player); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FHitResult*)Z_Param__Result=UFunctionLibrary::RayCast(Z_Param_Start,Z_Param_Dir,Z_Param_player); \
		P_NATIVE_END; \
	}


#define Racing_Plugins_VRPlugin_Source_VRPlugin_Public_FunctionLibrary_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFunctionLibrary(); \
	friend VRPLUGIN_API class UClass* Z_Construct_UClass_UFunctionLibrary(); \
public: \
	DECLARE_CLASS(UFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/VRPlugin"), NO_API) \
	DECLARE_SERIALIZER(UFunctionLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Racing_Plugins_VRPlugin_Source_VRPlugin_Public_FunctionLibrary_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUFunctionLibrary(); \
	friend VRPLUGIN_API class UClass* Z_Construct_UClass_UFunctionLibrary(); \
public: \
	DECLARE_CLASS(UFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/VRPlugin"), NO_API) \
	DECLARE_SERIALIZER(UFunctionLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Racing_Plugins_VRPlugin_Source_VRPlugin_Public_FunctionLibrary_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFunctionLibrary(UFunctionLibrary&&); \
	NO_API UFunctionLibrary(const UFunctionLibrary&); \
public:


#define Racing_Plugins_VRPlugin_Source_VRPlugin_Public_FunctionLibrary_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFunctionLibrary(UFunctionLibrary&&); \
	NO_API UFunctionLibrary(const UFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFunctionLibrary)


#define Racing_Plugins_VRPlugin_Source_VRPlugin_Public_FunctionLibrary_h_15_PRIVATE_PROPERTY_OFFSET
#define Racing_Plugins_VRPlugin_Source_VRPlugin_Public_FunctionLibrary_h_12_PROLOG
#define Racing_Plugins_VRPlugin_Source_VRPlugin_Public_FunctionLibrary_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Racing_Plugins_VRPlugin_Source_VRPlugin_Public_FunctionLibrary_h_15_PRIVATE_PROPERTY_OFFSET \
	Racing_Plugins_VRPlugin_Source_VRPlugin_Public_FunctionLibrary_h_15_RPC_WRAPPERS \
	Racing_Plugins_VRPlugin_Source_VRPlugin_Public_FunctionLibrary_h_15_INCLASS \
	Racing_Plugins_VRPlugin_Source_VRPlugin_Public_FunctionLibrary_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Racing_Plugins_VRPlugin_Source_VRPlugin_Public_FunctionLibrary_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Racing_Plugins_VRPlugin_Source_VRPlugin_Public_FunctionLibrary_h_15_PRIVATE_PROPERTY_OFFSET \
	Racing_Plugins_VRPlugin_Source_VRPlugin_Public_FunctionLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Racing_Plugins_VRPlugin_Source_VRPlugin_Public_FunctionLibrary_h_15_INCLASS_NO_PURE_DECLS \
	Racing_Plugins_VRPlugin_Source_VRPlugin_Public_FunctionLibrary_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Racing_Plugins_VRPlugin_Source_VRPlugin_Public_FunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
