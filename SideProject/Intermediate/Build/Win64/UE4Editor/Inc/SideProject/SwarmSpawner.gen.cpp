// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SideProject/SwarmSpawner.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSwarmSpawner() {}
// Cross Module References
	SIDEPROJECT_API UClass* Z_Construct_UClass_ASwarmSpawner_NoRegister();
	SIDEPROJECT_API UClass* Z_Construct_UClass_ASwarmSpawner();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SideProject();
// End Cross Module References
	void ASwarmSpawner::StaticRegisterNativesASwarmSpawner()
	{
	}
	UClass* Z_Construct_UClass_ASwarmSpawner_NoRegister()
	{
		return ASwarmSpawner::StaticClass();
	}
	struct Z_Construct_UClass_ASwarmSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASwarmSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SideProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASwarmSpawner_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SwarmSpawner.h" },
		{ "ModuleRelativePath", "SwarmSpawner.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASwarmSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASwarmSpawner>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASwarmSpawner_Statics::ClassParams = {
		&ASwarmSpawner::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ASwarmSpawner_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASwarmSpawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASwarmSpawner()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASwarmSpawner_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASwarmSpawner, 3717093439);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASwarmSpawner(Z_Construct_UClass_ASwarmSpawner, &ASwarmSpawner::StaticClass, TEXT("/Script/SideProject"), TEXT("ASwarmSpawner"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASwarmSpawner);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
