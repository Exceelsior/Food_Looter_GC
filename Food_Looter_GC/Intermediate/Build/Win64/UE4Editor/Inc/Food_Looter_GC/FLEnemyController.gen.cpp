// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Food_Looter_GC/FLEnemyController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFLEnemyController() {}
// Cross Module References
	FOOD_LOOTER_GC_API UClass* Z_Construct_UClass_AFLEnemyController_NoRegister();
	FOOD_LOOTER_GC_API UClass* Z_Construct_UClass_AFLEnemyController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_Food_Looter_GC();
// End Cross Module References
	void AFLEnemyController::StaticRegisterNativesAFLEnemyController()
	{
	}
	UClass* Z_Construct_UClass_AFLEnemyController_NoRegister()
	{
		return AFLEnemyController::StaticClass();
	}
	struct Z_Construct_UClass_AFLEnemyController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocationToGoKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LocationToGoKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFLEnemyController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_Food_Looter_GC,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFLEnemyController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "FLEnemyController.h" },
		{ "ModuleRelativePath", "FLEnemyController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFLEnemyController_Statics::NewProp_LocationToGoKey_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "FLEnemyController.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AFLEnemyController_Statics::NewProp_LocationToGoKey = { "LocationToGoKey", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFLEnemyController, LocationToGoKey), METADATA_PARAMS(Z_Construct_UClass_AFLEnemyController_Statics::NewProp_LocationToGoKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFLEnemyController_Statics::NewProp_LocationToGoKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFLEnemyController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFLEnemyController_Statics::NewProp_LocationToGoKey,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFLEnemyController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFLEnemyController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFLEnemyController_Statics::ClassParams = {
		&AFLEnemyController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFLEnemyController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFLEnemyController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFLEnemyController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFLEnemyController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFLEnemyController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFLEnemyController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFLEnemyController, 1870709759);
	template<> FOOD_LOOTER_GC_API UClass* StaticClass<AFLEnemyController>()
	{
		return AFLEnemyController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFLEnemyController(Z_Construct_UClass_AFLEnemyController, &AFLEnemyController::StaticClass, TEXT("/Script/Food_Looter_GC"), TEXT("AFLEnemyController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFLEnemyController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
