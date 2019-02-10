// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SIDEPROJECT_MyGameMode_generated_h
#error "MyGameMode.generated.h already included, missing '#pragma once' in MyGameMode.h"
#endif
#define SIDEPROJECT_MyGameMode_generated_h

#define SideProject_Source_SideProject_MyGameMode_h_15_RPC_WRAPPERS
#define SideProject_Source_SideProject_MyGameMode_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define SideProject_Source_SideProject_MyGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyGameMode(); \
	friend struct Z_Construct_UClass_AMyGameMode_Statics; \
public: \
	DECLARE_CLASS(AMyGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/SideProject"), NO_API) \
	DECLARE_SERIALIZER(AMyGameMode)


#define SideProject_Source_SideProject_MyGameMode_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAMyGameMode(); \
	friend struct Z_Construct_UClass_AMyGameMode_Statics; \
public: \
	DECLARE_CLASS(AMyGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/SideProject"), NO_API) \
	DECLARE_SERIALIZER(AMyGameMode)


#define SideProject_Source_SideProject_MyGameMode_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyGameMode(AMyGameMode&&); \
	NO_API AMyGameMode(const AMyGameMode&); \
public:


#define SideProject_Source_SideProject_MyGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyGameMode(AMyGameMode&&); \
	NO_API AMyGameMode(const AMyGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyGameMode)


#define SideProject_Source_SideProject_MyGameMode_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PlayerHUDClass() { return STRUCT_OFFSET(AMyGameMode, PlayerHUDClass); } \
	FORCEINLINE static uint32 __PPO__CurrentWidget() { return STRUCT_OFFSET(AMyGameMode, CurrentWidget); }


#define SideProject_Source_SideProject_MyGameMode_h_12_PROLOG
#define SideProject_Source_SideProject_MyGameMode_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SideProject_Source_SideProject_MyGameMode_h_15_PRIVATE_PROPERTY_OFFSET \
	SideProject_Source_SideProject_MyGameMode_h_15_RPC_WRAPPERS \
	SideProject_Source_SideProject_MyGameMode_h_15_INCLASS \
	SideProject_Source_SideProject_MyGameMode_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SideProject_Source_SideProject_MyGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SideProject_Source_SideProject_MyGameMode_h_15_PRIVATE_PROPERTY_OFFSET \
	SideProject_Source_SideProject_MyGameMode_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	SideProject_Source_SideProject_MyGameMode_h_15_INCLASS_NO_PURE_DECLS \
	SideProject_Source_SideProject_MyGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SideProject_Source_SideProject_MyGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
