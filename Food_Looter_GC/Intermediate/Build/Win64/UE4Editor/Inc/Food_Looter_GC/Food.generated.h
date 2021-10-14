// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UStaticMeshComponent;
#ifdef FOOD_LOOTER_GC_Food_generated_h
#error "Food.generated.h already included, missing '#pragma once' in Food.h"
#endif
#define FOOD_LOOTER_GC_Food_generated_h

#define Food_Looter_GC_Source_Food_Looter_GC_Food_h_14_SPARSE_DATA
#define Food_Looter_GC_Source_Food_Looter_GC_Food_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetMesh); \
	DECLARE_FUNCTION(execGetDivision); \
	DECLARE_FUNCTION(execGetPts);


#define Food_Looter_GC_Source_Food_Looter_GC_Food_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetMesh); \
	DECLARE_FUNCTION(execGetDivision); \
	DECLARE_FUNCTION(execGetPts);


#define Food_Looter_GC_Source_Food_Looter_GC_Food_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFood(); \
	friend struct Z_Construct_UClass_AFood_Statics; \
public: \
	DECLARE_CLASS(AFood, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Food_Looter_GC"), NO_API) \
	DECLARE_SERIALIZER(AFood)


#define Food_Looter_GC_Source_Food_Looter_GC_Food_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAFood(); \
	friend struct Z_Construct_UClass_AFood_Statics; \
public: \
	DECLARE_CLASS(AFood, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Food_Looter_GC"), NO_API) \
	DECLARE_SERIALIZER(AFood)


#define Food_Looter_GC_Source_Food_Looter_GC_Food_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFood(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFood) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFood); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFood); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFood(AFood&&); \
	NO_API AFood(const AFood&); \
public:


#define Food_Looter_GC_Source_Food_Looter_GC_Food_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFood(AFood&&); \
	NO_API AFood(const AFood&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFood); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFood); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFood)


#define Food_Looter_GC_Source_Food_Looter_GC_Food_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__GM() { return STRUCT_OFFSET(AFood, GM); } \
	FORCEINLINE static uint32 __PPO__StaticMesh() { return STRUCT_OFFSET(AFood, StaticMesh); } \
	FORCEINLINE static uint32 __PPO__SphereComponent() { return STRUCT_OFFSET(AFood, SphereComponent); } \
	FORCEINLINE static uint32 __PPO__Pts() { return STRUCT_OFFSET(AFood, Pts); } \
	FORCEINLINE static uint32 __PPO__DividePlayerSpeedBy() { return STRUCT_OFFSET(AFood, DividePlayerSpeedBy); }


#define Food_Looter_GC_Source_Food_Looter_GC_Food_h_11_PROLOG
#define Food_Looter_GC_Source_Food_Looter_GC_Food_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Food_Looter_GC_Source_Food_Looter_GC_Food_h_14_PRIVATE_PROPERTY_OFFSET \
	Food_Looter_GC_Source_Food_Looter_GC_Food_h_14_SPARSE_DATA \
	Food_Looter_GC_Source_Food_Looter_GC_Food_h_14_RPC_WRAPPERS \
	Food_Looter_GC_Source_Food_Looter_GC_Food_h_14_INCLASS \
	Food_Looter_GC_Source_Food_Looter_GC_Food_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Food_Looter_GC_Source_Food_Looter_GC_Food_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Food_Looter_GC_Source_Food_Looter_GC_Food_h_14_PRIVATE_PROPERTY_OFFSET \
	Food_Looter_GC_Source_Food_Looter_GC_Food_h_14_SPARSE_DATA \
	Food_Looter_GC_Source_Food_Looter_GC_Food_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Food_Looter_GC_Source_Food_Looter_GC_Food_h_14_INCLASS_NO_PURE_DECLS \
	Food_Looter_GC_Source_Food_Looter_GC_Food_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FOOD_LOOTER_GC_API UClass* StaticClass<class AFood>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Food_Looter_GC_Source_Food_Looter_GC_Food_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
