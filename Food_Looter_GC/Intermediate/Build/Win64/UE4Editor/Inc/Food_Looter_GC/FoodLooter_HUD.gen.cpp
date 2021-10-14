// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Food_Looter_GC/FoodLooter_HUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFoodLooter_HUD() {}
// Cross Module References
	FOOD_LOOTER_GC_API UClass* Z_Construct_UClass_AFoodLooter_HUD_NoRegister();
	FOOD_LOOTER_GC_API UClass* Z_Construct_UClass_AFoodLooter_HUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_Food_Looter_GC();
// End Cross Module References
	void AFoodLooter_HUD::StaticRegisterNativesAFoodLooter_HUD()
	{
	}
	UClass* Z_Construct_UClass_AFoodLooter_HUD_NoRegister()
	{
		return AFoodLooter_HUD::StaticClass();
	}
	struct Z_Construct_UClass_AFoodLooter_HUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFoodLooter_HUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_Food_Looter_GC,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFoodLooter_HUD_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "FoodLooter_HUD.h" },
		{ "ModuleRelativePath", "FoodLooter_HUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFoodLooter_HUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFoodLooter_HUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFoodLooter_HUD_Statics::ClassParams = {
		&AFoodLooter_HUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AFoodLooter_HUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFoodLooter_HUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFoodLooter_HUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFoodLooter_HUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFoodLooter_HUD, 3770213018);
	template<> FOOD_LOOTER_GC_API UClass* StaticClass<AFoodLooter_HUD>()
	{
		return AFoodLooter_HUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFoodLooter_HUD(Z_Construct_UClass_AFoodLooter_HUD, &AFoodLooter_HUD::StaticClass, TEXT("/Script/Food_Looter_GC"), TEXT("AFoodLooter_HUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFoodLooter_HUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
