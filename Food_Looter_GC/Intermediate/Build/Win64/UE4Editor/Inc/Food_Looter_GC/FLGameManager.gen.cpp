// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Food_Looter_GC/FLGameManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFLGameManager() {}
// Cross Module References
	FOOD_LOOTER_GC_API UClass* Z_Construct_UClass_AFLGameManager_NoRegister();
	FOOD_LOOTER_GC_API UClass* Z_Construct_UClass_AFLGameManager();
	ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
	UPackage* Z_Construct_UPackage__Script_Food_Looter_GC();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void AFLGameManager::StaticRegisterNativesAFLGameManager()
	{
	}
	UClass* Z_Construct_UClass_AFLGameManager_NoRegister()
	{
		return AFLGameManager::StaticClass();
	}
	struct Z_Construct_UClass_AFLGameManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NbEnemiesHere_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NbEnemiesHere_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NbEnemiesHere;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NbFood_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_NbFood;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NbFoodNeeded_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_NbFoodNeeded;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFLGameManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameStateBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Food_Looter_GC,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFLGameManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "FLGameManager.h" },
		{ "ModuleRelativePath", "FLGameManager.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFLGameManager_Statics::NewProp_NbEnemiesHere_Inner = { "NbEnemiesHere", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFLGameManager_Statics::NewProp_NbEnemiesHere_MetaData[] = {
		{ "Category", "FLGameManager" },
		{ "ModuleRelativePath", "FLGameManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFLGameManager_Statics::NewProp_NbEnemiesHere = { "NbEnemiesHere", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFLGameManager, NbEnemiesHere), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AFLGameManager_Statics::NewProp_NbEnemiesHere_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFLGameManager_Statics::NewProp_NbEnemiesHere_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFLGameManager_Statics::NewProp_NbFood_MetaData[] = {
		{ "Category", "FLGameManager" },
		{ "ModuleRelativePath", "FLGameManager.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AFLGameManager_Statics::NewProp_NbFood = { "NbFood", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFLGameManager, NbFood), METADATA_PARAMS(Z_Construct_UClass_AFLGameManager_Statics::NewProp_NbFood_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFLGameManager_Statics::NewProp_NbFood_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFLGameManager_Statics::NewProp_NbFoodNeeded_MetaData[] = {
		{ "Category", "FLGameManager" },
		{ "ModuleRelativePath", "FLGameManager.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AFLGameManager_Statics::NewProp_NbFoodNeeded = { "NbFoodNeeded", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFLGameManager, NbFoodNeeded), METADATA_PARAMS(Z_Construct_UClass_AFLGameManager_Statics::NewProp_NbFoodNeeded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFLGameManager_Statics::NewProp_NbFoodNeeded_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFLGameManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFLGameManager_Statics::NewProp_NbEnemiesHere_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFLGameManager_Statics::NewProp_NbEnemiesHere,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFLGameManager_Statics::NewProp_NbFood,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFLGameManager_Statics::NewProp_NbFoodNeeded,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFLGameManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFLGameManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFLGameManager_Statics::ClassParams = {
		&AFLGameManager::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFLGameManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFLGameManager_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFLGameManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFLGameManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFLGameManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFLGameManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFLGameManager, 1634745209);
	template<> FOOD_LOOTER_GC_API UClass* StaticClass<AFLGameManager>()
	{
		return AFLGameManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFLGameManager(Z_Construct_UClass_AFLGameManager, &AFLGameManager::StaticClass, TEXT("/Script/Food_Looter_GC"), TEXT("AFLGameManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFLGameManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
