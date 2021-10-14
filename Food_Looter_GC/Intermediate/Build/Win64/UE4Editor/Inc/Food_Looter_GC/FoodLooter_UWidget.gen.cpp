// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Food_Looter_GC/FoodLooter_UWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFoodLooter_UWidget() {}
// Cross Module References
	FOOD_LOOTER_GC_API UClass* Z_Construct_UClass_UFoodLooter_UWidget_NoRegister();
	FOOD_LOOTER_GC_API UClass* Z_Construct_UClass_UFoodLooter_UWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Food_Looter_GC();
	UMG_API UClass* Z_Construct_UClass_USlider_NoRegister();
// End Cross Module References
	void UFoodLooter_UWidget::StaticRegisterNativesUFoodLooter_UWidget()
	{
	}
	UClass* Z_Construct_UClass_UFoodLooter_UWidget_NoRegister()
	{
		return UFoodLooter_UWidget::StaticClass();
	}
	struct Z_Construct_UClass_UFoodLooter_UWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FoodSlider_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FoodSlider;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFoodLooter_UWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Food_Looter_GC,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoodLooter_UWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "FoodLooter_UWidget.h" },
		{ "ModuleRelativePath", "FoodLooter_UWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoodLooter_UWidget_Statics::NewProp_FoodSlider_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "FoodLooter_UWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FoodLooter_UWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFoodLooter_UWidget_Statics::NewProp_FoodSlider = { "FoodSlider", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFoodLooter_UWidget, FoodSlider), Z_Construct_UClass_USlider_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFoodLooter_UWidget_Statics::NewProp_FoodSlider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFoodLooter_UWidget_Statics::NewProp_FoodSlider_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFoodLooter_UWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoodLooter_UWidget_Statics::NewProp_FoodSlider,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFoodLooter_UWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFoodLooter_UWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFoodLooter_UWidget_Statics::ClassParams = {
		&UFoodLooter_UWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFoodLooter_UWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFoodLooter_UWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFoodLooter_UWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFoodLooter_UWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFoodLooter_UWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFoodLooter_UWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFoodLooter_UWidget, 2494761174);
	template<> FOOD_LOOTER_GC_API UClass* StaticClass<UFoodLooter_UWidget>()
	{
		return UFoodLooter_UWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFoodLooter_UWidget(Z_Construct_UClass_UFoodLooter_UWidget, &UFoodLooter_UWidget::StaticClass, TEXT("/Script/Food_Looter_GC"), TEXT("UFoodLooter_UWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFoodLooter_UWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
