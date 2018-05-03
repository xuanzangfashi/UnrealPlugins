// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRotator;
#ifdef COMDLLAPI_COMDLLAPIFunctionLibrary_generated_h
#error "COMDLLAPIFunctionLibrary.generated.h already included, missing '#pragma once' in COMDLLAPIFunctionLibrary.h"
#endif
#define COMDLLAPI_COMDLLAPIFunctionLibrary_generated_h

#define PluginsCompil_Plugins_COMDLLAPI_Source_COMDLLAPI_Public_COMDLLAPIFunctionLibrary_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAllCOMName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCOMDLLAPIFunctionLibrary::GetAllCOMName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execForceInit) \
	{ \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_WrongPortName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UCOMDLLAPIFunctionLibrary::ForceInit(Z_Param_Out_WrongPortName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRotatorFromString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SRC); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Out); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCOMDLLAPIFunctionLibrary::GetRotatorFromString(Z_Param_SRC,Z_Param_Out_Out); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execParerDataStr) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_source); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=UCOMDLLAPIFunctionLibrary::ParerDataStr(Z_Param_source); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllHardwareData) \
	{ \
		P_GET_TARRAY_REF(FString,Z_Param_Out_Out); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCOMDLLAPIFunctionLibrary::GetAllHardwareData(Z_Param_Out_Out); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReleaseHardware) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCOMDLLAPIFunctionLibrary::ReleaseHardware(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHardwareDataByIndex) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UCOMDLLAPIFunctionLibrary::GetHardwareDataByIndex(Z_Param_index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitHardware) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_COMName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_BaudRate); \
		P_GET_PROPERTY(UIntProperty,Z_Param_bytesSize); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UCOMDLLAPIFunctionLibrary::InitHardware(Z_Param_COMName,Z_Param_BaudRate,Z_Param_bytesSize); \
		P_NATIVE_END; \
	}


#define PluginsCompil_Plugins_COMDLLAPI_Source_COMDLLAPI_Public_COMDLLAPIFunctionLibrary_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAllCOMName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCOMDLLAPIFunctionLibrary::GetAllCOMName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execForceInit) \
	{ \
		P_GET_PROPERTY_REF(UStrProperty,Z_Param_Out_WrongPortName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UCOMDLLAPIFunctionLibrary::ForceInit(Z_Param_Out_WrongPortName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRotatorFromString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SRC); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Out); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCOMDLLAPIFunctionLibrary::GetRotatorFromString(Z_Param_SRC,Z_Param_Out_Out); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execParerDataStr) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_source); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=UCOMDLLAPIFunctionLibrary::ParerDataStr(Z_Param_source); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllHardwareData) \
	{ \
		P_GET_TARRAY_REF(FString,Z_Param_Out_Out); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCOMDLLAPIFunctionLibrary::GetAllHardwareData(Z_Param_Out_Out); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReleaseHardware) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UCOMDLLAPIFunctionLibrary::ReleaseHardware(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHardwareDataByIndex) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UCOMDLLAPIFunctionLibrary::GetHardwareDataByIndex(Z_Param_index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitHardware) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_COMName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_BaudRate); \
		P_GET_PROPERTY(UIntProperty,Z_Param_bytesSize); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UCOMDLLAPIFunctionLibrary::InitHardware(Z_Param_COMName,Z_Param_BaudRate,Z_Param_bytesSize); \
		P_NATIVE_END; \
	}


#define PluginsCompil_Plugins_COMDLLAPI_Source_COMDLLAPI_Public_COMDLLAPIFunctionLibrary_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCOMDLLAPIFunctionLibrary(); \
	friend COMDLLAPI_API class UClass* Z_Construct_UClass_UCOMDLLAPIFunctionLibrary(); \
public: \
	DECLARE_CLASS(UCOMDLLAPIFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/COMDLLAPI"), NO_API) \
	DECLARE_SERIALIZER(UCOMDLLAPIFunctionLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define PluginsCompil_Plugins_COMDLLAPI_Source_COMDLLAPI_Public_COMDLLAPIFunctionLibrary_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUCOMDLLAPIFunctionLibrary(); \
	friend COMDLLAPI_API class UClass* Z_Construct_UClass_UCOMDLLAPIFunctionLibrary(); \
public: \
	DECLARE_CLASS(UCOMDLLAPIFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/COMDLLAPI"), NO_API) \
	DECLARE_SERIALIZER(UCOMDLLAPIFunctionLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define PluginsCompil_Plugins_COMDLLAPI_Source_COMDLLAPI_Public_COMDLLAPIFunctionLibrary_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCOMDLLAPIFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCOMDLLAPIFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCOMDLLAPIFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCOMDLLAPIFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCOMDLLAPIFunctionLibrary(UCOMDLLAPIFunctionLibrary&&); \
	NO_API UCOMDLLAPIFunctionLibrary(const UCOMDLLAPIFunctionLibrary&); \
public:


#define PluginsCompil_Plugins_COMDLLAPI_Source_COMDLLAPI_Public_COMDLLAPIFunctionLibrary_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCOMDLLAPIFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCOMDLLAPIFunctionLibrary(UCOMDLLAPIFunctionLibrary&&); \
	NO_API UCOMDLLAPIFunctionLibrary(const UCOMDLLAPIFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCOMDLLAPIFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCOMDLLAPIFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCOMDLLAPIFunctionLibrary)


#define PluginsCompil_Plugins_COMDLLAPI_Source_COMDLLAPI_Public_COMDLLAPIFunctionLibrary_h_20_PRIVATE_PROPERTY_OFFSET
#define PluginsCompil_Plugins_COMDLLAPI_Source_COMDLLAPI_Public_COMDLLAPIFunctionLibrary_h_17_PROLOG
#define PluginsCompil_Plugins_COMDLLAPI_Source_COMDLLAPI_Public_COMDLLAPIFunctionLibrary_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginsCompil_Plugins_COMDLLAPI_Source_COMDLLAPI_Public_COMDLLAPIFunctionLibrary_h_20_PRIVATE_PROPERTY_OFFSET \
	PluginsCompil_Plugins_COMDLLAPI_Source_COMDLLAPI_Public_COMDLLAPIFunctionLibrary_h_20_RPC_WRAPPERS \
	PluginsCompil_Plugins_COMDLLAPI_Source_COMDLLAPI_Public_COMDLLAPIFunctionLibrary_h_20_INCLASS \
	PluginsCompil_Plugins_COMDLLAPI_Source_COMDLLAPI_Public_COMDLLAPIFunctionLibrary_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PluginsCompil_Plugins_COMDLLAPI_Source_COMDLLAPI_Public_COMDLLAPIFunctionLibrary_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginsCompil_Plugins_COMDLLAPI_Source_COMDLLAPI_Public_COMDLLAPIFunctionLibrary_h_20_PRIVATE_PROPERTY_OFFSET \
	PluginsCompil_Plugins_COMDLLAPI_Source_COMDLLAPI_Public_COMDLLAPIFunctionLibrary_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	PluginsCompil_Plugins_COMDLLAPI_Source_COMDLLAPI_Public_COMDLLAPIFunctionLibrary_h_20_INCLASS_NO_PURE_DECLS \
	PluginsCompil_Plugins_COMDLLAPI_Source_COMDLLAPI_Public_COMDLLAPIFunctionLibrary_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PluginsCompil_Plugins_COMDLLAPI_Source_COMDLLAPI_Public_COMDLLAPIFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
