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
struct FVector;
struct FHitResult;
#ifdef SIDEPROJECT_SwarmEnemy_generated_h
#error "SwarmEnemy.generated.h already included, missing '#pragma once' in SwarmEnemy.h"
#endif
#define SIDEPROJECT_SwarmEnemy_generated_h

#define SideProject_Source_SideProject_SwarmEnemy_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define SideProject_Source_SideProject_SwarmEnemy_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define SideProject_Source_SideProject_SwarmEnemy_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASwarmEnemy(); \
	friend struct Z_Construct_UClass_ASwarmEnemy_Statics; \
public: \
	DECLARE_CLASS(ASwarmEnemy, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SideProject"), NO_API) \
	DECLARE_SERIALIZER(ASwarmEnemy)


#define SideProject_Source_SideProject_SwarmEnemy_h_12_INCLASS \
private: \
	static void StaticRegisterNativesASwarmEnemy(); \
	friend struct Z_Construct_UClass_ASwarmEnemy_Statics; \
public: \
	DECLARE_CLASS(ASwarmEnemy, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SideProject"), NO_API) \
	DECLARE_SERIALIZER(ASwarmEnemy)


#define SideProject_Source_SideProject_SwarmEnemy_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASwarmEnemy(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASwarmEnemy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASwarmEnemy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASwarmEnemy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASwarmEnemy(ASwarmEnemy&&); \
	NO_API ASwarmEnemy(const ASwarmEnemy&); \
public:


#define SideProject_Source_SideProject_SwarmEnemy_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASwarmEnemy(ASwarmEnemy&&); \
	NO_API ASwarmEnemy(const ASwarmEnemy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASwarmEnemy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASwarmEnemy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASwarmEnemy)


#define SideProject_Source_SideProject_SwarmEnemy_h_12_PRIVATE_PROPERTY_OFFSET
#define SideProject_Source_SideProject_SwarmEnemy_h_9_PROLOG
#define SideProject_Source_SideProject_SwarmEnemy_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SideProject_Source_SideProject_SwarmEnemy_h_12_PRIVATE_PROPERTY_OFFSET \
	SideProject_Source_SideProject_SwarmEnemy_h_12_RPC_WRAPPERS \
	SideProject_Source_SideProject_SwarmEnemy_h_12_INCLASS \
	SideProject_Source_SideProject_SwarmEnemy_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SideProject_Source_SideProject_SwarmEnemy_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SideProject_Source_SideProject_SwarmEnemy_h_12_PRIVATE_PROPERTY_OFFSET \
	SideProject_Source_SideProject_SwarmEnemy_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	SideProject_Source_SideProject_SwarmEnemy_h_12_INCLASS_NO_PURE_DECLS \
	SideProject_Source_SideProject_SwarmEnemy_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SideProject_Source_SideProject_SwarmEnemy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
