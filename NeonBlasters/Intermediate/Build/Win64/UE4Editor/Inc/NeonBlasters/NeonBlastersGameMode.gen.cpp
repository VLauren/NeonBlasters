// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "NeonBlastersGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNeonBlastersGameMode() {}
// Cross Module References
	NEONBLASTERS_API UClass* Z_Construct_UClass_ANeonBlastersGameMode_NoRegister();
	NEONBLASTERS_API UClass* Z_Construct_UClass_ANeonBlastersGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_NeonBlasters();
// End Cross Module References
	void ANeonBlastersGameMode::StaticRegisterNativesANeonBlastersGameMode()
	{
	}
	UClass* Z_Construct_UClass_ANeonBlastersGameMode_NoRegister()
	{
		return ANeonBlastersGameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_ANeonBlastersGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_NeonBlasters,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "NeonBlastersGameMode.h" },
				{ "ModuleRelativePath", "NeonBlastersGameMode.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ANeonBlastersGameMode>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ANeonBlastersGameMode::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880288u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANeonBlastersGameMode, 1219310898);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANeonBlastersGameMode(Z_Construct_UClass_ANeonBlastersGameMode, &ANeonBlastersGameMode::StaticClass, TEXT("/Script/NeonBlasters"), TEXT("ANeonBlastersGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANeonBlastersGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
