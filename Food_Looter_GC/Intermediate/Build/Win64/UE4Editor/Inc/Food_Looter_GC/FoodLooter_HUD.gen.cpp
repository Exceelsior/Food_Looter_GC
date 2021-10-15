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
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AFoodLooter_HUD::execGameLost)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GameLost();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFoodLooter_HUD::execGameWon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GameWon();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFoodLooter_HUD::execUpdateFoodAmount)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateFoodAmount(Z_Param_Value);
		P_NATIVE_END;
	}
	void AFoodLooter_HUD::StaticRegisterNativesAFoodLooter_HUD()
	{
		UClass* Class = AFoodLooter_HUD::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GameLost", &AFoodLooter_HUD::execGameLost },
			{ "GameWon", &AFoodLooter_HUD::execGameWon },
			{ "UpdateFoodAmount", &AFoodLooter_HUD::execUpdateFoodAmount },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFoodLooter_HUD_GameLost_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFoodLooter_HUD_GameLost_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FoodLooter_HUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFoodLooter_HUD_GameLost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFoodLooter_HUD, nullptr, "GameLost", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFoodLooter_HUD_GameLost_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFoodLooter_HUD_GameLost_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFoodLooter_HUD_GameLost()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFoodLooter_HUD_GameLost_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFoodLooter_HUD_GameWon_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFoodLooter_HUD_GameWon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FoodLooter_HUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFoodLooter_HUD_GameWon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFoodLooter_HUD, nullptr, "GameWon", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFoodLooter_HUD_GameWon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFoodLooter_HUD_GameWon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFoodLooter_HUD_GameWon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFoodLooter_HUD_GameWon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFoodLooter_HUD_UpdateFoodAmount_Statics
	{
		struct FoodLooter_HUD_eventUpdateFoodAmount_Parms
		{
			int32 Value;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFoodLooter_HUD_UpdateFoodAmount_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FoodLooter_HUD_eventUpdateFoodAmount_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFoodLooter_HUD_UpdateFoodAmount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFoodLooter_HUD_UpdateFoodAmount_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFoodLooter_HUD_UpdateFoodAmount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FoodLooter_HUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFoodLooter_HUD_UpdateFoodAmount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFoodLooter_HUD, nullptr, "UpdateFoodAmount", nullptr, nullptr, sizeof(FoodLooter_HUD_eventUpdateFoodAmount_Parms), Z_Construct_UFunction_AFoodLooter_HUD_UpdateFoodAmount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFoodLooter_HUD_UpdateFoodAmount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFoodLooter_HUD_UpdateFoodAmount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFoodLooter_HUD_UpdateFoodAmount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFoodLooter_HUD_UpdateFoodAmount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFoodLooter_HUD_UpdateFoodAmount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFoodLooter_HUD_NoRegister()
	{
		return AFoodLooter_HUD::StaticClass();
	}
	struct Z_Construct_UClass_AFoodLooter_HUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FoodLooterWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_FoodLooterWidgetClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFoodLooter_HUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_Food_Looter_GC,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFoodLooter_HUD_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFoodLooter_HUD_GameLost, "GameLost" }, // 2013481030
		{ &Z_Construct_UFunction_AFoodLooter_HUD_GameWon, "GameWon" }, // 2370529585
		{ &Z_Construct_UFunction_AFoodLooter_HUD_UpdateFoodAmount, "UpdateFoodAmount" }, // 3788065931
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFoodLooter_HUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "FoodLooter_HUD.h" },
		{ "ModuleRelativePath", "FoodLooter_HUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFoodLooter_HUD_Statics::NewProp_FoodLooterWidgetClass_MetaData[] = {
		{ "Category", "Widgets" },
		{ "ModuleRelativePath", "FoodLooter_HUD.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFoodLooter_HUD_Statics::NewProp_FoodLooterWidgetClass = { "FoodLooterWidgetClass", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFoodLooter_HUD, FoodLooterWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFoodLooter_HUD_Statics::NewProp_FoodLooterWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFoodLooter_HUD_Statics::NewProp_FoodLooterWidgetClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFoodLooter_HUD_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFoodLooter_HUD_Statics::NewProp_FoodLooterWidgetClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFoodLooter_HUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFoodLooter_HUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFoodLooter_HUD_Statics::ClassParams = {
		&AFoodLooter_HUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFoodLooter_HUD_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFoodLooter_HUD_Statics::PropPointers),
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
	IMPLEMENT_CLASS(AFoodLooter_HUD, 3351244505);
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
