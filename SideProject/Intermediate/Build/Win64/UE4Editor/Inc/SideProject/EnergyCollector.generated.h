// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef SIDEPROJECT_EnergyCollector_generated_h
#error "EnergyCollector.generated.h already included, missing '#pragma once' in EnergyCollector.h"
#endif
#define SIDEPROJECT_EnergyCollector_generated_h

#define SideProject_Source_SideProject_EnergyCollector_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapTop) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapTop(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define SideProject_Source_SideProject_EnergyCollector_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapTop) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapTop(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define SideProject_Source_SideProject_EnergyCollector_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnergyCollector(); \
	friend struct Z_Construct_UClass_AEnergyCollector_Statics; \
public: \
	DECLARE_CLASS(AEnergyCollector, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SideProject"), NO_API) \
	DECLARE_SERIALIZER(AEnergyCollector)


#define SideProject_Source_SideProject_EnergyCollector_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAEnergyCollector(); \
	friend struct Z_Construct_UClass_AEnergyCollector_Statics; \
public: \
	DECLARE_CLASS(AEnergyCollector, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SideProject"), NO_API) \
	DECLARE_SERIALIZER(AEnergyCollector)


#define SideProject_Source_SideProject_EnergyCollector_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnergyCollector(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnergyCollector) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnergyCollector); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnergyCollector); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnergyCollector(AEnergyCollector&&); \
	NO_API AEnergyCollector(const AEnergyCollector&); \
public:


#define SideProject_Source_SideProject_EnergyCollector_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnergyCollector(AEnergyCollector&&); \
	NO_API AEnergyCollector(const AEnergyCollector&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnergyCollector); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnergyCollector); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnergyCollector)


#define SideProject_Source_SideProject_EnergyCollector_h_12_PRIVATE_PROPERTY_OFFSET
#define SideProject_Source_SideProject_EnergyCollector_h_9_PROLOG
#define SideProject_Source_SideProject_EnergyCollector_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SideProject_Source_SideProject_EnergyCollector_h_12_PRIVATE_PROPERTY_OFFSET \
	SideProject_Source_SideProject_EnergyCollector_h_12_RPC_WRAPPERS \
	SideProject_Source_SideProject_EnergyCollector_h_12_INCLASS \
	SideProject_Source_SideProject_EnergyCollector_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SideProject_Source_SideProject_EnergyCollector_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SideProject_Source_SideProject_EnergyCollector_h_12_PRIVATE_PROPERTY_OFFSET \
	SideProject_Source_SideProject_EnergyCollector_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	SideProject_Source_SideProject_EnergyCollector_h_12_INCLASS_NO_PURE_DECLS \
	SideProject_Source_SideProject_EnergyCollector_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SideProject_Source_SideProject_EnergyCollector_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
