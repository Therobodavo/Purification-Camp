// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SIDEPROJECT_MyCharacter_generated_h
#error "MyCharacter.generated.h already included, missing '#pragma once' in MyCharacter.h"
#endif
#define SIDEPROJECT_MyCharacter_generated_h

#define SideProject_Source_SideProject_MyCharacter_h_13_RPC_WRAPPERS
#define SideProject_Source_SideProject_MyCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define SideProject_Source_SideProject_MyCharacter_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyCharacter(); \
	friend struct Z_Construct_UClass_AMyCharacter_Statics; \
public: \
	DECLARE_CLASS(AMyCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SideProject"), NO_API) \
	DECLARE_SERIALIZER(AMyCharacter)


#define SideProject_Source_SideProject_MyCharacter_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAMyCharacter(); \
	friend struct Z_Construct_UClass_AMyCharacter_Statics; \
public: \
	DECLARE_CLASS(AMyCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SideProject"), NO_API) \
	DECLARE_SERIALIZER(AMyCharacter)


#define SideProject_Source_SideProject_MyCharacter_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyCharacter(AMyCharacter&&); \
	NO_API AMyCharacter(const AMyCharacter&); \
public:


#define SideProject_Source_SideProject_MyCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyCharacter(AMyCharacter&&); \
	NO_API AMyCharacter(const AMyCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyCharacter)


#define SideProject_Source_SideProject_MyCharacter_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__proj() { return STRUCT_OFFSET(AMyCharacter, proj); }


#define SideProject_Source_SideProject_MyCharacter_h_10_PROLOG
#define SideProject_Source_SideProject_MyCharacter_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SideProject_Source_SideProject_MyCharacter_h_13_PRIVATE_PROPERTY_OFFSET \
	SideProject_Source_SideProject_MyCharacter_h_13_RPC_WRAPPERS \
	SideProject_Source_SideProject_MyCharacter_h_13_INCLASS \
	SideProject_Source_SideProject_MyCharacter_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SideProject_Source_SideProject_MyCharacter_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SideProject_Source_SideProject_MyCharacter_h_13_PRIVATE_PROPERTY_OFFSET \
	SideProject_Source_SideProject_MyCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	SideProject_Source_SideProject_MyCharacter_h_13_INCLASS_NO_PURE_DECLS \
	SideProject_Source_SideProject_MyCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SideProject_Source_SideProject_MyCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
