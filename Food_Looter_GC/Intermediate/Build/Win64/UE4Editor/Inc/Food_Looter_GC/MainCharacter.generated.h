// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FOOD_LOOTER_GC_MainCharacter_generated_h
#error "MainCharacter.generated.h already included, missing '#pragma once' in MainCharacter.h"
#endif
#define FOOD_LOOTER_GC_MainCharacter_generated_h

#define Food_Looter_GC_Source_Food_Looter_GC_MainCharacter_h_14_SPARSE_DATA
#define Food_Looter_GC_Source_Food_Looter_GC_MainCharacter_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetIsCarryingFood); \
	DECLARE_FUNCTION(execCheckIfCarryingFood); \
	DECLARE_FUNCTION(execCameraZoomOut); \
	DECLARE_FUNCTION(execCameraZoomIn); \
	DECLARE_FUNCTION(execLookUp); \
	DECLARE_FUNCTION(execTurn); \
	DECLARE_FUNCTION(execMoveRight); \
	DECLARE_FUNCTION(execMoveForward);


#define Food_Looter_GC_Source_Food_Looter_GC_MainCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetIsCarryingFood); \
	DECLARE_FUNCTION(execCheckIfCarryingFood); \
	DECLARE_FUNCTION(execCameraZoomOut); \
	DECLARE_FUNCTION(execCameraZoomIn); \
	DECLARE_FUNCTION(execLookUp); \
	DECLARE_FUNCTION(execTurn); \
	DECLARE_FUNCTION(execMoveRight); \
	DECLARE_FUNCTION(execMoveForward);


#define Food_Looter_GC_Source_Food_Looter_GC_MainCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMainCharacter(); \
	friend struct Z_Construct_UClass_AMainCharacter_Statics; \
public: \
	DECLARE_CLASS(AMainCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Food_Looter_GC"), NO_API) \
	DECLARE_SERIALIZER(AMainCharacter)


#define Food_Looter_GC_Source_Food_Looter_GC_MainCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAMainCharacter(); \
	friend struct Z_Construct_UClass_AMainCharacter_Statics; \
public: \
	DECLARE_CLASS(AMainCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Food_Looter_GC"), NO_API) \
	DECLARE_SERIALIZER(AMainCharacter)


#define Food_Looter_GC_Source_Food_Looter_GC_MainCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMainCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMainCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMainCharacter(AMainCharacter&&); \
	NO_API AMainCharacter(const AMainCharacter&); \
public:


#define Food_Looter_GC_Source_Food_Looter_GC_MainCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMainCharacter(AMainCharacter&&); \
	NO_API AMainCharacter(const AMainCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMainCharacter)


#define Food_Looter_GC_Source_Food_Looter_GC_MainCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ArmComponent() { return STRUCT_OFFSET(AMainCharacter, ArmComponent); } \
	FORCEINLINE static uint32 __PPO__CameraComponent() { return STRUCT_OFFSET(AMainCharacter, CameraComponent); } \
	FORCEINLINE static uint32 __PPO__AnimInstance() { return STRUCT_OFFSET(AMainCharacter, AnimInstance); } \
	FORCEINLINE static uint32 __PPO__CameraYawSpeed() { return STRUCT_OFFSET(AMainCharacter, CameraYawSpeed); } \
	FORCEINLINE static uint32 __PPO__CameraPitchSpeed() { return STRUCT_OFFSET(AMainCharacter, CameraPitchSpeed); } \
	FORCEINLINE static uint32 __PPO__MaxCameraZoomDistance() { return STRUCT_OFFSET(AMainCharacter, MaxCameraZoomDistance); } \
	FORCEINLINE static uint32 __PPO__IsCarryingFood() { return STRUCT_OFFSET(AMainCharacter, IsCarryingFood); } \
	FORCEINLINE static uint32 __PPO__CarryMovementSpeed() { return STRUCT_OFFSET(AMainCharacter, CarryMovementSpeed); } \
	FORCEINLINE static uint32 __PPO__CurrentWorld() { return STRUCT_OFFSET(AMainCharacter, CurrentWorld); }


#define Food_Looter_GC_Source_Food_Looter_GC_MainCharacter_h_11_PROLOG
#define Food_Looter_GC_Source_Food_Looter_GC_MainCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Food_Looter_GC_Source_Food_Looter_GC_MainCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	Food_Looter_GC_Source_Food_Looter_GC_MainCharacter_h_14_SPARSE_DATA \
	Food_Looter_GC_Source_Food_Looter_GC_MainCharacter_h_14_RPC_WRAPPERS \
	Food_Looter_GC_Source_Food_Looter_GC_MainCharacter_h_14_INCLASS \
	Food_Looter_GC_Source_Food_Looter_GC_MainCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Food_Looter_GC_Source_Food_Looter_GC_MainCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Food_Looter_GC_Source_Food_Looter_GC_MainCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	Food_Looter_GC_Source_Food_Looter_GC_MainCharacter_h_14_SPARSE_DATA \
	Food_Looter_GC_Source_Food_Looter_GC_MainCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Food_Looter_GC_Source_Food_Looter_GC_MainCharacter_h_14_INCLASS_NO_PURE_DECLS \
	Food_Looter_GC_Source_Food_Looter_GC_MainCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FOOD_LOOTER_GC_API UClass* StaticClass<class AMainCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Food_Looter_GC_Source_Food_Looter_GC_MainCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
