// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/COMDLLAPIFunctionLibrary.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCOMDLLAPIFunctionLibrary() {}
// Cross Module References
	COMDLLAPI_API UFunction* Z_Construct_UFunction_UCOMDLLAPIFunctionLibrary_ForceInit();
	COMDLLAPI_API UClass* Z_Construct_UClass_UCOMDLLAPIFunctionLibrary();
	COMDLLAPI_API UFunction* Z_Construct_UFunction_UCOMDLLAPIFunctionLibrary_GetAllCOMName();
	COMDLLAPI_API UFunction* Z_Construct_UFunction_UCOMDLLAPIFunctionLibrary_GetAllHardwareData();
	COMDLLAPI_API UFunction* Z_Construct_UFunction_UCOMDLLAPIFunctionLibrary_GetHardwareDataByIndex();
	COMDLLAPI_API UFunction* Z_Construct_UFunction_UCOMDLLAPIFunctionLibrary_GetRotatorFromString();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COMDLLAPI_API UFunction* Z_Construct_UFunction_UCOMDLLAPIFunctionLibrary_InitHardware();
	COMDLLAPI_API UFunction* Z_Construct_UFunction_UCOMDLLAPIFunctionLibrary_ParerDataStr();
	COMDLLAPI_API UFunction* Z_Construct_UFunction_UCOMDLLAPIFunctionLibrary_ReleaseHardware();
	COMDLLAPI_API UClass* Z_Construct_UClass_UCOMDLLAPIFunctionLibrary_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_COMDLLAPI();
// End Cross Module References
	void UCOMDLLAPIFunctionLibrary::StaticRegisterNativesUCOMDLLAPIFunctionLibrary()
	{
		UClass* Class = UCOMDLLAPIFunctionLibrary::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "ForceInit", (Native)&UCOMDLLAPIFunctionLibrary::execForceInit },
			{ "GetAllCOMName", (Native)&UCOMDLLAPIFunctionLibrary::execGetAllCOMName },
			{ "GetAllHardwareData", (Native)&UCOMDLLAPIFunctionLibrary::execGetAllHardwareData },
			{ "GetHardwareDataByIndex", (Native)&UCOMDLLAPIFunctionLibrary::execGetHardwareDataByIndex },
			{ "GetRotatorFromString", (Native)&UCOMDLLAPIFunctionLibrary::execGetRotatorFromString },
			{ "InitHardware", (Native)&UCOMDLLAPIFunctionLibrary::execInitHardware },
			{ "ParerDataStr", (Native)&UCOMDLLAPIFunctionLibrary::execParerDataStr },
			{ "ReleaseHardware", (Native)&UCOMDLLAPIFunctionLibrary::execReleaseHardware },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_UCOMDLLAPIFunctionLibrary_ForceInit()
	{
		struct COMDLLAPIFunctionLibrary_eventForceInit_Parms
		{
			FString WrongPortName;
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UCOMDLLAPIFunctionLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ForceInit"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04422401, 65535, sizeof(COMDLLAPIFunctionLibrary_eventForceInit_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, COMDLLAPIFunctionLibrary_eventForceInit_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, COMDLLAPIFunctionLibrary_eventForceInit_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, COMDLLAPIFunctionLibrary_eventForceInit_Parms), sizeof(bool), true);
			UProperty* NewProp_WrongPortName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("WrongPortName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(WrongPortName, COMDLLAPIFunctionLibrary_eventForceInit_Parms), 0x0010000000000180);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("UCOMDLLAPIFunctionLibrary"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/COMDLLAPIFunctionLibrary.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCOMDLLAPIFunctionLibrary_GetAllCOMName()
	{
		UObject* Outer = Z_Construct_UClass_UCOMDLLAPIFunctionLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetAllCOMName"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("UCOMDLLAPIFunctionLibrary"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/COMDLLAPIFunctionLibrary.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCOMDLLAPIFunctionLibrary_GetAllHardwareData()
	{
		struct COMDLLAPIFunctionLibrary_eventGetAllHardwareData_Parms
		{
			TArray<FString> Out;
		};
		UObject* Outer = Z_Construct_UClass_UCOMDLLAPIFunctionLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetAllHardwareData"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04422401, 65535, sizeof(COMDLLAPIFunctionLibrary_eventGetAllHardwareData_Parms));
			UProperty* NewProp_Out = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Out"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Out, COMDLLAPIFunctionLibrary_eventGetAllHardwareData_Parms), 0x0010000000000180);
			UProperty* NewProp_Out_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Out, TEXT("Out"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("UCOMDLLAPIFunctionLibrary"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/COMDLLAPIFunctionLibrary.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCOMDLLAPIFunctionLibrary_GetHardwareDataByIndex()
	{
		struct COMDLLAPIFunctionLibrary_eventGetHardwareDataByIndex_Parms
		{
			int32 index;
			FString ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UCOMDLLAPIFunctionLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetHardwareDataByIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(COMDLLAPIFunctionLibrary_eventGetHardwareDataByIndex_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(ReturnValue, COMDLLAPIFunctionLibrary_eventGetHardwareDataByIndex_Parms), 0x0010000000000580);
			UProperty* NewProp_index = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("index"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(CPP_PROPERTY_BASE(index, COMDLLAPIFunctionLibrary_eventGetHardwareDataByIndex_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("UCOMDLLAPIFunctionLibrary"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/COMDLLAPIFunctionLibrary.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCOMDLLAPIFunctionLibrary_GetRotatorFromString()
	{
		struct COMDLLAPIFunctionLibrary_eventGetRotatorFromString_Parms
		{
			FString SRC;
			FRotator Out;
		};
		UObject* Outer = Z_Construct_UClass_UCOMDLLAPIFunctionLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetRotatorFromString"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04C22401, 65535, sizeof(COMDLLAPIFunctionLibrary_eventGetRotatorFromString_Parms));
			UProperty* NewProp_Out = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Out"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Out, COMDLLAPIFunctionLibrary_eventGetRotatorFromString_Parms), 0x0010000000000180, Z_Construct_UScriptStruct_FRotator());
			UProperty* NewProp_SRC = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SRC"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(SRC, COMDLLAPIFunctionLibrary_eventGetRotatorFromString_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("UCOMDLLAPIFunctionLibrary"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/COMDLLAPIFunctionLibrary.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCOMDLLAPIFunctionLibrary_InitHardware()
	{
		struct COMDLLAPIFunctionLibrary_eventInitHardware_Parms
		{
			FString COMName;
			int32 BaudRate;
			int32 bytesSize;
			int32 ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UCOMDLLAPIFunctionLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("InitHardware"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(COMDLLAPIFunctionLibrary_eventInitHardware_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(CPP_PROPERTY_BASE(ReturnValue, COMDLLAPIFunctionLibrary_eventInitHardware_Parms), 0x0010000000000580);
			UProperty* NewProp_bytesSize = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bytesSize"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(CPP_PROPERTY_BASE(bytesSize, COMDLLAPIFunctionLibrary_eventInitHardware_Parms), 0x0010000000000080);
			UProperty* NewProp_BaudRate = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("BaudRate"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(CPP_PROPERTY_BASE(BaudRate, COMDLLAPIFunctionLibrary_eventInitHardware_Parms), 0x0010000000000080);
			UProperty* NewProp_COMName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("COMName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(COMName, COMDLLAPIFunctionLibrary_eventInitHardware_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("UCOMDLLAPIFunctionLibrary"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/COMDLLAPIFunctionLibrary.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCOMDLLAPIFunctionLibrary_ParerDataStr()
	{
		struct COMDLLAPIFunctionLibrary_eventParerDataStr_Parms
		{
			FString source;
			TArray<FString> ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UCOMDLLAPIFunctionLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ParerDataStr"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(COMDLLAPIFunctionLibrary_eventParerDataStr_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(ReturnValue, COMDLLAPIFunctionLibrary_eventParerDataStr_Parms), 0x0010000000000580);
			UProperty* NewProp_ReturnValue_Inner = new(EC_InternalUseOnlyConstructor, NewProp_ReturnValue, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_source = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("source"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(source, COMDLLAPIFunctionLibrary_eventParerDataStr_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("UCOMDLLAPIFunctionLibrary"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/COMDLLAPIFunctionLibrary.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UCOMDLLAPIFunctionLibrary_ReleaseHardware()
	{
		UObject* Outer = Z_Construct_UClass_UCOMDLLAPIFunctionLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ReleaseHardware"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("UCOMDLLAPIFunctionLibrary"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/COMDLLAPIFunctionLibrary.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCOMDLLAPIFunctionLibrary_NoRegister()
	{
		return UCOMDLLAPIFunctionLibrary::StaticClass();
	}
	UClass* Z_Construct_UClass_UCOMDLLAPIFunctionLibrary()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UBlueprintFunctionLibrary();
			Z_Construct_UPackage__Script_COMDLLAPI();
			OuterClass = UCOMDLLAPIFunctionLibrary::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20100080u;

				OuterClass->LinkChild(Z_Construct_UFunction_UCOMDLLAPIFunctionLibrary_ForceInit());
				OuterClass->LinkChild(Z_Construct_UFunction_UCOMDLLAPIFunctionLibrary_GetAllCOMName());
				OuterClass->LinkChild(Z_Construct_UFunction_UCOMDLLAPIFunctionLibrary_GetAllHardwareData());
				OuterClass->LinkChild(Z_Construct_UFunction_UCOMDLLAPIFunctionLibrary_GetHardwareDataByIndex());
				OuterClass->LinkChild(Z_Construct_UFunction_UCOMDLLAPIFunctionLibrary_GetRotatorFromString());
				OuterClass->LinkChild(Z_Construct_UFunction_UCOMDLLAPIFunctionLibrary_InitHardware());
				OuterClass->LinkChild(Z_Construct_UFunction_UCOMDLLAPIFunctionLibrary_ParerDataStr());
				OuterClass->LinkChild(Z_Construct_UFunction_UCOMDLLAPIFunctionLibrary_ReleaseHardware());

				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UCOMDLLAPIFunctionLibrary_ForceInit(), "ForceInit"); // 1825090869
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UCOMDLLAPIFunctionLibrary_GetAllCOMName(), "GetAllCOMName"); // 3989612673
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UCOMDLLAPIFunctionLibrary_GetAllHardwareData(), "GetAllHardwareData"); // 2273946395
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UCOMDLLAPIFunctionLibrary_GetHardwareDataByIndex(), "GetHardwareDataByIndex"); // 2325555441
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UCOMDLLAPIFunctionLibrary_GetRotatorFromString(), "GetRotatorFromString"); // 3322816994
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UCOMDLLAPIFunctionLibrary_InitHardware(), "InitHardware"); // 383152546
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UCOMDLLAPIFunctionLibrary_ParerDataStr(), "ParerDataStr"); // 1690199632
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UCOMDLLAPIFunctionLibrary_ReleaseHardware(), "ReleaseHardware"); // 4059245781
				static TCppClassTypeInfo<TCppClassTypeTraits<UCOMDLLAPIFunctionLibrary> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("COMDLLAPIFunctionLibrary.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/COMDLLAPIFunctionLibrary.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCOMDLLAPIFunctionLibrary, 1453294242);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCOMDLLAPIFunctionLibrary(Z_Construct_UClass_UCOMDLLAPIFunctionLibrary, &UCOMDLLAPIFunctionLibrary::StaticClass, TEXT("/Script/COMDLLAPI"), TEXT("UCOMDLLAPIFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCOMDLLAPIFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
