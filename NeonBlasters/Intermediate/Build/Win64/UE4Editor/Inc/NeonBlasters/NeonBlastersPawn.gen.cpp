// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "NeonBlastersPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNeonBlastersPawn() {}
// Cross Module References
	NEONBLASTERS_API UClass* Z_Construct_UClass_ANeonBlastersPawn_NoRegister();
	NEONBLASTERS_API UClass* Z_Construct_UClass_ANeonBlastersPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_NeonBlasters();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ANeonBlastersPawn::StaticRegisterNativesANeonBlastersPawn()
	{
	}
	UClass* Z_Construct_UClass_ANeonBlastersPawn_NoRegister()
	{
		return ANeonBlastersPawn::StaticClass();
	}
	UClass* Z_Construct_UClass_ANeonBlastersPawn()
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
				{ "IncludePath", "NeonBlastersPawn.h" },
				{ "ModuleRelativePath", "NeonBlastersPawn.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinSpeed_MetaData[] = {
				{ "Category", "Yaw" },
				{ "ModuleRelativePath", "NeonBlastersPawn.h" },
				{ "ToolTip", "Min forward speed" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "MinSpeed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(ANeonBlastersPawn, MinSpeed), METADATA_PARAMS(NewProp_MinSpeed_MetaData, ARRAY_COUNT(NewProp_MinSpeed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSpeed_MetaData[] = {
				{ "Category", "Pitch" },
				{ "ModuleRelativePath", "NeonBlastersPawn.h" },
				{ "ToolTip", "Max forward speed" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "MaxSpeed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(ANeonBlastersPawn, MaxSpeed), METADATA_PARAMS(NewProp_MaxSpeed_MetaData, ARRAY_COUNT(NewProp_MaxSpeed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TurnSpeed_MetaData[] = {
				{ "Category", "Plane" },
				{ "ModuleRelativePath", "NeonBlastersPawn.h" },
				{ "ToolTip", "How quickly pawn can steer" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TurnSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "TurnSpeed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(ANeonBlastersPawn, TurnSpeed), METADATA_PARAMS(NewProp_TurnSpeed_MetaData, ARRAY_COUNT(NewProp_TurnSpeed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Acceleration_MetaData[] = {
				{ "Category", "Plane" },
				{ "ModuleRelativePath", "NeonBlastersPawn.h" },
				{ "ToolTip", "How quickly forward speed changes" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Acceleration = { UE4CodeGen_Private::EPropertyClass::Float, "Acceleration", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(ANeonBlastersPawn, Acceleration), METADATA_PARAMS(NewProp_Acceleration_MetaData, ARRAY_COUNT(NewProp_Acceleration_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "Camera" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "NeonBlastersPawn.h" },
				{ "ToolTip", "Camera component that will be our viewpoint" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Camera = { UE4CodeGen_Private::EPropertyClass::Object, "Camera", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000b001d, 1, nullptr, STRUCT_OFFSET(ANeonBlastersPawn, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(NewProp_Camera_MetaData, ARRAY_COUNT(NewProp_Camera_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "Camera" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "NeonBlastersPawn.h" },
				{ "ToolTip", "Spring arm that will offset the camera" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpringArm = { UE4CodeGen_Private::EPropertyClass::Object, "SpringArm", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000b001d, 1, nullptr, STRUCT_OFFSET(ANeonBlastersPawn, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(NewProp_SpringArm_MetaData, ARRAY_COUNT(NewProp_SpringArm_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlaneMesh_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "Mesh" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "NeonBlastersPawn.h" },
				{ "ToolTip", "StaticMesh component that will be the visuals for our flying pawn" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlaneMesh = { UE4CodeGen_Private::EPropertyClass::Object, "PlaneMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000b001d, 1, nullptr, STRUCT_OFFSET(ANeonBlastersPawn, PlaneMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_PlaneMesh_MetaData, ARRAY_COUNT(NewProp_PlaneMesh_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MinSpeed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxSpeed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TurnSpeed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Acceleration,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Camera,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpringArm,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlaneMesh,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ANeonBlastersPawn>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ANeonBlastersPawn::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00800080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				"Game",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANeonBlastersPawn, 2619050636);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANeonBlastersPawn(Z_Construct_UClass_ANeonBlastersPawn, &ANeonBlastersPawn::StaticClass, TEXT("/Script/NeonBlasters"), TEXT("ANeonBlastersPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANeonBlastersPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif