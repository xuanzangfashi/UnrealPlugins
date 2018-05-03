// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/VRPlugin.h"
#include "Public/FunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFunctionLibrary() {}
// Cross Module References
	VRPLUGIN_API UClass* Z_Construct_UClass_UFunctionLibrary_NoRegister();
	VRPLUGIN_API UClass* Z_Construct_UClass_UFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_VRPlugin();
	VRPLUGIN_API UFunction* Z_Construct_UFunction_UFunctionLibrary_AddIgoneActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	VRPLUGIN_API UFunction* Z_Construct_UFunction_UFunctionLibrary_ClearIgoneActors();
	VRPLUGIN_API UFunction* Z_Construct_UFunction_UFunctionLibrary_GetIgoneActors();
	VRPLUGIN_API UFunction* Z_Construct_UFunction_UFunctionLibrary_GetNULL();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	VRPLUGIN_API UFunction* Z_Construct_UFunction_UFunctionLibrary_RayCast();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	VRPLUGIN_API UFunction* Z_Construct_UFunction_UFunctionLibrary_RemoveIgoneActor();
// End Cross Module References
	void UFunctionLibrary::StaticRegisterNativesUFunctionLibrary()
	{
		UClass* Class = UFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddIgoneActor", &UFunctionLibrary::execAddIgoneActor },
			{ "ClearIgoneActors", &UFunctionLibrary::execClearIgoneActors },
			{ "GetIgoneActors", &UFunctionLibrary::execGetIgoneActors },
			{ "GetNULL", &UFunctionLibrary::execGetNULL },
			{ "RayCast", &UFunctionLibrary::execRayCast },
			{ "RemoveIgoneActor", &UFunctionLibrary::execRemoveIgoneActor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UFunctionLibrary_AddIgoneActor()
	{
		struct FunctionLibrary_eventAddIgoneActor_Parms
		{
			AActor* InActor;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InActor = { UE4CodeGen_Private::EPropertyClass::Object, "InActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FunctionLibrary_eventAddIgoneActor_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InActor,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "FunctionLibrary" },
				{ "ModuleRelativePath", "Public/FunctionLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UFunctionLibrary, "AddIgoneActor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(FunctionLibrary_eventAddIgoneActor_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UFunctionLibrary_ClearIgoneActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "FunctionLibrary" },
				{ "ModuleRelativePath", "Public/FunctionLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UFunctionLibrary, "ClearIgoneActors", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UFunctionLibrary_GetIgoneActors()
	{
		struct FunctionLibrary_eventGetIgoneActors_Parms
		{
			TArray<AActor*> OutActors;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutActors = { UE4CodeGen_Private::EPropertyClass::Array, "OutActors", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(FunctionLibrary_eventGetIgoneActors_Parms, OutActors), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutActors_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "OutActors", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutActors,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutActors_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "FunctionLibrary" },
				{ "ModuleRelativePath", "Public/FunctionLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UFunctionLibrary, "GetIgoneActors", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(FunctionLibrary_eventGetIgoneActors_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UFunctionLibrary_GetNULL()
	{
		struct FunctionLibrary_eventGetNULL_Parms
		{
			UObject* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(FunctionLibrary_eventGetNULL_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "UFunctionLibrary|NULL|NULL" },
				{ "CompactNodeTitle", "NULL" },
				{ "Keywords", "NULL|0|null" },
				{ "ModuleRelativePath", "Public/FunctionLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UFunctionLibrary, "GetNULL", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(FunctionLibrary_eventGetNULL_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UFunctionLibrary_RayCast()
	{
		struct FunctionLibrary_eventRayCast_Parms
		{
			FVector Start;
			FVector Dir;
			APawn* player;
			FHitResult ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010008000000580, 1, nullptr, STRUCT_OFFSET(FunctionLibrary_eventRayCast_Parms, ReturnValue), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player = { UE4CodeGen_Private::EPropertyClass::Object, "player", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FunctionLibrary_eventRayCast_Parms, player), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Dir = { UE4CodeGen_Private::EPropertyClass::Struct, "Dir", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FunctionLibrary_eventRayCast_Parms, Dir), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Start = { UE4CodeGen_Private::EPropertyClass::Struct, "Start", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FunctionLibrary_eventRayCast_Parms, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_player,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Dir,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Start,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "FunctionLibrary" },
				{ "ModuleRelativePath", "Public/FunctionLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UFunctionLibrary, "RayCast", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04822401, sizeof(FunctionLibrary_eventRayCast_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UFunctionLibrary_RemoveIgoneActor()
	{
		struct FunctionLibrary_eventRemoveIgoneActor_Parms
		{
			AActor* InActor;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InActor = { UE4CodeGen_Private::EPropertyClass::Object, "InActor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(FunctionLibrary_eventRemoveIgoneActor_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InActor,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "FunctionLibrary" },
				{ "ModuleRelativePath", "Public/FunctionLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UFunctionLibrary, "RemoveIgoneActor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(FunctionLibrary_eventRemoveIgoneActor_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFunctionLibrary_NoRegister()
	{
		return UFunctionLibrary::StaticClass();
	}
	UClass* Z_Construct_UClass_UFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
				(UObject* (*)())Z_Construct_UPackage__Script_VRPlugin,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UFunctionLibrary_AddIgoneActor, "AddIgoneActor" }, // 1165561879
				{ &Z_Construct_UFunction_UFunctionLibrary_ClearIgoneActors, "ClearIgoneActors" }, // 2747971562
				{ &Z_Construct_UFunction_UFunctionLibrary_GetIgoneActors, "GetIgoneActors" }, // 1026313965
				{ &Z_Construct_UFunction_UFunctionLibrary_GetNULL, "GetNULL" }, // 2310990068
				{ &Z_Construct_UFunction_UFunctionLibrary_RayCast, "RayCast" }, // 3137147814
				{ &Z_Construct_UFunction_UFunctionLibrary_RemoveIgoneActor, "RemoveIgoneActor" }, // 3999065042
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "FunctionLibrary.h" },
				{ "ModuleRelativePath", "Public/FunctionLibrary.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UFunctionLibrary>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UFunctionLibrary::StaticClass,
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
	IMPLEMENT_CLASS(UFunctionLibrary, 3961654280);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFunctionLibrary(Z_Construct_UClass_UFunctionLibrary, &UFunctionLibrary::StaticClass, TEXT("/Script/VRPlugin"), TEXT("UFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
