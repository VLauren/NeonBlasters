// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NEONBLASTERS_NeonBlastersPawn_generated_h
#error "NeonBlastersPawn.generated.h already included, missing '#pragma once' in NeonBlastersPawn.h"
#endif
#define NEONBLASTERS_NeonBlastersPawn_generated_h

#define NeonBlasters_Source_NeonBlasters_NeonBlastersPawn_h_11_RPC_WRAPPERS
#define NeonBlasters_Source_NeonBlasters_NeonBlastersPawn_h_11_RPC_WRAPPERS_NO_PURE_DECLS
#define NeonBlasters_Source_NeonBlasters_NeonBlastersPawn_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANeonBlastersPawn(); \
	friend NEONBLASTERS_API class UClass* Z_Construct_UClass_ANeonBlastersPawn(); \
public: \
	DECLARE_CLASS(ANeonBlastersPawn, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/NeonBlasters"), NO_API) \
	DECLARE_SERIALIZER(ANeonBlastersPawn) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define NeonBlasters_Source_NeonBlasters_NeonBlastersPawn_h_11_INCLASS \
private: \
	static void StaticRegisterNativesANeonBlastersPawn(); \
	friend NEONBLASTERS_API class UClass* Z_Construct_UClass_ANeonBlastersPawn(); \
public: \
	DECLARE_CLASS(ANeonBlastersPawn, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/NeonBlasters"), NO_API) \
	DECLARE_SERIALIZER(ANeonBlastersPawn) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define NeonBlasters_Source_NeonBlasters_NeonBlastersPawn_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANeonBlastersPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANeonBlastersPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANeonBlastersPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANeonBlastersPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANeonBlastersPawn(ANeonBlastersPawn&&); \
	NO_API ANeonBlastersPawn(const ANeonBlastersPawn&); \
public:


#define NeonBlasters_Source_NeonBlasters_NeonBlastersPawn_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANeonBlastersPawn(ANeonBlastersPawn&&); \
	NO_API ANeonBlastersPawn(const ANeonBlastersPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANeonBlastersPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANeonBlastersPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANeonBlastersPawn)


#define NeonBlasters_Source_NeonBlasters_NeonBlastersPawn_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PlaneMesh() { return STRUCT_OFFSET(ANeonBlastersPawn, PlaneMesh); } \
	FORCEINLINE static uint32 __PPO__SpringArm() { return STRUCT_OFFSET(ANeonBlastersPawn, SpringArm); } \
	FORCEINLINE static uint32 __PPO__SpringArm2() { return STRUCT_OFFSET(ANeonBlastersPawn, SpringArm2); } \
	FORCEINLINE static uint32 __PPO__Camera() { return STRUCT_OFFSET(ANeonBlastersPawn, Camera); } \
	FORCEINLINE static uint32 __PPO__Acceleration() { return STRUCT_OFFSET(ANeonBlastersPawn, Acceleration); } \
	FORCEINLINE static uint32 __PPO__TurnSpeed() { return STRUCT_OFFSET(ANeonBlastersPawn, TurnSpeed); } \
	FORCEINLINE static uint32 __PPO__MaxSpeed() { return STRUCT_OFFSET(ANeonBlastersPawn, MaxSpeed); } \
	FORCEINLINE static uint32 __PPO__MinSpeed() { return STRUCT_OFFSET(ANeonBlastersPawn, MinSpeed); }


#define NeonBlasters_Source_NeonBlasters_NeonBlastersPawn_h_8_PROLOG
#define NeonBlasters_Source_NeonBlasters_NeonBlastersPawn_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NeonBlasters_Source_NeonBlasters_NeonBlastersPawn_h_11_PRIVATE_PROPERTY_OFFSET \
	NeonBlasters_Source_NeonBlasters_NeonBlastersPawn_h_11_RPC_WRAPPERS \
	NeonBlasters_Source_NeonBlasters_NeonBlastersPawn_h_11_INCLASS \
	NeonBlasters_Source_NeonBlasters_NeonBlastersPawn_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NeonBlasters_Source_NeonBlasters_NeonBlastersPawn_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NeonBlasters_Source_NeonBlasters_NeonBlastersPawn_h_11_PRIVATE_PROPERTY_OFFSET \
	NeonBlasters_Source_NeonBlasters_NeonBlastersPawn_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	NeonBlasters_Source_NeonBlasters_NeonBlastersPawn_h_11_INCLASS_NO_PURE_DECLS \
	NeonBlasters_Source_NeonBlasters_NeonBlastersPawn_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NeonBlasters_Source_NeonBlasters_NeonBlastersPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
