// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector2D;
struct FVector;
#ifdef VRPLUGIN_MathExFunctionLibrary_generated_h
#error "MathExFunctionLibrary.generated.h already included, missing '#pragma once' in MathExFunctionLibrary.h"
#endif
#define VRPLUGIN_MathExFunctionLibrary_generated_h

#define Racing_Plugins_VRPlugin_Source_VRPlugin_Public_MathExFunctionLibrary_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execVector2DivisionEqualsFloat) \
	{ \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Vector); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_X); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_VectorOut); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMathExFunctionLibrary::Vector2DivisionEqualsFloat(Z_Param_Out_Vector,Z_Param_X,Z_Param_Out_VectorOut); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector2MultiEqualsFloat) \
	{ \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Vector); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_X); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_VectorOut); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMathExFunctionLibrary::Vector2MultiEqualsFloat(Z_Param_Out_Vector,Z_Param_X,Z_Param_Out_VectorOut); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector2DivisionEqualsVector2) \
	{ \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Vector); \
		P_GET_STRUCT(FVector2D,Z_Param_X); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_VectorOut); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMathExFunctionLibrary::Vector2DivisionEqualsVector2(Z_Param_Out_Vector,Z_Param_X,Z_Param_Out_VectorOut); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector2MultiEqualsVector2) \
	{ \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Vector); \
		P_GET_STRUCT(FVector2D,Z_Param_X); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_VectorOut); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMathExFunctionLibrary::Vector2MultiEqualsVector2(Z_Param_Out_Vector,Z_Param_X,Z_Param_Out_VectorOut); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector2PlusEqualsVector2) \
	{ \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Vector); \
		P_GET_STRUCT(FVector2D,Z_Param_Add); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_VectorOut); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMathExFunctionLibrary::Vector2PlusEqualsVector2(Z_Param_Out_Vector,Z_Param_Add,Z_Param_Out_VectorOut); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector2MinusEqualsVector2) \
	{ \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Vector); \
		P_GET_STRUCT(FVector2D,Z_Param_Sub); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_VectorOut); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMathExFunctionLibrary::Vector2MinusEqualsVector2(Z_Param_Out_Vector,Z_Param_Sub,Z_Param_Out_VectorOut); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector3DivisionEqualsFloat) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Vector); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_X); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_VectorOut); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMathExFunctionLibrary::Vector3DivisionEqualsFloat(Z_Param_Out_Vector,Z_Param_X,Z_Param_Out_VectorOut); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector3MultiEqualsFloat) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Vector); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_X); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_VectorOut); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMathExFunctionLibrary::Vector3MultiEqualsFloat(Z_Param_Out_Vector,Z_Param_X,Z_Param_Out_VectorOut); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector3DivisionEqualsVector3) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Vector); \
		P_GET_STRUCT(FVector,Z_Param_X); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_VectorOut); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMathExFunctionLibrary::Vector3DivisionEqualsVector3(Z_Param_Out_Vector,Z_Param_X,Z_Param_Out_VectorOut); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector3MultiEqualsVector3) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Vector); \
		P_GET_STRUCT(FVector,Z_Param_X); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_VectorOut); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMathExFunctionLibrary::Vector3MultiEqualsVector3(Z_Param_Out_Vector,Z_Param_X,Z_Param_Out_VectorOut); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector3PlusEqualsVector3) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Vector); \
		P_GET_STRUCT(FVector,Z_Param_Add); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_VectorOut); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMathExFunctionLibrary::Vector3PlusEqualsVector3(Z_Param_Out_Vector,Z_Param_Add,Z_Param_Out_VectorOut); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector3MinusEqualsVector3) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Vector); \
		P_GET_STRUCT(FVector,Z_Param_Sub); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_VectorOut); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMathExFunctionLibrary::Vector3MinusEqualsVector3(Z_Param_Out_Vector,Z_Param_Sub,Z_Param_Out_VectorOut); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIntegerDivisionEquals) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Int); \
		P_GET_PROPERTY(UIntProperty,Z_Param_X); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_IntOut); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMathExFunctionLibrary::IntegerDivisionEquals(Z_Param_Out_Int,Z_Param_X,Z_Param_Out_IntOut); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIntegerMultiEquals) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Int); \
		P_GET_PROPERTY(UIntProperty,Z_Param_X); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_IntOut); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMathExFunctionLibrary::IntegerMultiEquals(Z_Param_Out_Int,Z_Param_X,Z_Param_Out_IntOut); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIntegerMinusEquals) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Int); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Sub); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_IntOut); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMathExFunctionLibrary::IntegerMinusEquals(Z_Param_Out_Int,Z_Param_Sub,Z_Param_Out_IntOut); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIntegerPlusEquals) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Int); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Add); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_IntOut); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMathExFunctionLibrary::IntegerPlusEquals(Z_Param_Out_Int,Z_Param_Add,Z_Param_Out_IntOut); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFloatDivisionEquals) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Float); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_X); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_FloatOut); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMathExFunctionLibrary::FloatDivisionEquals(Z_Param_Out_Float,Z_Param_X,Z_Param_Out_FloatOut); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFloatMultiEquals) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Float); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_X); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_FloatOut); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMathExFunctionLibrary::FloatMultiEquals(Z_Param_Out_Float,Z_Param_X,Z_Param_Out_FloatOut); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFloatMinusEquals) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Float); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Sub); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_FloatOut); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMathExFunctionLibrary::FloatMinusEquals(Z_Param_Out_Float,Z_Param_Sub,Z_Param_Out_FloatOut); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFloatPlusEquals) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Float); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Add); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_FloatOut); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMathExFunctionLibrary::FloatPlusEquals(Z_Param_Out_Float,Z_Param_Add,Z_Param_Out_FloatOut); \
		P_NATIVE_END; \
	}


#define Racing_Plugins_VRPlugin_Source_VRPlugin_Public_MathExFunctionLibrary_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execVector2DivisionEqualsFloat) \
	{ \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Vector); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_X); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_VectorOut); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMathExFunctionLibrary::Vector2DivisionEqualsFloat(Z_Param_Out_Vector,Z_Param_X,Z_Param_Out_VectorOut); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector2MultiEqualsFloat) \
	{ \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Vector); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_X); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_VectorOut); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMathExFunctionLibrary::Vector2MultiEqualsFloat(Z_Param_Out_Vector,Z_Param_X,Z_Param_Out_VectorOut); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector2DivisionEqualsVector2) \
	{ \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Vector); \
		P_GET_STRUCT(FVector2D,Z_Param_X); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_VectorOut); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMathExFunctionLibrary::Vector2DivisionEqualsVector2(Z_Param_Out_Vector,Z_Param_X,Z_Param_Out_VectorOut); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector2MultiEqualsVector2) \
	{ \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Vector); \
		P_GET_STRUCT(FVector2D,Z_Param_X); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_VectorOut); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMathExFunctionLibrary::Vector2MultiEqualsVector2(Z_Param_Out_Vector,Z_Param_X,Z_Param_Out_VectorOut); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector2PlusEqualsVector2) \
	{ \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Vector); \
		P_GET_STRUCT(FVector2D,Z_Param_Add); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_VectorOut); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMathExFunctionLibrary::Vector2PlusEqualsVector2(Z_Param_Out_Vector,Z_Param_Add,Z_Param_Out_VectorOut); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector2MinusEqualsVector2) \
	{ \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Vector); \
		P_GET_STRUCT(FVector2D,Z_Param_Sub); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_VectorOut); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMathExFunctionLibrary::Vector2MinusEqualsVector2(Z_Param_Out_Vector,Z_Param_Sub,Z_Param_Out_VectorOut); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector3DivisionEqualsFloat) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Vector); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_X); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_VectorOut); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMathExFunctionLibrary::Vector3DivisionEqualsFloat(Z_Param_Out_Vector,Z_Param_X,Z_Param_Out_VectorOut); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector3MultiEqualsFloat) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Vector); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_X); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_VectorOut); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMathExFunctionLibrary::Vector3MultiEqualsFloat(Z_Param_Out_Vector,Z_Param_X,Z_Param_Out_VectorOut); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector3DivisionEqualsVector3) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Vector); \
		P_GET_STRUCT(FVector,Z_Param_X); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_VectorOut); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMathExFunctionLibrary::Vector3DivisionEqualsVector3(Z_Param_Out_Vector,Z_Param_X,Z_Param_Out_VectorOut); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector3MultiEqualsVector3) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Vector); \
		P_GET_STRUCT(FVector,Z_Param_X); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_VectorOut); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMathExFunctionLibrary::Vector3MultiEqualsVector3(Z_Param_Out_Vector,Z_Param_X,Z_Param_Out_VectorOut); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector3PlusEqualsVector3) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Vector); \
		P_GET_STRUCT(FVector,Z_Param_Add); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_VectorOut); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMathExFunctionLibrary::Vector3PlusEqualsVector3(Z_Param_Out_Vector,Z_Param_Add,Z_Param_Out_VectorOut); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector3MinusEqualsVector3) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Vector); \
		P_GET_STRUCT(FVector,Z_Param_Sub); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_VectorOut); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMathExFunctionLibrary::Vector3MinusEqualsVector3(Z_Param_Out_Vector,Z_Param_Sub,Z_Param_Out_VectorOut); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIntegerDivisionEquals) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Int); \
		P_GET_PROPERTY(UIntProperty,Z_Param_X); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_IntOut); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMathExFunctionLibrary::IntegerDivisionEquals(Z_Param_Out_Int,Z_Param_X,Z_Param_Out_IntOut); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIntegerMultiEquals) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Int); \
		P_GET_PROPERTY(UIntProperty,Z_Param_X); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_IntOut); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMathExFunctionLibrary::IntegerMultiEquals(Z_Param_Out_Int,Z_Param_X,Z_Param_Out_IntOut); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIntegerMinusEquals) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Int); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Sub); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_IntOut); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMathExFunctionLibrary::IntegerMinusEquals(Z_Param_Out_Int,Z_Param_Sub,Z_Param_Out_IntOut); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIntegerPlusEquals) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_Int); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Add); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_IntOut); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMathExFunctionLibrary::IntegerPlusEquals(Z_Param_Out_Int,Z_Param_Add,Z_Param_Out_IntOut); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFloatDivisionEquals) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Float); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_X); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_FloatOut); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMathExFunctionLibrary::FloatDivisionEquals(Z_Param_Out_Float,Z_Param_X,Z_Param_Out_FloatOut); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFloatMultiEquals) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Float); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_X); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_FloatOut); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMathExFunctionLibrary::FloatMultiEquals(Z_Param_Out_Float,Z_Param_X,Z_Param_Out_FloatOut); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFloatMinusEquals) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Float); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Sub); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_FloatOut); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMathExFunctionLibrary::FloatMinusEquals(Z_Param_Out_Float,Z_Param_Sub,Z_Param_Out_FloatOut); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFloatPlusEquals) \
	{ \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Float); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Add); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_FloatOut); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMathExFunctionLibrary::FloatPlusEquals(Z_Param_Out_Float,Z_Param_Add,Z_Param_Out_FloatOut); \
		P_NATIVE_END; \
	}


#define Racing_Plugins_VRPlugin_Source_VRPlugin_Public_MathExFunctionLibrary_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMathExFunctionLibrary(); \
	friend VRPLUGIN_API class UClass* Z_Construct_UClass_UMathExFunctionLibrary(); \
public: \
	DECLARE_CLASS(UMathExFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/VRPlugin"), NO_API) \
	DECLARE_SERIALIZER(UMathExFunctionLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Racing_Plugins_VRPlugin_Source_VRPlugin_Public_MathExFunctionLibrary_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUMathExFunctionLibrary(); \
	friend VRPLUGIN_API class UClass* Z_Construct_UClass_UMathExFunctionLibrary(); \
public: \
	DECLARE_CLASS(UMathExFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/VRPlugin"), NO_API) \
	DECLARE_SERIALIZER(UMathExFunctionLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Racing_Plugins_VRPlugin_Source_VRPlugin_Public_MathExFunctionLibrary_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMathExFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMathExFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMathExFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMathExFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMathExFunctionLibrary(UMathExFunctionLibrary&&); \
	NO_API UMathExFunctionLibrary(const UMathExFunctionLibrary&); \
public:


#define Racing_Plugins_VRPlugin_Source_VRPlugin_Public_MathExFunctionLibrary_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMathExFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMathExFunctionLibrary(UMathExFunctionLibrary&&); \
	NO_API UMathExFunctionLibrary(const UMathExFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMathExFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMathExFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMathExFunctionLibrary)


#define Racing_Plugins_VRPlugin_Source_VRPlugin_Public_MathExFunctionLibrary_h_14_PRIVATE_PROPERTY_OFFSET
#define Racing_Plugins_VRPlugin_Source_VRPlugin_Public_MathExFunctionLibrary_h_11_PROLOG
#define Racing_Plugins_VRPlugin_Source_VRPlugin_Public_MathExFunctionLibrary_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Racing_Plugins_VRPlugin_Source_VRPlugin_Public_MathExFunctionLibrary_h_14_PRIVATE_PROPERTY_OFFSET \
	Racing_Plugins_VRPlugin_Source_VRPlugin_Public_MathExFunctionLibrary_h_14_RPC_WRAPPERS \
	Racing_Plugins_VRPlugin_Source_VRPlugin_Public_MathExFunctionLibrary_h_14_INCLASS \
	Racing_Plugins_VRPlugin_Source_VRPlugin_Public_MathExFunctionLibrary_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Racing_Plugins_VRPlugin_Source_VRPlugin_Public_MathExFunctionLibrary_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Racing_Plugins_VRPlugin_Source_VRPlugin_Public_MathExFunctionLibrary_h_14_PRIVATE_PROPERTY_OFFSET \
	Racing_Plugins_VRPlugin_Source_VRPlugin_Public_MathExFunctionLibrary_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Racing_Plugins_VRPlugin_Source_VRPlugin_Public_MathExFunctionLibrary_h_14_INCLASS_NO_PURE_DECLS \
	Racing_Plugins_VRPlugin_Source_VRPlugin_Public_MathExFunctionLibrary_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Racing_Plugins_VRPlugin_Source_VRPlugin_Public_MathExFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
