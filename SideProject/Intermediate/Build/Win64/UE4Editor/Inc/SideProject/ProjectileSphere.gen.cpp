// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SideProject/ProjectileSphere.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectileSphere() {}
// Cross Module References
	SIDEPROJECT_API UClass* Z_Construct_UClass_AProjectileSphere_NoRegister();
	SIDEPROJECT_API UClass* Z_Construct_UClass_AProjectileSphere();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SideProject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void AProjectileSphere::StaticRegisterNativesAProjectileSphere()
	{
	}
	UClass* Z_Construct_UClass_AProjectileSphere_NoRegister()
	{
		return AProjectileSphere::StaticClass();
	}
	struct Z_Construct_UClass_AProjectileSphere_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_timeFired_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_timeFired;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_dir_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_dir;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isStopped_MetaData[];
#endif
		static void NewProp_isStopped_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isStopped;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isFired_MetaData[];
#endif
		static void NewProp_isFired_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isFired;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProjectileSphere_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SideProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectileSphere_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ProjectileSphere.h" },
		{ "ModuleRelativePath", "ProjectileSphere.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectileSphere_Statics::NewProp_timeFired_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "ProjectileSphere.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AProjectileSphere_Statics::NewProp_timeFired = { UE4CodeGen_Private::EPropertyClass::Float, "timeFired", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AProjectileSphere, timeFired), METADATA_PARAMS(Z_Construct_UClass_AProjectileSphere_Statics::NewProp_timeFired_MetaData, ARRAY_COUNT(Z_Construct_UClass_AProjectileSphere_Statics::NewProp_timeFired_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectileSphere_Statics::NewProp_dir_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "ProjectileSphere.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AProjectileSphere_Statics::NewProp_dir = { UE4CodeGen_Private::EPropertyClass::Struct, "dir", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AProjectileSphere, dir), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AProjectileSphere_Statics::NewProp_dir_MetaData, ARRAY_COUNT(Z_Construct_UClass_AProjectileSphere_Statics::NewProp_dir_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectileSphere_Statics::NewProp_isStopped_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "ProjectileSphere.h" },
	};
#endif
	void Z_Construct_UClass_AProjectileSphere_Statics::NewProp_isStopped_SetBit(void* Obj)
	{
		((AProjectileSphere*)Obj)->isStopped = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AProjectileSphere_Statics::NewProp_isStopped = { UE4CodeGen_Private::EPropertyClass::Bool, "isStopped", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AProjectileSphere), &Z_Construct_UClass_AProjectileSphere_Statics::NewProp_isStopped_SetBit, METADATA_PARAMS(Z_Construct_UClass_AProjectileSphere_Statics::NewProp_isStopped_MetaData, ARRAY_COUNT(Z_Construct_UClass_AProjectileSphere_Statics::NewProp_isStopped_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectileSphere_Statics::NewProp_isFired_MetaData[] = {
		{ "Category", "Projectile" },
		{ "ModuleRelativePath", "ProjectileSphere.h" },
	};
#endif
	void Z_Construct_UClass_AProjectileSphere_Statics::NewProp_isFired_SetBit(void* Obj)
	{
		((AProjectileSphere*)Obj)->isFired = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AProjectileSphere_Statics::NewProp_isFired = { UE4CodeGen_Private::EPropertyClass::Bool, "isFired", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AProjectileSphere), &Z_Construct_UClass_AProjectileSphere_Statics::NewProp_isFired_SetBit, METADATA_PARAMS(Z_Construct_UClass_AProjectileSphere_Statics::NewProp_isFired_MetaData, ARRAY_COUNT(Z_Construct_UClass_AProjectileSphere_Statics::NewProp_isFired_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProjectileSphere_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectileSphere_Statics::NewProp_timeFired,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectileSphere_Statics::NewProp_dir,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectileSphere_Statics::NewProp_isStopped,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectileSphere_Statics::NewProp_isFired,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProjectileSphere_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjectileSphere>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AProjectileSphere_Statics::ClassParams = {
		&AProjectileSphere::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_AProjectileSphere_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AProjectileSphere_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AProjectileSphere_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AProjectileSphere_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProjectileSphere()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AProjectileSphere_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProjectileSphere, 3877399978);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProjectileSphere(Z_Construct_UClass_AProjectileSphere, &AProjectileSphere::StaticClass, TEXT("/Script/SideProject"), TEXT("AProjectileSphere"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectileSphere);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
