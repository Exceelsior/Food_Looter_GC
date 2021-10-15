// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Food_Looter_GC/FLUWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFLUWidget() {}
// Cross Module References
	FOOD_LOOTER_GC_API UClass* Z_Construct_UClass_UFLUWidget_NoRegister();
	FOOD_LOOTER_GC_API UClass* Z_Construct_UClass_UFLUWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Food_Looter_GC();
	UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
// End Cross Module References
	void UFLUWidget::StaticRegisterNativesUFLUWidget()
	{
	}
	UClass* Z_Construct_UClass_UFLUWidget_NoRegister()
	{
		return UFLUWidget::StaticClass();
	}
	struct Z_Construct_UClass_UFLUWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FoodBar_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FoodBar;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFLUWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Food_Looter_GC,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFLUWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FLUWidget.h" },
		{ "ModuleRelativePath", "FLUWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFLUWidget_Statics::NewProp_FoodBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "FLUWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FLUWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFLUWidget_Statics::NewProp_FoodBar = { "FoodBar", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFLUWidget, FoodBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFLUWidget_Statics::NewProp_FoodBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFLUWidget_Statics::NewProp_FoodBar_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFLUWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFLUWidget_Statics::NewProp_FoodBar,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFLUWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFLUWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFLUWidget_Statics::ClassParams = {
		&UFLUWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFLUWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFLUWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFLUWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFLUWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFLUWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFLUWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFLUWidget, 2845507262);
	template<> FOOD_LOOTER_GC_API UClass* StaticClass<UFLUWidget>()
	{
		return UFLUWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFLUWidget(Z_Construct_UClass_UFLUWidget, &UFLUWidget::StaticClass, TEXT("/Script/Food_Looter_GC"), TEXT("UFLUWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFLUWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
