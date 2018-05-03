// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class UObject;
struct FVector;
class UCameraComponent;
#ifdef VRPLUGIN_VRActor_generated_h
#error "VRActor.generated.h already included, missing '#pragma once' in VRActor.h"
#endif
#define VRPLUGIN_VRActor_generated_h

#define Racing_Plugins_VRPlugin_Source_VRPlugin_Public_VRActor_h_12_RPC_WRAPPERS \
	virtual void OnTriggerUpL_Implementation(); \
	virtual void OnTriggerUpR_Implementation(); \
	virtual void OnTriggerDownL_Implementation(UPrimitiveComponent* Hand, FName HitBoneName, UObject* HitObject, FVector SelectPosition); \
	virtual void OnTriggerDownR_Implementation(UPrimitiveComponent* Hand, FName HitBoneName, UObject* HitObject, UCameraComponent* Camera); \
	virtual void OnOverlapL_Implementation(UPrimitiveComponent* Hand, FName HitBoneName); \
	virtual void OnOverlapR_Implementation(UPrimitiveComponent* Hand, FName HitBoneName); \
	virtual void OnHoverL_Implementation(UObject* HoverObject, FVector SelectPositon); \
	virtual void OnHoverR_Implementation(UObject* HoverObject); \
 \
	DECLARE_FUNCTION(execOnTriggerUpL) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnTriggerUpL_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnTriggerUpR) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnTriggerUpR_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnTriggerDownL) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Hand); \
		P_GET_PROPERTY(UNameProperty,Z_Param_HitBoneName); \
		P_GET_OBJECT(UObject,Z_Param_HitObject); \
		P_GET_STRUCT(FVector,Z_Param_SelectPosition); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnTriggerDownL_Implementation(Z_Param_Hand,Z_Param_HitBoneName,Z_Param_HitObject,Z_Param_SelectPosition); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnTriggerDownR) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Hand); \
		P_GET_PROPERTY(UNameProperty,Z_Param_HitBoneName); \
		P_GET_OBJECT(UObject,Z_Param_HitObject); \
		P_GET_OBJECT(UCameraComponent,Z_Param_Camera); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnTriggerDownR_Implementation(Z_Param_Hand,Z_Param_HitBoneName,Z_Param_HitObject,Z_Param_Camera); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapL) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Hand); \
		P_GET_PROPERTY(UNameProperty,Z_Param_HitBoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapL_Implementation(Z_Param_Hand,Z_Param_HitBoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapR) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Hand); \
		P_GET_PROPERTY(UNameProperty,Z_Param_HitBoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapR_Implementation(Z_Param_Hand,Z_Param_HitBoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnHoverL) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_HoverObject); \
		P_GET_STRUCT(FVector,Z_Param_SelectPositon); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHoverL_Implementation(Z_Param_HoverObject,Z_Param_SelectPositon); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnHoverR) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_HoverObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHoverR_Implementation(Z_Param_HoverObject); \
		P_NATIVE_END; \
	}


#define Racing_Plugins_VRPlugin_Source_VRPlugin_Public_VRActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnTriggerUpL) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnTriggerUpL_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnTriggerUpR) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnTriggerUpR_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnTriggerDownL) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Hand); \
		P_GET_PROPERTY(UNameProperty,Z_Param_HitBoneName); \
		P_GET_OBJECT(UObject,Z_Param_HitObject); \
		P_GET_STRUCT(FVector,Z_Param_SelectPosition); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnTriggerDownL_Implementation(Z_Param_Hand,Z_Param_HitBoneName,Z_Param_HitObject,Z_Param_SelectPosition); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnTriggerDownR) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Hand); \
		P_GET_PROPERTY(UNameProperty,Z_Param_HitBoneName); \
		P_GET_OBJECT(UObject,Z_Param_HitObject); \
		P_GET_OBJECT(UCameraComponent,Z_Param_Camera); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnTriggerDownR_Implementation(Z_Param_Hand,Z_Param_HitBoneName,Z_Param_HitObject,Z_Param_Camera); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapL) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Hand); \
		P_GET_PROPERTY(UNameProperty,Z_Param_HitBoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapL_Implementation(Z_Param_Hand,Z_Param_HitBoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapR) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Hand); \
		P_GET_PROPERTY(UNameProperty,Z_Param_HitBoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapR_Implementation(Z_Param_Hand,Z_Param_HitBoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnHoverL) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_HoverObject); \
		P_GET_STRUCT(FVector,Z_Param_SelectPositon); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHoverL_Implementation(Z_Param_HoverObject,Z_Param_SelectPositon); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnHoverR) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_HoverObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHoverR_Implementation(Z_Param_HoverObject); \
		P_NATIVE_END; \
	}


#define Racing_Plugins_VRPlugin_Source_VRPlugin_Public_VRActor_h_12_EVENT_PARMS \
	struct VRActor_eventOnHoverL_Parms \
	{ \
		UObject* HoverObject; \
		FVector SelectPositon; \
	}; \
	struct VRActor_eventOnHoverR_Parms \
	{ \
		UObject* HoverObject; \
	}; \
	struct VRActor_eventOnOverlapL_Parms \
	{ \
		UPrimitiveComponent* Hand; \
		FName HitBoneName; \
	}; \
	struct VRActor_eventOnOverlapR_Parms \
	{ \
		UPrimitiveComponent* Hand; \
		FName HitBoneName; \
	}; \
	struct VRActor_eventOnTriggerDownL_Parms \
	{ \
		UPrimitiveComponent* Hand; \
		FName HitBoneName; \
		UObject* HitObject; \
		FVector SelectPosition; \
	}; \
	struct VRActor_eventOnTriggerDownR_Parms \
	{ \
		UPrimitiveComponent* Hand; \
		FName HitBoneName; \
		UObject* HitObject; \
		UCameraComponent* Camera; \
	};


#define Racing_Plugins_VRPlugin_Source_VRPlugin_Public_VRActor_h_12_CALLBACK_WRAPPERS
#define Racing_Plugins_VRPlugin_Source_VRPlugin_Public_VRActor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVRActor(); \
	friend VRPLUGIN_API class UClass* Z_Construct_UClass_AVRActor(); \
public: \
	DECLARE_CLASS(AVRActor, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/VRPlugin"), NO_API) \
	DECLARE_SERIALIZER(AVRActor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<AVRActor*>(this); }


#define Racing_Plugins_VRPlugin_Source_VRPlugin_Public_VRActor_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAVRActor(); \
	friend VRPLUGIN_API class UClass* Z_Construct_UClass_AVRActor(); \
public: \
	DECLARE_CLASS(AVRActor, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/VRPlugin"), NO_API) \
	DECLARE_SERIALIZER(AVRActor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<AVRActor*>(this); }


#define Racing_Plugins_VRPlugin_Source_VRPlugin_Public_VRActor_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVRActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVRActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVRActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVRActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVRActor(AVRActor&&); \
	NO_API AVRActor(const AVRActor&); \
public:


#define Racing_Plugins_VRPlugin_Source_VRPlugin_Public_VRActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVRActor(AVRActor&&); \
	NO_API AVRActor(const AVRActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVRActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVRActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AVRActor)


#define Racing_Plugins_VRPlugin_Source_VRPlugin_Public_VRActor_h_12_PRIVATE_PROPERTY_OFFSET
#define Racing_Plugins_VRPlugin_Source_VRPlugin_Public_VRActor_h_9_PROLOG \
	Racing_Plugins_VRPlugin_Source_VRPlugin_Public_VRActor_h_12_EVENT_PARMS


#define Racing_Plugins_VRPlugin_Source_VRPlugin_Public_VRActor_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Racing_Plugins_VRPlugin_Source_VRPlugin_Public_VRActor_h_12_PRIVATE_PROPERTY_OFFSET \
	Racing_Plugins_VRPlugin_Source_VRPlugin_Public_VRActor_h_12_RPC_WRAPPERS \
	Racing_Plugins_VRPlugin_Source_VRPlugin_Public_VRActor_h_12_CALLBACK_WRAPPERS \
	Racing_Plugins_VRPlugin_Source_VRPlugin_Public_VRActor_h_12_INCLASS \
	Racing_Plugins_VRPlugin_Source_VRPlugin_Public_VRActor_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Racing_Plugins_VRPlugin_Source_VRPlugin_Public_VRActor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Racing_Plugins_VRPlugin_Source_VRPlugin_Public_VRActor_h_12_PRIVATE_PROPERTY_OFFSET \
	Racing_Plugins_VRPlugin_Source_VRPlugin_Public_VRActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Racing_Plugins_VRPlugin_Source_VRPlugin_Public_VRActor_h_12_CALLBACK_WRAPPERS \
	Racing_Plugins_VRPlugin_Source_VRPlugin_Public_VRActor_h_12_INCLASS_NO_PURE_DECLS \
	Racing_Plugins_VRPlugin_Source_VRPlugin_Public_VRActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Racing_Plugins_VRPlugin_Source_VRPlugin_Public_VRActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
