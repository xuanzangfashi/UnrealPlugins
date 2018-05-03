// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/VRPlugin.h"
#include "Public/VRGameModeEx.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRGameModeEx() {}
// Cross Module References
	VRPLUGIN_API UClass* Z_Construct_UClass_AVRGameModeEx_NoRegister();
	VRPLUGIN_API UClass* Z_Construct_UClass_AVRGameModeEx();
	ENGINE_API UClass* Z_Construct_UClass_AGameMode();
	UPackage* Z_Construct_UPackage__Script_VRPlugin();
// End Cross Module References
	void AVRGameModeEx::StaticRegisterNativesAVRGameModeEx()
	{
	}
	UClass* Z_Construct_UClass_AVRGameModeEx_NoRegister()
	{
		return AVRGameModeEx::StaticClass();
	}
	UClass* Z_Construct_UClass_AVRGameModeEx()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameMode,
				(UObject* (*)())Z_Construct_UPackage__Script_VRPlugin,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "VRGameModeEx.h" },
				{ "ModuleRelativePath", "Public/VRGameModeEx.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AVRGameModeEx>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AVRGameModeEx::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x0090028Cu,
				nullptr, 0,
				nullptr, 0,
				"Game",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVRGameModeEx, 392716371);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVRGameModeEx(Z_Construct_UClass_AVRGameModeEx, &AVRGameModeEx::StaticClass, TEXT("/Script/VRPlugin"), TEXT("AVRGameModeEx"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVRGameModeEx);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
