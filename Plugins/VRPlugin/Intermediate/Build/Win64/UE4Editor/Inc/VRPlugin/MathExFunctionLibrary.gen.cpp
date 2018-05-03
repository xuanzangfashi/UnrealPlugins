// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/VRPlugin.h"
#include "Public/MathExFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMathExFunctionLibrary() {}
// Cross Module References
	VRPLUGIN_API UClass* Z_Construct_UClass_UMathExFunctionLibrary_NoRegister();
	VRPLUGIN_API UClass* Z_Construct_UClass_UMathExFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_VRPlugin();
	VRPLUGIN_API UFunction* Z_Construct_UFunction_UMathExFunctionLibrary_FloatDivisionEquals();
	VRPLUGIN_API UFunction* Z_Construct_UFunction_UMathExFunctionLibrary_FloatMinusEquals();
	VRPLUGIN_API UFunction* Z_Construct_UFunction_UMathExFunctionLibrary_FloatMultiEquals();
	VRPLUGIN_API UFunction* Z_Construct_UFunction_UMathExFunctionLibrary_FloatPlusEquals();
	VRPLUGIN_API UFunction* Z_Construct_UFunction_UMathExFunctionLibrary_IntegerDivisionEquals();
	VRPLUGIN_API UFunction* Z_Construct_UFunction_UMathExFunctionLibrary_IntegerMinusEquals();
	VRPLUGIN_API UFunction* Z_Construct_UFunction_UMathExFunctionLibrary_IntegerMultiEquals();
	VRPLUGIN_API UFunction* Z_Construct_UFunction_UMathExFunctionLibrary_IntegerPlusEquals();
	VRPLUGIN_API UFunction* Z_Construct_UFunction_UMathExFunctionLibrary_Vector2DivisionEqualsFloat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	VRPLUGIN_API UFunction* Z_Construct_UFunction_UMathExFunctionLibrary_Vector2DivisionEqualsVector2();
	VRPLUGIN_API UFunction* Z_Construct_UFunction_UMathExFunctionLibrary_Vector2MinusEqualsVector2();
	VRPLUGIN_API UFunction* Z_Construct_UFunction_UMathExFunctionLibrary_Vector2MultiEqualsFloat();
	VRPLUGIN_API UFunction* Z_Construct_UFunction_UMathExFunctionLibrary_Vector2MultiEqualsVector2();
	VRPLUGIN_API UFunction* Z_Construct_UFunction_UMathExFunctionLibrary_Vector2PlusEqualsVector2();
	VRPLUGIN_API UFunction* Z_Construct_UFunction_UMathExFunctionLibrary_Vector3DivisionEqualsFloat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	VRPLUGIN_API UFunction* Z_Construct_UFunction_UMathExFunctionLibrary_Vector3DivisionEqualsVector3();
	VRPLUGIN_API UFunction* Z_Construct_UFunction_UMathExFunctionLibrary_Vector3MinusEqualsVector3();
	VRPLUGIN_API UFunction* Z_Construct_UFunction_UMathExFunctionLibrary_Vector3MultiEqualsFloat();
	VRPLUGIN_API UFunction* Z_Construct_UFunction_UMathExFunctionLibrary_Vector3MultiEqualsVector3();
	VRPLUGIN_API UFunction* Z_Construct_UFunction_UMathExFunctionLibrary_Vector3PlusEqualsVector3();
// End Cross Module References
	void UMathExFunctionLibrary::StaticRegisterNativesUMathExFunctionLibrary()
	{
		UClass* Class = UMathExFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FloatDivisionEquals", &UMathExFunctionLibrary::execFloatDivisionEquals },
			{ "FloatMinusEquals", &UMathExFunctionLibrary::execFloatMinusEquals },
			{ "FloatMultiEquals", &UMathExFunctionLibrary::execFloatMultiEquals },
			{ "FloatPlusEquals", &UMathExFunctionLibrary::execFloatPlusEquals },
			{ "IntegerDivisionEquals", &UMathExFunctionLibrary::execIntegerDivisionEquals },
			{ "IntegerMinusEquals", &UMathExFunctionLibrary::execIntegerMinusEquals },
			{ "IntegerMultiEquals", &UMathExFunctionLibrary::execIntegerMultiEquals },
			{ "IntegerPlusEquals", &UMathExFunctionLibrary::execIntegerPlusEquals },
			{ "Vector2DivisionEqualsFloat", &UMathExFunctionLibrary::execVector2DivisionEqualsFloat },
			{ "Vector2DivisionEqualsVector2", &UMathExFunctionLibrary::execVector2DivisionEqualsVector2 },
			{ "Vector2MinusEqualsVector2", &UMathExFunctionLibrary::execVector2MinusEqualsVector2 },
			{ "Vector2MultiEqualsFloat", &UMathExFunctionLibrary::execVector2MultiEqualsFloat },
			{ "Vector2MultiEqualsVector2", &UMathExFunctionLibrary::execVector2MultiEqualsVector2 },
			{ "Vector2PlusEqualsVector2", &UMathExFunctionLibrary::execVector2PlusEqualsVector2 },
			{ "Vector3DivisionEqualsFloat", &UMathExFunctionLibrary::execVector3DivisionEqualsFloat },
			{ "Vector3DivisionEqualsVector3", &UMathExFunctionLibrary::execVector3DivisionEqualsVector3 },
			{ "Vector3MinusEqualsVector3", &UMathExFunctionLibrary::execVector3MinusEqualsVector3 },
			{ "Vector3MultiEqualsFloat", &UMathExFunctionLibrary::execVector3MultiEqualsFloat },
			{ "Vector3MultiEqualsVector3", &UMathExFunctionLibrary::execVector3MultiEqualsVector3 },
			{ "Vector3PlusEqualsVector3", &UMathExFunctionLibrary::execVector3PlusEqualsVector3 },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UMathExFunctionLibrary_FloatDivisionEquals()
	{
		struct MathExFunctionLibrary_eventFloatDivisionEquals_Parms
		{
			float Float;
			float X;
			float FloatOut;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FloatOut = { UE4CodeGen_Private::EPropertyClass::Float, "FloatOut", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(MathExFunctionLibrary_eventFloatDivisionEquals_Parms, FloatOut), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_X = { UE4CodeGen_Private::EPropertyClass::Float, "X", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MathExFunctionLibrary_eventFloatDivisionEquals_Parms, X), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Float = { UE4CodeGen_Private::EPropertyClass::Float, "Float", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000180, 1, nullptr, STRUCT_OFFSET(MathExFunctionLibrary_eventFloatDivisionEquals_Parms, Float), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FloatOut,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_X,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Float,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MathExFunctionLibrary|Math|Float" },
				{ "CompactNodeTitle", "/=" },
				{ "Keywords", "division float" },
				{ "ModuleRelativePath", "Public/MathExFunctionLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMathExFunctionLibrary, "FloatDivisionEquals", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(MathExFunctionLibrary_eventFloatDivisionEquals_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMathExFunctionLibrary_FloatMinusEquals()
	{
		struct MathExFunctionLibrary_eventFloatMinusEquals_Parms
		{
			float Float;
			float Sub;
			float FloatOut;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FloatOut = { UE4CodeGen_Private::EPropertyClass::Float, "FloatOut", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(MathExFunctionLibrary_eventFloatMinusEquals_Parms, FloatOut), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Sub = { UE4CodeGen_Private::EPropertyClass::Float, "Sub", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MathExFunctionLibrary_eventFloatMinusEquals_Parms, Sub), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Float = { UE4CodeGen_Private::EPropertyClass::Float, "Float", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000180, 1, nullptr, STRUCT_OFFSET(MathExFunctionLibrary_eventFloatMinusEquals_Parms, Float), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FloatOut,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Sub,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Float,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MathExFunctionLibrary|Math|Float" },
				{ "CompactNodeTitle", "-=" },
				{ "Keywords", "decrement float" },
				{ "ModuleRelativePath", "Public/MathExFunctionLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMathExFunctionLibrary, "FloatMinusEquals", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(MathExFunctionLibrary_eventFloatMinusEquals_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMathExFunctionLibrary_FloatMultiEquals()
	{
		struct MathExFunctionLibrary_eventFloatMultiEquals_Parms
		{
			float Float;
			float X;
			float FloatOut;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FloatOut = { UE4CodeGen_Private::EPropertyClass::Float, "FloatOut", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(MathExFunctionLibrary_eventFloatMultiEquals_Parms, FloatOut), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_X = { UE4CodeGen_Private::EPropertyClass::Float, "X", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MathExFunctionLibrary_eventFloatMultiEquals_Parms, X), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Float = { UE4CodeGen_Private::EPropertyClass::Float, "Float", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000180, 1, nullptr, STRUCT_OFFSET(MathExFunctionLibrary_eventFloatMultiEquals_Parms, Float), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FloatOut,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_X,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Float,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MathExFunctionLibrary|Math|Float" },
				{ "CompactNodeTitle", "*=" },
				{ "Keywords", "multi float" },
				{ "ModuleRelativePath", "Public/MathExFunctionLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMathExFunctionLibrary, "FloatMultiEquals", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(MathExFunctionLibrary_eventFloatMultiEquals_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMathExFunctionLibrary_FloatPlusEquals()
	{
		struct MathExFunctionLibrary_eventFloatPlusEquals_Parms
		{
			float Float;
			float Add;
			float FloatOut;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FloatOut = { UE4CodeGen_Private::EPropertyClass::Float, "FloatOut", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(MathExFunctionLibrary_eventFloatPlusEquals_Parms, FloatOut), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Add = { UE4CodeGen_Private::EPropertyClass::Float, "Add", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MathExFunctionLibrary_eventFloatPlusEquals_Parms, Add), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Float = { UE4CodeGen_Private::EPropertyClass::Float, "Float", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000180, 1, nullptr, STRUCT_OFFSET(MathExFunctionLibrary_eventFloatPlusEquals_Parms, Float), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FloatOut,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Add,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Float,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MathExFunctionLibrary|Math|Float" },
				{ "CompactNodeTitle", "+=" },
				{ "Keywords", "increment float" },
				{ "ModuleRelativePath", "Public/MathExFunctionLibrary.h" },
				{ "ToolTip", "float" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMathExFunctionLibrary, "FloatPlusEquals", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(MathExFunctionLibrary_eventFloatPlusEquals_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMathExFunctionLibrary_IntegerDivisionEquals()
	{
		struct MathExFunctionLibrary_eventIntegerDivisionEquals_Parms
		{
			int32 Int;
			int32 X;
			int32 IntOut;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_IntOut = { UE4CodeGen_Private::EPropertyClass::Int, "IntOut", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(MathExFunctionLibrary_eventIntegerDivisionEquals_Parms, IntOut), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_X = { UE4CodeGen_Private::EPropertyClass::Int, "X", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MathExFunctionLibrary_eventIntegerDivisionEquals_Parms, X), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Int = { UE4CodeGen_Private::EPropertyClass::Int, "Int", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000180, 1, nullptr, STRUCT_OFFSET(MathExFunctionLibrary_eventIntegerDivisionEquals_Parms, Int), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IntOut,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_X,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Int,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MathExFunctionLibrary|Math|Integer" },
				{ "CompactNodeTitle", "/=" },
				{ "Keywords", "division Integer" },
				{ "ModuleRelativePath", "Public/MathExFunctionLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMathExFunctionLibrary, "IntegerDivisionEquals", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(MathExFunctionLibrary_eventIntegerDivisionEquals_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMathExFunctionLibrary_IntegerMinusEquals()
	{
		struct MathExFunctionLibrary_eventIntegerMinusEquals_Parms
		{
			int32 Int;
			int32 Sub;
			int32 IntOut;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_IntOut = { UE4CodeGen_Private::EPropertyClass::Int, "IntOut", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(MathExFunctionLibrary_eventIntegerMinusEquals_Parms, IntOut), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Sub = { UE4CodeGen_Private::EPropertyClass::Int, "Sub", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MathExFunctionLibrary_eventIntegerMinusEquals_Parms, Sub), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Int = { UE4CodeGen_Private::EPropertyClass::Int, "Int", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000180, 1, nullptr, STRUCT_OFFSET(MathExFunctionLibrary_eventIntegerMinusEquals_Parms, Int), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IntOut,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Sub,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Int,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MathExFunctionLibrary|Math|Integer" },
				{ "CompactNodeTitle", "-=" },
				{ "Keywords", "decrement Integer" },
				{ "ModuleRelativePath", "Public/MathExFunctionLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMathExFunctionLibrary, "IntegerMinusEquals", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(MathExFunctionLibrary_eventIntegerMinusEquals_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMathExFunctionLibrary_IntegerMultiEquals()
	{
		struct MathExFunctionLibrary_eventIntegerMultiEquals_Parms
		{
			int32 Int;
			int32 X;
			int32 IntOut;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_IntOut = { UE4CodeGen_Private::EPropertyClass::Int, "IntOut", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(MathExFunctionLibrary_eventIntegerMultiEquals_Parms, IntOut), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_X = { UE4CodeGen_Private::EPropertyClass::Int, "X", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MathExFunctionLibrary_eventIntegerMultiEquals_Parms, X), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Int = { UE4CodeGen_Private::EPropertyClass::Int, "Int", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000180, 1, nullptr, STRUCT_OFFSET(MathExFunctionLibrary_eventIntegerMultiEquals_Parms, Int), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IntOut,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_X,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Int,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MathExFunctionLibrary|Math|Integer" },
				{ "CompactNodeTitle", "*=" },
				{ "Keywords", "multi Integer" },
				{ "ModuleRelativePath", "Public/MathExFunctionLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMathExFunctionLibrary, "IntegerMultiEquals", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(MathExFunctionLibrary_eventIntegerMultiEquals_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMathExFunctionLibrary_IntegerPlusEquals()
	{
		struct MathExFunctionLibrary_eventIntegerPlusEquals_Parms
		{
			int32 Int;
			int32 Add;
			int32 IntOut;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_IntOut = { UE4CodeGen_Private::EPropertyClass::Int, "IntOut", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(MathExFunctionLibrary_eventIntegerPlusEquals_Parms, IntOut), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Add = { UE4CodeGen_Private::EPropertyClass::Int, "Add", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MathExFunctionLibrary_eventIntegerPlusEquals_Parms, Add), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Int = { UE4CodeGen_Private::EPropertyClass::Int, "Int", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000180, 1, nullptr, STRUCT_OFFSET(MathExFunctionLibrary_eventIntegerPlusEquals_Parms, Int), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IntOut,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Add,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Int,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MathExFunctionLibrary|Math|Integer" },
				{ "CompactNodeTitle", "+=" },
				{ "Keywords", "increment Integer" },
				{ "ModuleRelativePath", "Public/MathExFunctionLibrary.h" },
				{ "ToolTip", "int" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMathExFunctionLibrary, "IntegerPlusEquals", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(MathExFunctionLibrary_eventIntegerPlusEquals_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMathExFunctionLibrary_Vector2DivisionEqualsFloat()
	{
		struct MathExFunctionLibrary_eventVector2DivisionEqualsFloat_Parms
		{
			FVector2D Vector;
			float X;
			FVector2D VectorOut;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_VectorOut = { UE4CodeGen_Private::EPropertyClass::Struct, "VectorOut", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(MathExFunctionLibrary_eventVector2DivisionEqualsFloat_Parms, VectorOut), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_X = { UE4CodeGen_Private::EPropertyClass::Float, "X", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MathExFunctionLibrary_eventVector2DivisionEqualsFloat_Parms, X), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vector = { UE4CodeGen_Private::EPropertyClass::Struct, "Vector", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000180, 1, nullptr, STRUCT_OFFSET(MathExFunctionLibrary_eventVector2DivisionEqualsFloat_Parms, Vector), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VectorOut,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_X,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Vector,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MathExFunctionLibrary|Math|Vector2" },
				{ "CompactNodeTitle", "/=" },
				{ "Keywords", "division Vector2" },
				{ "ModuleRelativePath", "Public/MathExFunctionLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMathExFunctionLibrary, "Vector2DivisionEqualsFloat", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C22401, sizeof(MathExFunctionLibrary_eventVector2DivisionEqualsFloat_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMathExFunctionLibrary_Vector2DivisionEqualsVector2()
	{
		struct MathExFunctionLibrary_eventVector2DivisionEqualsVector2_Parms
		{
			FVector2D Vector;
			FVector2D X;
			FVector2D VectorOut;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_VectorOut = { UE4CodeGen_Private::EPropertyClass::Struct, "VectorOut", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(MathExFunctionLibrary_eventVector2DivisionEqualsVector2_Parms, VectorOut), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_X = { UE4CodeGen_Private::EPropertyClass::Struct, "X", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MathExFunctionLibrary_eventVector2DivisionEqualsVector2_Parms, X), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vector = { UE4CodeGen_Private::EPropertyClass::Struct, "Vector", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000180, 1, nullptr, STRUCT_OFFSET(MathExFunctionLibrary_eventVector2DivisionEqualsVector2_Parms, Vector), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VectorOut,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_X,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Vector,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MathExFunctionLibrary|Math|Vector2" },
				{ "CompactNodeTitle", "/=" },
				{ "Keywords", "division Vector2" },
				{ "ModuleRelativePath", "Public/MathExFunctionLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMathExFunctionLibrary, "Vector2DivisionEqualsVector2", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C22401, sizeof(MathExFunctionLibrary_eventVector2DivisionEqualsVector2_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMathExFunctionLibrary_Vector2MinusEqualsVector2()
	{
		struct MathExFunctionLibrary_eventVector2MinusEqualsVector2_Parms
		{
			FVector2D Vector;
			FVector2D Sub;
			FVector2D VectorOut;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_VectorOut = { UE4CodeGen_Private::EPropertyClass::Struct, "VectorOut", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(MathExFunctionLibrary_eventVector2MinusEqualsVector2_Parms, VectorOut), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Sub = { UE4CodeGen_Private::EPropertyClass::Struct, "Sub", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MathExFunctionLibrary_eventVector2MinusEqualsVector2_Parms, Sub), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vector = { UE4CodeGen_Private::EPropertyClass::Struct, "Vector", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000180, 1, nullptr, STRUCT_OFFSET(MathExFunctionLibrary_eventVector2MinusEqualsVector2_Parms, Vector), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VectorOut,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Sub,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Vector,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MathExFunctionLibrary|Math|Vector2" },
				{ "CompactNodeTitle", "-=" },
				{ "Keywords", "decrement Vector2" },
				{ "ModuleRelativePath", "Public/MathExFunctionLibrary.h" },
				{ "ToolTip", "2D" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMathExFunctionLibrary, "Vector2MinusEqualsVector2", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C22401, sizeof(MathExFunctionLibrary_eventVector2MinusEqualsVector2_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMathExFunctionLibrary_Vector2MultiEqualsFloat()
	{
		struct MathExFunctionLibrary_eventVector2MultiEqualsFloat_Parms
		{
			FVector2D Vector;
			float X;
			FVector2D VectorOut;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_VectorOut = { UE4CodeGen_Private::EPropertyClass::Struct, "VectorOut", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(MathExFunctionLibrary_eventVector2MultiEqualsFloat_Parms, VectorOut), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_X = { UE4CodeGen_Private::EPropertyClass::Float, "X", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MathExFunctionLibrary_eventVector2MultiEqualsFloat_Parms, X), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vector = { UE4CodeGen_Private::EPropertyClass::Struct, "Vector", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000180, 1, nullptr, STRUCT_OFFSET(MathExFunctionLibrary_eventVector2MultiEqualsFloat_Parms, Vector), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VectorOut,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_X,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Vector,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MathExFunctionLibrary|Math|Vector2" },
				{ "CompactNodeTitle", "*=" },
				{ "Keywords", "multi Vector2" },
				{ "ModuleRelativePath", "Public/MathExFunctionLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMathExFunctionLibrary, "Vector2MultiEqualsFloat", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C22401, sizeof(MathExFunctionLibrary_eventVector2MultiEqualsFloat_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMathExFunctionLibrary_Vector2MultiEqualsVector2()
	{
		struct MathExFunctionLibrary_eventVector2MultiEqualsVector2_Parms
		{
			FVector2D Vector;
			FVector2D X;
			FVector2D VectorOut;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_VectorOut = { UE4CodeGen_Private::EPropertyClass::Struct, "VectorOut", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(MathExFunctionLibrary_eventVector2MultiEqualsVector2_Parms, VectorOut), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_X = { UE4CodeGen_Private::EPropertyClass::Struct, "X", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MathExFunctionLibrary_eventVector2MultiEqualsVector2_Parms, X), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vector = { UE4CodeGen_Private::EPropertyClass::Struct, "Vector", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000180, 1, nullptr, STRUCT_OFFSET(MathExFunctionLibrary_eventVector2MultiEqualsVector2_Parms, Vector), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VectorOut,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_X,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Vector,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MathExFunctionLibrary|Math|Vector2" },
				{ "CompactNodeTitle", "*=" },
				{ "Keywords", "multi Vector2" },
				{ "ModuleRelativePath", "Public/MathExFunctionLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMathExFunctionLibrary, "Vector2MultiEqualsVector2", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C22401, sizeof(MathExFunctionLibrary_eventVector2MultiEqualsVector2_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMathExFunctionLibrary_Vector2PlusEqualsVector2()
	{
		struct MathExFunctionLibrary_eventVector2PlusEqualsVector2_Parms
		{
			FVector2D Vector;
			FVector2D Add;
			FVector2D VectorOut;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_VectorOut = { UE4CodeGen_Private::EPropertyClass::Struct, "VectorOut", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(MathExFunctionLibrary_eventVector2PlusEqualsVector2_Parms, VectorOut), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Add = { UE4CodeGen_Private::EPropertyClass::Struct, "Add", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MathExFunctionLibrary_eventVector2PlusEqualsVector2_Parms, Add), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vector = { UE4CodeGen_Private::EPropertyClass::Struct, "Vector", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000180, 1, nullptr, STRUCT_OFFSET(MathExFunctionLibrary_eventVector2PlusEqualsVector2_Parms, Vector), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VectorOut,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Add,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Vector,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MathExFunctionLibrary|Math|Vector2" },
				{ "CompactNodeTitle", "+=" },
				{ "Keywords", "increment Vector2" },
				{ "ModuleRelativePath", "Public/MathExFunctionLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMathExFunctionLibrary, "Vector2PlusEqualsVector2", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C22401, sizeof(MathExFunctionLibrary_eventVector2PlusEqualsVector2_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMathExFunctionLibrary_Vector3DivisionEqualsFloat()
	{
		struct MathExFunctionLibrary_eventVector3DivisionEqualsFloat_Parms
		{
			FVector Vector;
			float X;
			FVector VectorOut;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_VectorOut = { UE4CodeGen_Private::EPropertyClass::Struct, "VectorOut", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(MathExFunctionLibrary_eventVector3DivisionEqualsFloat_Parms, VectorOut), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_X = { UE4CodeGen_Private::EPropertyClass::Float, "X", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MathExFunctionLibrary_eventVector3DivisionEqualsFloat_Parms, X), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vector = { UE4CodeGen_Private::EPropertyClass::Struct, "Vector", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000180, 1, nullptr, STRUCT_OFFSET(MathExFunctionLibrary_eventVector3DivisionEqualsFloat_Parms, Vector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VectorOut,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_X,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Vector,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MathExFunctionLibrary|Math|Vector3" },
				{ "CompactNodeTitle", "/=" },
				{ "Keywords", "division Vector3" },
				{ "ModuleRelativePath", "Public/MathExFunctionLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMathExFunctionLibrary, "Vector3DivisionEqualsFloat", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C22401, sizeof(MathExFunctionLibrary_eventVector3DivisionEqualsFloat_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMathExFunctionLibrary_Vector3DivisionEqualsVector3()
	{
		struct MathExFunctionLibrary_eventVector3DivisionEqualsVector3_Parms
		{
			FVector Vector;
			FVector X;
			FVector VectorOut;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_VectorOut = { UE4CodeGen_Private::EPropertyClass::Struct, "VectorOut", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(MathExFunctionLibrary_eventVector3DivisionEqualsVector3_Parms, VectorOut), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_X = { UE4CodeGen_Private::EPropertyClass::Struct, "X", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MathExFunctionLibrary_eventVector3DivisionEqualsVector3_Parms, X), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vector = { UE4CodeGen_Private::EPropertyClass::Struct, "Vector", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000180, 1, nullptr, STRUCT_OFFSET(MathExFunctionLibrary_eventVector3DivisionEqualsVector3_Parms, Vector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VectorOut,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_X,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Vector,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MathExFunctionLibrary|Math|Vector3" },
				{ "CompactNodeTitle", "/=" },
				{ "Keywords", "division Vector3" },
				{ "ModuleRelativePath", "Public/MathExFunctionLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMathExFunctionLibrary, "Vector3DivisionEqualsVector3", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C22401, sizeof(MathExFunctionLibrary_eventVector3DivisionEqualsVector3_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMathExFunctionLibrary_Vector3MinusEqualsVector3()
	{
		struct MathExFunctionLibrary_eventVector3MinusEqualsVector3_Parms
		{
			FVector Vector;
			FVector Sub;
			FVector VectorOut;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_VectorOut = { UE4CodeGen_Private::EPropertyClass::Struct, "VectorOut", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(MathExFunctionLibrary_eventVector3MinusEqualsVector3_Parms, VectorOut), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Sub = { UE4CodeGen_Private::EPropertyClass::Struct, "Sub", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MathExFunctionLibrary_eventVector3MinusEqualsVector3_Parms, Sub), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vector = { UE4CodeGen_Private::EPropertyClass::Struct, "Vector", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000180, 1, nullptr, STRUCT_OFFSET(MathExFunctionLibrary_eventVector3MinusEqualsVector3_Parms, Vector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VectorOut,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Sub,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Vector,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MathExFunctionLibrary|Math|Vector3" },
				{ "CompactNodeTitle", "-=" },
				{ "Keywords", "decrement Vector3" },
				{ "ModuleRelativePath", "Public/MathExFunctionLibrary.h" },
				{ "ToolTip", "3D" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMathExFunctionLibrary, "Vector3MinusEqualsVector3", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C22401, sizeof(MathExFunctionLibrary_eventVector3MinusEqualsVector3_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMathExFunctionLibrary_Vector3MultiEqualsFloat()
	{
		struct MathExFunctionLibrary_eventVector3MultiEqualsFloat_Parms
		{
			FVector Vector;
			float X;
			FVector VectorOut;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_VectorOut = { UE4CodeGen_Private::EPropertyClass::Struct, "VectorOut", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(MathExFunctionLibrary_eventVector3MultiEqualsFloat_Parms, VectorOut), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_X = { UE4CodeGen_Private::EPropertyClass::Float, "X", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MathExFunctionLibrary_eventVector3MultiEqualsFloat_Parms, X), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vector = { UE4CodeGen_Private::EPropertyClass::Struct, "Vector", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000180, 1, nullptr, STRUCT_OFFSET(MathExFunctionLibrary_eventVector3MultiEqualsFloat_Parms, Vector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VectorOut,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_X,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Vector,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MathExFunctionLibrary|Math|Vector3" },
				{ "CompactNodeTitle", "*=" },
				{ "Keywords", "multi Vector3" },
				{ "ModuleRelativePath", "Public/MathExFunctionLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMathExFunctionLibrary, "Vector3MultiEqualsFloat", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C22401, sizeof(MathExFunctionLibrary_eventVector3MultiEqualsFloat_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMathExFunctionLibrary_Vector3MultiEqualsVector3()
	{
		struct MathExFunctionLibrary_eventVector3MultiEqualsVector3_Parms
		{
			FVector Vector;
			FVector X;
			FVector VectorOut;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_VectorOut = { UE4CodeGen_Private::EPropertyClass::Struct, "VectorOut", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(MathExFunctionLibrary_eventVector3MultiEqualsVector3_Parms, VectorOut), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_X = { UE4CodeGen_Private::EPropertyClass::Struct, "X", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MathExFunctionLibrary_eventVector3MultiEqualsVector3_Parms, X), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vector = { UE4CodeGen_Private::EPropertyClass::Struct, "Vector", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000180, 1, nullptr, STRUCT_OFFSET(MathExFunctionLibrary_eventVector3MultiEqualsVector3_Parms, Vector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VectorOut,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_X,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Vector,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MathExFunctionLibrary|Math|Vector3" },
				{ "CompactNodeTitle", "*=" },
				{ "Keywords", "multi Vector3" },
				{ "ModuleRelativePath", "Public/MathExFunctionLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMathExFunctionLibrary, "Vector3MultiEqualsVector3", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C22401, sizeof(MathExFunctionLibrary_eventVector3MultiEqualsVector3_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMathExFunctionLibrary_Vector3PlusEqualsVector3()
	{
		struct MathExFunctionLibrary_eventVector3PlusEqualsVector3_Parms
		{
			FVector Vector;
			FVector Add;
			FVector VectorOut;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_VectorOut = { UE4CodeGen_Private::EPropertyClass::Struct, "VectorOut", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(MathExFunctionLibrary_eventVector3PlusEqualsVector3_Parms, VectorOut), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Add = { UE4CodeGen_Private::EPropertyClass::Struct, "Add", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MathExFunctionLibrary_eventVector3PlusEqualsVector3_Parms, Add), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vector = { UE4CodeGen_Private::EPropertyClass::Struct, "Vector", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000180, 1, nullptr, STRUCT_OFFSET(MathExFunctionLibrary_eventVector3PlusEqualsVector3_Parms, Vector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VectorOut,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Add,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Vector,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MathExFunctionLibrary|Math|Vector3" },
				{ "CompactNodeTitle", "+=" },
				{ "Keywords", "increment Vector3" },
				{ "ModuleRelativePath", "Public/MathExFunctionLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMathExFunctionLibrary, "Vector3PlusEqualsVector3", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C22401, sizeof(MathExFunctionLibrary_eventVector3PlusEqualsVector3_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMathExFunctionLibrary_NoRegister()
	{
		return UMathExFunctionLibrary::StaticClass();
	}
	UClass* Z_Construct_UClass_UMathExFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
				(UObject* (*)())Z_Construct_UPackage__Script_VRPlugin,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UMathExFunctionLibrary_FloatDivisionEquals, "FloatDivisionEquals" }, // 4200133819
				{ &Z_Construct_UFunction_UMathExFunctionLibrary_FloatMinusEquals, "FloatMinusEquals" }, // 1217888349
				{ &Z_Construct_UFunction_UMathExFunctionLibrary_FloatMultiEquals, "FloatMultiEquals" }, // 1702358688
				{ &Z_Construct_UFunction_UMathExFunctionLibrary_FloatPlusEquals, "FloatPlusEquals" }, // 2331542676
				{ &Z_Construct_UFunction_UMathExFunctionLibrary_IntegerDivisionEquals, "IntegerDivisionEquals" }, // 1342880308
				{ &Z_Construct_UFunction_UMathExFunctionLibrary_IntegerMinusEquals, "IntegerMinusEquals" }, // 1013098775
				{ &Z_Construct_UFunction_UMathExFunctionLibrary_IntegerMultiEquals, "IntegerMultiEquals" }, // 2039685898
				{ &Z_Construct_UFunction_UMathExFunctionLibrary_IntegerPlusEquals, "IntegerPlusEquals" }, // 2080627351
				{ &Z_Construct_UFunction_UMathExFunctionLibrary_Vector2DivisionEqualsFloat, "Vector2DivisionEqualsFloat" }, // 2355981953
				{ &Z_Construct_UFunction_UMathExFunctionLibrary_Vector2DivisionEqualsVector2, "Vector2DivisionEqualsVector2" }, // 2036000415
				{ &Z_Construct_UFunction_UMathExFunctionLibrary_Vector2MinusEqualsVector2, "Vector2MinusEqualsVector2" }, // 3323154177
				{ &Z_Construct_UFunction_UMathExFunctionLibrary_Vector2MultiEqualsFloat, "Vector2MultiEqualsFloat" }, // 4026847783
				{ &Z_Construct_UFunction_UMathExFunctionLibrary_Vector2MultiEqualsVector2, "Vector2MultiEqualsVector2" }, // 26366107
				{ &Z_Construct_UFunction_UMathExFunctionLibrary_Vector2PlusEqualsVector2, "Vector2PlusEqualsVector2" }, // 641530579
				{ &Z_Construct_UFunction_UMathExFunctionLibrary_Vector3DivisionEqualsFloat, "Vector3DivisionEqualsFloat" }, // 1566879943
				{ &Z_Construct_UFunction_UMathExFunctionLibrary_Vector3DivisionEqualsVector3, "Vector3DivisionEqualsVector3" }, // 2796605825
				{ &Z_Construct_UFunction_UMathExFunctionLibrary_Vector3MinusEqualsVector3, "Vector3MinusEqualsVector3" }, // 2517468438
				{ &Z_Construct_UFunction_UMathExFunctionLibrary_Vector3MultiEqualsFloat, "Vector3MultiEqualsFloat" }, // 1126757556
				{ &Z_Construct_UFunction_UMathExFunctionLibrary_Vector3MultiEqualsVector3, "Vector3MultiEqualsVector3" }, // 643155514
				{ &Z_Construct_UFunction_UMathExFunctionLibrary_Vector3PlusEqualsVector3, "Vector3PlusEqualsVector3" }, // 2970683204
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "MathExFunctionLibrary.h" },
				{ "ModuleRelativePath", "Public/MathExFunctionLibrary.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMathExFunctionLibrary>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMathExFunctionLibrary::StaticClass,
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
	IMPLEMENT_CLASS(UMathExFunctionLibrary, 1219818185);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMathExFunctionLibrary(Z_Construct_UClass_UMathExFunctionLibrary, &UMathExFunctionLibrary::StaticClass, TEXT("/Script/VRPlugin"), TEXT("UMathExFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMathExFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
