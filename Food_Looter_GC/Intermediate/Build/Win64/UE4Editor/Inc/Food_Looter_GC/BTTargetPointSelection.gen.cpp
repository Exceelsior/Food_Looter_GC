// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Food_Looter_GC/BTTargetPointSelection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTargetPointSelection() {}
// Cross Module References
	FOOD_LOOTER_GC_API UClass* Z_Construct_UClass_UBTTargetPointSelection_NoRegister();
	FOOD_LOOTER_GC_API UClass* Z_Construct_UClass_UBTTargetPointSelection();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_Food_Looter_GC();
// End Cross Module References
	void UBTTargetPointSelection::StaticRegisterNativesUBTTargetPointSelection()
	{
	}
	UClass* Z_Construct_UClass_UBTTargetPointSelection_NoRegister()
	{
		return UBTTargetPointSelection::StaticClass();
	}
	struct Z_Construct_UClass_UBTTargetPointSelection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTargetPointSelection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Food_Looter_GC,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTargetPointSelection_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BTTargetPointSelection.h" },
		{ "ModuleRelativePath", "BTTargetPointSelection.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTargetPointSelection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTargetPointSelection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTTargetPointSelection_Statics::ClassParams = {
		&UBTTargetPointSelection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTTargetPointSelection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTargetPointSelection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTTargetPointSelection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTTargetPointSelection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTTargetPointSelection, 1801340716);
	template<> FOOD_LOOTER_GC_API UClass* StaticClass<UBTTargetPointSelection>()
	{
		return UBTTargetPointSelection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTTargetPointSelection(Z_Construct_UClass_UBTTargetPointSelection, &UBTTargetPointSelection::StaticClass, TEXT("/Script/Food_Looter_GC"), TEXT("UBTTargetPointSelection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTargetPointSelection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
