// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/VRPlugin.h"
#include "Public/StringExFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStringExFunctionLibrary() {}
// Cross Module References
	VRPLUGIN_API UClass* Z_Construct_UClass_UStringExFunctionLibrary_NoRegister();
	VRPLUGIN_API UClass* Z_Construct_UClass_UStringExFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_VRPlugin();
	VRPLUGIN_API UFunction* Z_Construct_UFunction_UStringExFunctionLibrary_StringArrayToString();
	VRPLUGIN_API UFunction* Z_Construct_UFunction_UStringExFunctionLibrary_StringMinus();
	VRPLUGIN_API UFunction* Z_Construct_UFunction_UStringExFunctionLibrary_StringPlus();
// End Cross Module References
	void UStringExFunctionLibrary::StaticRegisterNativesUStringExFunctionLibrary()
	{
		UClass* Class = UStringExFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "StringArrayToString", &UStringExFunctionLibrary::execStringArrayToString },
			{ "StringMinus", &UStringExFunctionLibrary::execStringMinus },
			{ "StringPlus", &UStringExFunctionLibrary::execStringPlus },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UStringExFunctionLibrary_StringArrayToString()
	{
		struct StringExFunctionLibrary_eventStringArrayToString_Parms
		{
			TArray<FString> InStringArray;
			FString ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(StringExFunctionLibrary_eventStringArrayToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InStringArray = { UE4CodeGen_Private::EPropertyClass::Array, "InStringArray", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(StringExFunctionLibrary_eventStringArrayToString_Parms, InStringArray), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_InStringArray_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "InStringArray", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InStringArray,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InStringArray_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "StringExFunctionLibrary|String|FString" },
				{ "CompactNodeTitle", "StringArrayToString" },
				{ "Keywords", "String Effect" },
				{ "ModuleRelativePath", "Public/StringExFunctionLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UStringExFunctionLibrary, "StringArrayToString", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(StringExFunctionLibrary_eventStringArrayToString_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UStringExFunctionLibrary_StringMinus()
	{
		struct StringExFunctionLibrary_eventStringMinus_Parms
		{
			FString A;
			FString B;
			FString ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(StringExFunctionLibrary_eventStringMinus_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_B = { UE4CodeGen_Private::EPropertyClass::Str, "B", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(StringExFunctionLibrary_eventStringMinus_Parms, B), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_A = { UE4CodeGen_Private::EPropertyClass::Str, "A", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000180, 1, nullptr, STRUCT_OFFSET(StringExFunctionLibrary_eventStringMinus_Parms, A), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_B,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_A,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "StringExFunctionLibrary|String|FString" },
				{ "CompactNodeTitle", "-=" },
				{ "Keywords", "decrement string" },
				{ "ModuleRelativePath", "Public/StringExFunctionLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UStringExFunctionLibrary, "StringMinus", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(StringExFunctionLibrary_eventStringMinus_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UStringExFunctionLibrary_StringPlus()
	{
		struct StringExFunctionLibrary_eventStringPlus_Parms
		{
			FString A;
			FString B;
			FString ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(StringExFunctionLibrary_eventStringPlus_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_B = { UE4CodeGen_Private::EPropertyClass::Str, "B", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(StringExFunctionLibrary_eventStringPlus_Parms, B), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_A = { UE4CodeGen_Private::EPropertyClass::Str, "A", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(StringExFunctionLibrary_eventStringPlus_Parms, A), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_B,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_A,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "StringExFunctionLibrary|String|FString" },
				{ "CommutativeAssociativeBinaryOperator", "true" },
				{ "CompactNodeTitle", "+" },
				{ "Keywords", "increment string" },
				{ "ModuleRelativePath", "Public/StringExFunctionLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UStringExFunctionLibrary, "StringPlus", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(StringExFunctionLibrary_eventStringPlus_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UStringExFunctionLibrary_NoRegister()
	{
		return UStringExFunctionLibrary::StaticClass();
	}
	UClass* Z_Construct_UClass_UStringExFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
				(UObject* (*)())Z_Construct_UPackage__Script_VRPlugin,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UStringExFunctionLibrary_StringArrayToString, "StringArrayToString" }, // 1581803411
				{ &Z_Construct_UFunction_UStringExFunctionLibrary_StringMinus, "StringMinus" }, // 2533919616
				{ &Z_Construct_UFunction_UStringExFunctionLibrary_StringPlus, "StringPlus" }, // 2507822693
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "StringExFunctionLibrary.h" },
				{ "ModuleRelativePath", "Public/StringExFunctionLibrary.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UStringExFunctionLibrary>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UStringExFunctionLibrary::StaticClass,
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
	IMPLEMENT_CLASS(UStringExFunctionLibrary, 3118380890);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStringExFunctionLibrary(Z_Construct_UClass_UStringExFunctionLibrary, &UStringExFunctionLibrary::StaticClass, TEXT("/Script/VRPlugin"), TEXT("UStringExFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStringExFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
