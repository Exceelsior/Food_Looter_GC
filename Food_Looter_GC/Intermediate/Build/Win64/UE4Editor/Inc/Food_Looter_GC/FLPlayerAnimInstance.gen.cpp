// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Food_Looter_GC/FLPlayerAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFLPlayerAnimInstance() {}
// Cross Module References
	FOOD_LOOTER_GC_API UClass* Z_Construct_UClass_UFLPlayerAnimInstance_NoRegister();
	FOOD_LOOTER_GC_API UClass* Z_Construct_UClass_UFLPlayerAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_Food_Looter_GC();
	FOOD_LOOTER_GC_API UClass* Z_Construct_UClass_AMainCharacter_NoRegister();
// End Cross Module References
	void UFLPlayerAnimInstance::StaticRegisterNativesUFLPlayerAnimInstance()
	{
	}
	UClass* Z_Construct_UClass_UFLPlayerAnimInstance_NoRegister()
	{
		return UFLPlayerAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UFLPlayerAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MovementSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsCarryingFood_MetaData[];
#endif
		static void NewProp_IsCarryingFood_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsCarryingFood;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CarryMovementSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CarryMovementSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Player_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFLPlayerAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Food_Looter_GC,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFLPlayerAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "FLPlayerAnimInstance.h" },
		{ "ModuleRelativePath", "FLPlayerAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFLPlayerAnimInstance_Statics::NewProp_MovementSpeed_MetaData[] = {
		{ "Category", "AnimationProperties" },
		{ "ModuleRelativePath", "FLPlayerAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFLPlayerAnimInstance_Statics::NewProp_MovementSpeed = { "MovementSpeed", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFLPlayerAnimInstance, MovementSpeed), METADATA_PARAMS(Z_Construct_UClass_UFLPlayerAnimInstance_Statics::NewProp_MovementSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFLPlayerAnimInstance_Statics::NewProp_MovementSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFLPlayerAnimInstance_Statics::NewProp_IsCarryingFood_MetaData[] = {
		{ "Category", "AnimationProperties" },
		{ "ModuleRelativePath", "FLPlayerAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UFLPlayerAnimInstance_Statics::NewProp_IsCarryingFood_SetBit(void* Obj)
	{
		((UFLPlayerAnimInstance*)Obj)->IsCarryingFood = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFLPlayerAnimInstance_Statics::NewProp_IsCarryingFood = { "IsCarryingFood", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFLPlayerAnimInstance), &Z_Construct_UClass_UFLPlayerAnimInstance_Statics::NewProp_IsCarryingFood_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFLPlayerAnimInstance_Statics::NewProp_IsCarryingFood_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFLPlayerAnimInstance_Statics::NewProp_IsCarryingFood_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFLPlayerAnimInstance_Statics::NewProp_CarryMovementSpeed_MetaData[] = {
		{ "Category", "AnimationProperties" },
		{ "ModuleRelativePath", "FLPlayerAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFLPlayerAnimInstance_Statics::NewProp_CarryMovementSpeed = { "CarryMovementSpeed", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFLPlayerAnimInstance, CarryMovementSpeed), METADATA_PARAMS(Z_Construct_UClass_UFLPlayerAnimInstance_Statics::NewProp_CarryMovementSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFLPlayerAnimInstance_Statics::NewProp_CarryMovementSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFLPlayerAnimInstance_Statics::NewProp_Player_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "FLPlayerAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFLPlayerAnimInstance_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFLPlayerAnimInstance, Player), Z_Construct_UClass_AMainCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFLPlayerAnimInstance_Statics::NewProp_Player_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFLPlayerAnimInstance_Statics::NewProp_Player_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFLPlayerAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFLPlayerAnimInstance_Statics::NewProp_MovementSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFLPlayerAnimInstance_Statics::NewProp_IsCarryingFood,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFLPlayerAnimInstance_Statics::NewProp_CarryMovementSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFLPlayerAnimInstance_Statics::NewProp_Player,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFLPlayerAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFLPlayerAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFLPlayerAnimInstance_Statics::ClassParams = {
		&UFLPlayerAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFLPlayerAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFLPlayerAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UFLPlayerAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFLPlayerAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFLPlayerAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFLPlayerAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFLPlayerAnimInstance, 1724356507);
	template<> FOOD_LOOTER_GC_API UClass* StaticClass<UFLPlayerAnimInstance>()
	{
		return UFLPlayerAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFLPlayerAnimInstance(Z_Construct_UClass_UFLPlayerAnimInstance, &UFLPlayerAnimInstance::StaticClass, TEXT("/Script/Food_Looter_GC"), TEXT("UFLPlayerAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFLPlayerAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
