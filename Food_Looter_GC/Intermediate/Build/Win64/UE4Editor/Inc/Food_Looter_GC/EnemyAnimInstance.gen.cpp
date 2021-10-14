// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Food_Looter_GC/EnemyAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyAnimInstance() {}
// Cross Module References
	FOOD_LOOTER_GC_API UClass* Z_Construct_UClass_UEnemyAnimInstance_NoRegister();
	FOOD_LOOTER_GC_API UClass* Z_Construct_UClass_UEnemyAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_Food_Looter_GC();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
// End Cross Module References
	void UEnemyAnimInstance::StaticRegisterNativesUEnemyAnimInstance()
	{
	}
	UClass* Z_Construct_UClass_UEnemyAnimInstance_NoRegister()
	{
		return UEnemyAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UEnemyAnimInstance_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnemyAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Food_Looter_GC,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "EnemyAnimInstance.h" },
		{ "ModuleRelativePath", "EnemyAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_MovementSpeed_MetaData[] = {
		{ "Category", "AnimationProperties" },
		{ "ModuleRelativePath", "EnemyAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_MovementSpeed = { "MovementSpeed", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemyAnimInstance, MovementSpeed), METADATA_PARAMS(Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_MovementSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_MovementSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_Pawn_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "EnemyAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemyAnimInstance, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_Pawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_Pawn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnemyAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_MovementSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_Pawn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnemyAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnemyAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEnemyAnimInstance_Statics::ClassParams = {
		&UEnemyAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEnemyAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UEnemyAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnemyAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEnemyAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEnemyAnimInstance, 2325673715);
	template<> FOOD_LOOTER_GC_API UClass* StaticClass<UEnemyAnimInstance>()
	{
		return UEnemyAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnemyAnimInstance(Z_Construct_UClass_UEnemyAnimInstance, &UEnemyAnimInstance::StaticClass, TEXT("/Script/Food_Looter_GC"), TEXT("UEnemyAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnemyAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
