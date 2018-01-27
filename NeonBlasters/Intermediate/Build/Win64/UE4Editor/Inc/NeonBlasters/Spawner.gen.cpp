// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Spawner.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpawner() {}
// Cross Module References
	NEONBLASTERS_API UClass* Z_Construct_UClass_USpawner_NoRegister();
	NEONBLASTERS_API UClass* Z_Construct_UClass_USpawner();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_NeonBlasters();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void USpawner::StaticRegisterNativesUSpawner()
	{
	}
	UClass* Z_Construct_UClass_USpawner_NoRegister()
	{
		return USpawner::StaticClass();
	}
	UClass* Z_Construct_UClass_USpawner()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UActorComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_NeonBlasters,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "ClassGroupNames", "Custom" },
				{ "IncludePath", "Spawner.h" },
				{ "ModuleRelativePath", "Spawner.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_timeBetweenSpawns_MetaData[] = {
				{ "Category", "Spawner" },
				{ "ModuleRelativePath", "Spawner.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_timeBetweenSpawns = { UE4CodeGen_Private::EPropertyClass::Float, "timeBetweenSpawns", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(USpawner, timeBetweenSpawns), METADATA_PARAMS(NewProp_timeBetweenSpawns_MetaData, ARRAY_COUNT(NewProp_timeBetweenSpawns_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToSpawn_MetaData[] = {
				{ "Category", "Spawner" },
				{ "ModuleRelativePath", "Spawner.h" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_ToSpawn = { UE4CodeGen_Private::EPropertyClass::Class, "ToSpawn", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000001, 1, nullptr, STRUCT_OFFSET(USpawner, ToSpawn), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_ToSpawn_MetaData, ARRAY_COUNT(NewProp_ToSpawn_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_timeBetweenSpawns,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ToSpawn,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<USpawner>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&USpawner::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USpawner, 1744237588);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USpawner(Z_Construct_UClass_USpawner, &USpawner::StaticClass, TEXT("/Script/NeonBlasters"), TEXT("USpawner"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpawner);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
