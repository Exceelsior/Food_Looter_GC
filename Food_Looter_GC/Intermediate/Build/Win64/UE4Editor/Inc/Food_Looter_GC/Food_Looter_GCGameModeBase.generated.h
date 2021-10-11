// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef FOOD_LOOTER_GC_Food_Looter_GCGameModeBase_generated_h
#error "Food_Looter_GCGameModeBase.generated.h already included, missing '#pragma once' in Food_Looter_GCGameModeBase.h"
#endif
#define FOOD_LOOTER_GC_Food_Looter_GCGameModeBase_generated_h

#define Food_Looter_GC_Source_Food_Looter_GC_Food_Looter_GCGameModeBase_h_16_SPARSE_DATA
#define Food_Looter_GC_Source_Food_Looter_GC_Food_Looter_GCGameModeBase_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execManageIa); \
	DECLARE_FUNCTION(execCompareFood); \
	DECLARE_FUNCTION(execBeginPlay); \
	DECLARE_FUNCTION(execTick);


#define Food_Looter_GC_Source_Food_Looter_GC_Food_Looter_GCGameModeBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execManageIa); \
	DECLARE_FUNCTION(execCompareFood); \
	DECLARE_FUNCTION(execBeginPlay); \
	DECLARE_FUNCTION(execTick);


#define Food_Looter_GC_Source_Food_Looter_GC_Food_Looter_GCGameModeBase_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFood_Looter_GCGameModeBase(); \
	friend struct Z_Construct_UClass_AFood_Looter_GCGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AFood_Looter_GCGameModeBase, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Food_Looter_GC"), NO_API) \
	DECLARE_SERIALIZER(AFood_Looter_GCGameModeBase)


#define Food_Looter_GC_Source_Food_Looter_GC_Food_Looter_GCGameModeBase_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAFood_Looter_GCGameModeBase(); \
	friend struct Z_Construct_UClass_AFood_Looter_GCGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AFood_Looter_GCGameModeBase, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Food_Looter_GC"), NO_API) \
	DECLARE_SERIALIZER(AFood_Looter_GCGameModeBase)


#define Food_Looter_GC_Source_Food_Looter_GC_Food_Looter_GCGameModeBase_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFood_Looter_GCGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFood_Looter_GCGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFood_Looter_GCGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFood_Looter_GCGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFood_Looter_GCGameModeBase(AFood_Looter_GCGameModeBase&&); \
	NO_API AFood_Looter_GCGameModeBase(const AFood_Looter_GCGameModeBase&); \
public:


#define Food_Looter_GC_Source_Food_Looter_GC_Food_Looter_GCGameModeBase_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFood_Looter_GCGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFood_Looter_GCGameModeBase(AFood_Looter_GCGameModeBase&&); \
	NO_API AFood_Looter_GCGameModeBase(const AFood_Looter_GCGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFood_Looter_GCGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFood_Looter_GCGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFood_Looter_GCGameModeBase)


#define Food_Looter_GC_Source_Food_Looter_GC_Food_Looter_GCGameModeBase_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Win() { return STRUCT_OFFSET(AFood_Looter_GCGameModeBase, Win); } \
	FORCEINLINE static uint32 __PPO__TempAct() { return STRUCT_OFFSET(AFood_Looter_GCGameModeBase, TempAct); } \
	FORCEINLINE static uint32 __PPO__PtSpawn() { return STRUCT_OFFSET(AFood_Looter_GCGameModeBase, PtSpawn); } \
	FORCEINLINE static uint32 __PPO__SaveTimerBetweenEnemies() { return STRUCT_OFFSET(AFood_Looter_GCGameModeBase, SaveTimerBetweenEnemies); } \
	FORCEINLINE static uint32 __PPO__CanDecreaseTimer() { return STRUCT_OFFSET(AFood_Looter_GCGameModeBase, CanDecreaseTimer); }


#define Food_Looter_GC_Source_Food_Looter_GC_Food_Looter_GCGameModeBase_h_13_PROLOG
#define Food_Looter_GC_Source_Food_Looter_GC_Food_Looter_GCGameModeBase_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Food_Looter_GC_Source_Food_Looter_GC_Food_Looter_GCGameModeBase_h_16_PRIVATE_PROPERTY_OFFSET \
	Food_Looter_GC_Source_Food_Looter_GC_Food_Looter_GCGameModeBase_h_16_SPARSE_DATA \
	Food_Looter_GC_Source_Food_Looter_GC_Food_Looter_GCGameModeBase_h_16_RPC_WRAPPERS \
	Food_Looter_GC_Source_Food_Looter_GC_Food_Looter_GCGameModeBase_h_16_INCLASS \
	Food_Looter_GC_Source_Food_Looter_GC_Food_Looter_GCGameModeBase_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Food_Looter_GC_Source_Food_Looter_GC_Food_Looter_GCGameModeBase_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Food_Looter_GC_Source_Food_Looter_GC_Food_Looter_GCGameModeBase_h_16_PRIVATE_PROPERTY_OFFSET \
	Food_Looter_GC_Source_Food_Looter_GC_Food_Looter_GCGameModeBase_h_16_SPARSE_DATA \
	Food_Looter_GC_Source_Food_Looter_GC_Food_Looter_GCGameModeBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Food_Looter_GC_Source_Food_Looter_GC_Food_Looter_GCGameModeBase_h_16_INCLASS_NO_PURE_DECLS \
	Food_Looter_GC_Source_Food_Looter_GC_Food_Looter_GCGameModeBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FOOD_LOOTER_GC_API UClass* StaticClass<class AFood_Looter_GCGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Food_Looter_GC_Source_Food_Looter_GC_Food_Looter_GCGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
