// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "PluginsCompilGameModeBase.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePluginsCompilGameModeBase() {}
// Cross Module References
	PLUGINSCOMPIL_API UClass* Z_Construct_UClass_APluginsCompilGameModeBase_NoRegister();
	PLUGINSCOMPIL_API UClass* Z_Construct_UClass_APluginsCompilGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_PluginsCompil();
// End Cross Module References
	void APluginsCompilGameModeBase::StaticRegisterNativesAPluginsCompilGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_APluginsCompilGameModeBase_NoRegister()
	{
		return APluginsCompilGameModeBase::StaticClass();
	}
	UClass* Z_Construct_UClass_APluginsCompilGameModeBase()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameModeBase();
			Z_Construct_UPackage__Script_PluginsCompil();
			OuterClass = APluginsCompilGameModeBase::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900288u;


				static TCppClassTypeInfo<TCppClassTypeTraits<APluginsCompilGameModeBase> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("PluginsCompilGameModeBase.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("PluginsCompilGameModeBase.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(APluginsCompilGameModeBase, 1047364679);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APluginsCompilGameModeBase(Z_Construct_UClass_APluginsCompilGameModeBase, &APluginsCompilGameModeBase::StaticClass, TEXT("/Script/PluginsCompil"), TEXT("APluginsCompilGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APluginsCompilGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
