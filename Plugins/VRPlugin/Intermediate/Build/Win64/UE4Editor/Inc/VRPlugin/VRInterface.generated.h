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
#ifdef VRPLUGIN_VRInterface_generated_h
#error "VRInterface.generated.h already included, missing '#pragma once' in VRInterface.h"
#endif
#define VRPLUGIN_VRInterface_generated_h

#define Racing_Plugins_VRPlugin_Source_VRPlugin_Public_VRInterface_h_11_RPC_WRAPPERS \
	virtual void OnTriggerUpL_Implementation()=0; \
	virtual void OnTriggerUpR_Implementation()=0; \
	virtual void OnTriggerDownL_Implementation(UPrimitiveComponent* Hand, FName HitBoneName, UObject* HitObject, FVector SelectPosition)=0; \
	virtual void OnTriggerDownR_Implementation(UPrimitiveComponent* Hand, FName HitBoneName, UObject* HitObject, UCameraComponent* Camera)=0; \
	virtual void OnOverlapL_Implementation(UPrimitiveComponent* Hand, FName HitBoneName)=0; \
	virtual void OnOverlapR_Implementation(UPrimitiveComponent* Hand, FName HitBoneName)=0; \
	virtual void OnHoverL_Implementation(UObject* HoverObject, FVector SelectPositon)=0; \
	virtual void OnHoverR_Implementation(UObject* HoverObject)=0; \
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


#define Racing_Plugins_VRPlugin_Source_VRPlugin_Public_VRInterface_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnTriggerUpL_Implementation()=0; \
	virtual void OnTriggerUpR_Implementation()=0; \
	virtual void OnTriggerDownL_Implementation(UPrimitiveComponent* Hand, FName HitBoneName, UObject* HitObject, FVector SelectPosition)=0; \
	virtual void OnTriggerDownR_Implementation(UPrimitiveComponent* Hand, FName HitBoneName, UObject* HitObject, UCameraComponent* Camera)=0; \
	virtual void OnOverlapL_Implementation(UPrimitiveComponent* Hand, FName HitBoneName)=0; \
	virtual void OnOverlapR_Implementation(UPrimitiveComponent* Hand, FName HitBoneName)=0; \
	virtual void OnHoverL_Implementation(UObject* HoverObject, FVector SelectPositon)=0; \
	virtual void OnHoverR_Implementation(UObject* HoverObject)=0; \
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


#define Racing_Plugins_VRPlugin_Source_VRPlugin_Public_VRInterface_h_11_EVENT_PARMS \
	struct VRInterface_eventOnHoverL_Parms \
	{ \
		UObject* HoverObject; \
		FVector SelectPositon; \
	}; \
	struct VRInterface_eventOnHoverR_Parms \
	{ \
		UObject* HoverObject; \
	}; \
	struct VRInterface_eventOnOverlapL_Parms \
	{ \
		UPrimitiveComponent* Hand; \
		FName HitBoneName; \
	}; \
	struct VRInterface_eventOnOverlapR_Parms \
	{ \
		UPrimitiveComponent* Hand; \
		FName HitBoneName; \
	}; \
	struct VRInterface_eventOnTriggerDownL_Parms \
	{ \
		UPrimitiveComponent* Hand; \
		FName HitBoneName; \
		UObject* HitObject; \
		FVector SelectPosition; \
	}; \
	struct VRInterface_eventOnTriggerDownR_Parms \
	{ \
		UPrimitiveComponent* Hand; \
		FName HitBoneName; \
		UObject* HitObject; \
		UCameraComponent* Camera; \
	};


#define Racing_Plugins_VRPlugin_Source_VRPlugin_Public_VRInterface_h_11_CALLBACK_WRAPPERS
#define Racing_Plugins_VRPlugin_Source_VRPlugin_Public_VRInterface_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	VRPLUGIN_API UVRInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVRInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(VRPLUGIN_API, UVRInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	VRPLUGIN_API UVRInterface(UVRInterface&&); \
	VRPLUGIN_API UVRInterface(const UVRInterface&); \
public:


#define Racing_Plugins_VRPlugin_Source_VRPlugin_Public_VRInterface_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	VRPLUGIN_API UVRInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	VRPLUGIN_API UVRInterface(UVRInterface&&); \
	VRPLUGIN_API UVRInterface(const UVRInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(VRPLUGIN_API, UVRInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVRInterface)


#define Racing_Plugins_VRPlugin_Source_VRPlugin_Public_VRInterface_h_11_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUVRInterface(); \
	friend VRPLUGIN_API class UClass* Z_Construct_UClass_UVRInterface(); \
public: \
	DECLARE_CLASS(UVRInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), 0, TEXT("/Script/VRPlugin"), VRPLUGIN_API) \
	DECLARE_SERIALIZER(UVRInterface) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Racing_Plugins_VRPlugin_Source_VRPlugin_Public_VRInterface_h_11_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Racing_Plugins_VRPlugin_Source_VRPlugin_Public_VRInterface_h_11_GENERATED_UINTERFACE_BODY() \
	Racing_Plugins_VRPlugin_Source_VRPlugin_Public_VRInterface_h_11_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Racing_Plugins_VRPlugin_Source_VRPlugin_Public_VRInterface_h_11_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Racing_Plugins_VRPlugin_Source_VRPlugin_Public_VRInterface_h_11_GENERATED_UINTERFACE_BODY() \
	Racing_Plugins_VRPlugin_Source_VRPlugin_Public_VRInterface_h_11_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Racing_Plugins_VRPlugin_Source_VRPlugin_Public_VRInterface_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IVRInterface() {} \
public: \
	typedef UVRInterface UClassType; \
	typedef IVRInterface ThisClass; \
	static void Execute_OnHoverL(UObject* O, UObject* HoverObject, FVector SelectPositon); \
	static void Execute_OnHoverR(UObject* O, UObject* HoverObject); \
	static void Execute_OnOverlapL(UObject* O, UPrimitiveComponent* Hand, FName HitBoneName); \
	static void Execute_OnOverlapR(UObject* O, UPrimitiveComponent* Hand, FName HitBoneName); \
	static void Execute_OnTriggerDownL(UObject* O, UPrimitiveComponent* Hand, FName HitBoneName, UObject* HitObject, FVector SelectPosition); \
	static void Execute_OnTriggerDownR(UObject* O, UPrimitiveComponent* Hand, FName HitBoneName, UObject* HitObject, UCameraComponent* Camera); \
	static void Execute_OnTriggerUpL(UObject* O); \
	static void Execute_OnTriggerUpR(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Racing_Plugins_VRPlugin_Source_VRPlugin_Public_VRInterface_h_11_INCLASS_IINTERFACE \
protected: \
	virtual ~IVRInterface() {} \
public: \
	typedef UVRInterface UClassType; \
	typedef IVRInterface ThisClass; \
	static void Execute_OnHoverL(UObject* O, UObject* HoverObject, FVector SelectPositon); \
	static void Execute_OnHoverR(UObject* O, UObject* HoverObject); \
	static void Execute_OnOverlapL(UObject* O, UPrimitiveComponent* Hand, FName HitBoneName); \
	static void Execute_OnOverlapR(UObject* O, UPrimitiveComponent* Hand, FName HitBoneName); \
	static void Execute_OnTriggerDownL(UObject* O, UPrimitiveComponent* Hand, FName HitBoneName, UObject* HitObject, FVector SelectPosition); \
	static void Execute_OnTriggerDownR(UObject* O, UPrimitiveComponent* Hand, FName HitBoneName, UObject* HitObject, UCameraComponent* Camera); \
	static void Execute_OnTriggerUpL(UObject* O); \
	static void Execute_OnTriggerUpR(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Racing_Plugins_VRPlugin_Source_VRPlugin_Public_VRInterface_h_8_PROLOG \
	Racing_Plugins_VRPlugin_Source_VRPlugin_Public_VRInterface_h_11_EVENT_PARMS


#define Racing_Plugins_VRPlugin_Source_VRPlugin_Public_VRInterface_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Racing_Plugins_VRPlugin_Source_VRPlugin_Public_VRInterface_h_11_RPC_WRAPPERS \
	Racing_Plugins_VRPlugin_Source_VRPlugin_Public_VRInterface_h_11_CALLBACK_WRAPPERS \
	Racing_Plugins_VRPlugin_Source_VRPlugin_Public_VRInterface_h_11_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Racing_Plugins_VRPlugin_Source_VRPlugin_Public_VRInterface_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Racing_Plugins_VRPlugin_Source_VRPlugin_Public_VRInterface_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	Racing_Plugins_VRPlugin_Source_VRPlugin_Public_VRInterface_h_11_CALLBACK_WRAPPERS \
	Racing_Plugins_VRPlugin_Source_VRPlugin_Public_VRInterface_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Racing_Plugins_VRPlugin_Source_VRPlugin_Public_VRInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
