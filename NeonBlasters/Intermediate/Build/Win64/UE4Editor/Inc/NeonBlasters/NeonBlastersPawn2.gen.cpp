// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "NeonBlastersPawn2.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNeonBlastersPawn2() {}
// Cross Module References
	NEONBLASTERS_API UClass* Z_Construct_UClass_ANeonBlastersPawn2_NoRegister();
	NEONBLASTERS_API UClass* Z_Construct_UClass_ANeonBlastersPawn2();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_NeonBlasters();
// End Cross Module References
	void ANeonBlastersPawn2::StaticRegisterNativesANeonBlastersPawn2()
	{
	}
	UClass* Z_Construct_UClass_ANeonBlastersPawn2_NoRegister()
	{
		return ANeonBlastersPawn2::StaticClass();
	}
	UClass* Z_Construct_UClass_ANeonBlastersPawn2()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_APawn,
				(UObject* (*)())Z_Construct_UPackage__Script_NeonBlasters,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "NeonBlastersPawn2.h" },
				{ "ModuleRelativePath", "NeonBlastersPawn2.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ANeonBlastersPawn2>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ANeonBlastersPawn2::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
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
	IMPLEMENT_CLASS(ANeonBlastersPawn2, 3523422406);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANeonBlastersPawn2(Z_Construct_UClass_ANeonBlastersPawn2, &ANeonBlastersPawn2::StaticClass, TEXT("/Script/NeonBlasters"), TEXT("ANeonBlastersPawn2"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANeonBlastersPawn2);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
