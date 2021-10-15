// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Food_Looter_GC/FLEnemy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFLEnemy() {}
// Cross Module References
	FOOD_LOOTER_GC_API UClass* Z_Construct_UClass_AFLEnemy_NoRegister();
	FOOD_LOOTER_GC_API UClass* Z_Construct_UClass_AFLEnemy();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Food_Looter_GC();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
	FOOD_LOOTER_GC_API UClass* Z_Construct_UClass_AFLTargetPoint_NoRegister();
// End Cross Module References
	void AFLEnemy::StaticRegisterNativesAFLEnemy()
	{
	}
	UClass* Z_Construct_UClass_AFLEnemy_NoRegister()
	{
		return AFLEnemy::StaticClass();
	}
	struct Z_Construct_UClass_AFLEnemy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BehaviorTree_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BehaviorTree;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ArrayTarget_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArrayTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ArrayTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WalkSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WalkSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChaseSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ChaseSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFLEnemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Food_Looter_GC,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFLEnemy_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "FLEnemy.h" },
		{ "ModuleRelativePath", "FLEnemy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFLEnemy_Statics::NewProp_BehaviorTree_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "FLEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFLEnemy_Statics::NewProp_BehaviorTree = { "BehaviorTree", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFLEnemy, BehaviorTree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFLEnemy_Statics::NewProp_BehaviorTree_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFLEnemy_Statics::NewProp_BehaviorTree_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFLEnemy_Statics::NewProp_ArrayTarget_Inner = { "ArrayTarget", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AFLTargetPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFLEnemy_Statics::NewProp_ArrayTarget_MetaData[] = {
		{ "Category", "FLEnemy" },
		{ "ModuleRelativePath", "FLEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFLEnemy_Statics::NewProp_ArrayTarget = { "ArrayTarget", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFLEnemy, ArrayTarget), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AFLEnemy_Statics::NewProp_ArrayTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFLEnemy_Statics::NewProp_ArrayTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFLEnemy_Statics::NewProp_WalkSpeed_MetaData[] = {
		{ "Category", "FLEnemy" },
		{ "ModuleRelativePath", "FLEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFLEnemy_Statics::NewProp_WalkSpeed = { "WalkSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFLEnemy, WalkSpeed), METADATA_PARAMS(Z_Construct_UClass_AFLEnemy_Statics::NewProp_WalkSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFLEnemy_Statics::NewProp_WalkSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFLEnemy_Statics::NewProp_ChaseSpeed_MetaData[] = {
		{ "Category", "FLEnemy" },
		{ "ModuleRelativePath", "FLEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFLEnemy_Statics::NewProp_ChaseSpeed = { "ChaseSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFLEnemy, ChaseSpeed), METADATA_PARAMS(Z_Construct_UClass_AFLEnemy_Statics::NewProp_ChaseSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFLEnemy_Statics::NewProp_ChaseSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFLEnemy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFLEnemy_Statics::NewProp_BehaviorTree,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFLEnemy_Statics::NewProp_ArrayTarget_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFLEnemy_Statics::NewProp_ArrayTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFLEnemy_Statics::NewProp_WalkSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFLEnemy_Statics::NewProp_ChaseSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFLEnemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFLEnemy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFLEnemy_Statics::ClassParams = {
		&AFLEnemy::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFLEnemy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFLEnemy_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFLEnemy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFLEnemy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFLEnemy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFLEnemy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFLEnemy, 3995835445);
	template<> FOOD_LOOTER_GC_API UClass* StaticClass<AFLEnemy>()
	{
		return AFLEnemy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFLEnemy(Z_Construct_UClass_AFLEnemy, &AFLEnemy::StaticClass, TEXT("/Script/Food_Looter_GC"), TEXT("AFLEnemy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFLEnemy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
