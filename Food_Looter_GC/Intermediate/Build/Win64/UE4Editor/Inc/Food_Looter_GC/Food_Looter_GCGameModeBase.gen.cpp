// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Food_Looter_GC/Food_Looter_GCGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFood_Looter_GCGameModeBase() {}
// Cross Module References
	FOOD_LOOTER_GC_API UClass* Z_Construct_UClass_AFood_Looter_GCGameModeBase_NoRegister();
	FOOD_LOOTER_GC_API UClass* Z_Construct_UClass_AFood_Looter_GCGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Food_Looter_GC();
// End Cross Module References
	void AFood_Looter_GCGameModeBase::StaticRegisterNativesAFood_Looter_GCGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AFood_Looter_GCGameModeBase_NoRegister()
	{
		return AFood_Looter_GCGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AFood_Looter_GCGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFood_Looter_GCGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Food_Looter_GC,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFood_Looter_GCGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Food_Looter_GCGameModeBase.h" },
		{ "ModuleRelativePath", "Food_Looter_GCGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFood_Looter_GCGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFood_Looter_GCGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFood_Looter_GCGameModeBase_Statics::ClassParams = {
		&AFood_Looter_GCGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AFood_Looter_GCGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFood_Looter_GCGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFood_Looter_GCGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFood_Looter_GCGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFood_Looter_GCGameModeBase, 3224417016);
	template<> FOOD_LOOTER_GC_API UClass* StaticClass<AFood_Looter_GCGameModeBase>()
	{
		return AFood_Looter_GCGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFood_Looter_GCGameModeBase(Z_Construct_UClass_AFood_Looter_GCGameModeBase, &AFood_Looter_GCGameModeBase::StaticClass, TEXT("/Script/Food_Looter_GC"), TEXT("AFood_Looter_GCGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFood_Looter_GCGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
