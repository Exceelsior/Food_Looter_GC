// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FOOD_LOOTER_GC_GameManager_generated_h
#error "GameManager.generated.h already included, missing '#pragma once' in GameManager.h"
#endif
#define FOOD_LOOTER_GC_GameManager_generated_h

#define Food_Looter_GC_Source_Food_Looter_GC_GameManager_h_15_SPARSE_DATA
#define Food_Looter_GC_Source_Food_Looter_GC_GameManager_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFillArrayEnemies);


#define Food_Looter_GC_Source_Food_Looter_GC_GameManager_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFillArrayEnemies);


#define Food_Looter_GC_Source_Food_Looter_GC_GameManager_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGameManager(); \
	friend struct Z_Construct_UClass_AGameManager_Statics; \
public: \
	DECLARE_CLASS(AGameManager, AGameStateBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Food_Looter_GC"), NO_API) \
	DECLARE_SERIALIZER(AGameManager)


#define Food_Looter_GC_Source_Food_Looter_GC_GameManager_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAGameManager(); \
	friend struct Z_Construct_UClass_AGameManager_Statics; \
public: \
	DECLARE_CLASS(AGameManager, AGameStateBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Food_Looter_GC"), NO_API) \
	DECLARE_SERIALIZER(AGameManager)


#define Food_Looter_GC_Source_Food_Looter_GC_GameManager_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGameManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameManager(AGameManager&&); \
	NO_API AGameManager(const AGameManager&); \
public:


#define Food_Looter_GC_Source_Food_Looter_GC_GameManager_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGameManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameManager(AGameManager&&); \
	NO_API AGameManager(const AGameManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameManager)


#define Food_Looter_GC_Source_Food_Looter_GC_GameManager_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__NbEnemiesHere() { return STRUCT_OFFSET(AGameManager, NbEnemiesHere); }


#define Food_Looter_GC_Source_Food_Looter_GC_GameManager_h_12_PROLOG
#define Food_Looter_GC_Source_Food_Looter_GC_GameManager_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Food_Looter_GC_Source_Food_Looter_GC_GameManager_h_15_PRIVATE_PROPERTY_OFFSET \
	Food_Looter_GC_Source_Food_Looter_GC_GameManager_h_15_SPARSE_DATA \
	Food_Looter_GC_Source_Food_Looter_GC_GameManager_h_15_RPC_WRAPPERS \
	Food_Looter_GC_Source_Food_Looter_GC_GameManager_h_15_INCLASS \
	Food_Looter_GC_Source_Food_Looter_GC_GameManager_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Food_Looter_GC_Source_Food_Looter_GC_GameManager_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Food_Looter_GC_Source_Food_Looter_GC_GameManager_h_15_PRIVATE_PROPERTY_OFFSET \
	Food_Looter_GC_Source_Food_Looter_GC_GameManager_h_15_SPARSE_DATA \
	Food_Looter_GC_Source_Food_Looter_GC_GameManager_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Food_Looter_GC_Source_Food_Looter_GC_GameManager_h_15_INCLASS_NO_PURE_DECLS \
	Food_Looter_GC_Source_Food_Looter_GC_GameManager_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FOOD_LOOTER_GC_API UClass* StaticClass<class AGameManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Food_Looter_GC_Source_Food_Looter_GC_GameManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
