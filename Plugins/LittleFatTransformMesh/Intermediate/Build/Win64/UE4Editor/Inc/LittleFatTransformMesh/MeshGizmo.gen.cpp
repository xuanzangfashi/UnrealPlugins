// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/LittleFatTransformMeshPrivatePCH.h"
#include "Public/MeshGizmo.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshGizmo() {}
// Cross Module References
	LITTLEFATTRANSFORMMESH_API UClass* Z_Construct_UClass_AMeshGizmo_NoRegister();
	LITTLEFATTRANSFORMMESH_API UClass* Z_Construct_UClass_AMeshGizmo();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_LittleFatTransformMesh();
// End Cross Module References
	void AMeshGizmo::StaticRegisterNativesAMeshGizmo()
	{
	}
	UClass* Z_Construct_UClass_AMeshGizmo_NoRegister()
	{
		return AMeshGizmo::StaticClass();
	}
	UClass* Z_Construct_UClass_AMeshGizmo()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_LittleFatTransformMesh();
			OuterClass = AMeshGizmo::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;


				static TCppClassTypeInfo<TCppClassTypeTraits<AMeshGizmo> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("MeshGizmo.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/MeshGizmo.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnDestoryDelegate, FString, Content, int32, StatusCode);"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMeshGizmo, 3244022230);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMeshGizmo(Z_Construct_UClass_AMeshGizmo, &AMeshGizmo::StaticClass, TEXT("/Script/LittleFatTransformMesh"), TEXT("AMeshGizmo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMeshGizmo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
