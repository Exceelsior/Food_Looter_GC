// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Food_Looter_GC/FLFood.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFLFood() {}
// Cross Module References
	FOOD_LOOTER_GC_API UClass* Z_Construct_UClass_AFLFood_NoRegister();
	FOOD_LOOTER_GC_API UClass* Z_Construct_UClass_AFLFood();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Food_Looter_GC();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameMode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AFLFood::execGetMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UStaticMeshComponent**)Z_Param__Result=P_THIS->GetMesh();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFLFood::execGetDivision)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetDivision();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFLFood::execGetPts)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPts();
		P_NATIVE_END;
	}
	void AFLFood::StaticRegisterNativesAFLFood()
	{
		UClass* Class = AFLFood::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDivision", &AFLFood::execGetDivision },
			{ "GetMesh", &AFLFood::execGetMesh },
			{ "GetPts", &AFLFood::execGetPts },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFLFood_GetDivision_Statics
	{
		struct FLFood_eventGetDivision_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFLFood_GetDivision_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLFood_eventGetDivision_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFLFood_GetDivision_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFLFood_GetDivision_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFLFood_GetDivision_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FLFood.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFLFood_GetDivision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFLFood, nullptr, "GetDivision", nullptr, nullptr, sizeof(FLFood_eventGetDivision_Parms), Z_Construct_UFunction_AFLFood_GetDivision_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFLFood_GetDivision_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFLFood_GetDivision_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFLFood_GetDivision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFLFood_GetDivision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFLFood_GetDivision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFLFood_GetMesh_Statics
	{
		struct FLFood_eventGetMesh_Parms
		{
			UStaticMeshComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFLFood_GetMesh_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFLFood_GetMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLFood_eventGetMesh_Parms, ReturnValue), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFLFood_GetMesh_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFLFood_GetMesh_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFLFood_GetMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFLFood_GetMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFLFood_GetMesh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FLFood.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFLFood_GetMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFLFood, nullptr, "GetMesh", nullptr, nullptr, sizeof(FLFood_eventGetMesh_Parms), Z_Construct_UFunction_AFLFood_GetMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFLFood_GetMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFLFood_GetMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFLFood_GetMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFLFood_GetMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFLFood_GetMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFLFood_GetPts_Statics
	{
		struct FLFood_eventGetPts_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AFLFood_GetPts_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLFood_eventGetPts_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFLFood_GetPts_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFLFood_GetPts_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFLFood_GetPts_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FLFood.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFLFood_GetPts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFLFood, nullptr, "GetPts", nullptr, nullptr, sizeof(FLFood_eventGetPts_Parms), Z_Construct_UFunction_AFLFood_GetPts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFLFood_GetPts_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFLFood_GetPts_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFLFood_GetPts_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFLFood_GetPts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFLFood_GetPts_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFLFood_NoRegister()
	{
		return AFLFood::StaticClass();
	}
	struct Z_Construct_UClass_AFLFood_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GM_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GM;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SphereComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SphereComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pts_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Pts;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DividePlayerSpeedBy_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DividePlayerSpeedBy;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFLFood_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Food_Looter_GC,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFLFood_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFLFood_GetDivision, "GetDivision" }, // 966224207
		{ &Z_Construct_UFunction_AFLFood_GetMesh, "GetMesh" }, // 3634599940
		{ &Z_Construct_UFunction_AFLFood_GetPts, "GetPts" }, // 3704234128
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFLFood_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FLFood.h" },
		{ "ModuleRelativePath", "FLFood.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFLFood_Statics::NewProp_GM_MetaData[] = {
		{ "Category", "FLFood" },
		{ "ModuleRelativePath", "FLFood.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFLFood_Statics::NewProp_GM = { "GM", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFLFood, GM), Z_Construct_UClass_AGameMode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFLFood_Statics::NewProp_GM_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFLFood_Statics::NewProp_GM_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFLFood_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "Category", "FLFood" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FLFood.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFLFood_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0020080000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFLFood, StaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFLFood_Statics::NewProp_StaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFLFood_Statics::NewProp_StaticMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFLFood_Statics::NewProp_SphereComponent_MetaData[] = {
		{ "Category", "FLFood" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FLFood.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFLFood_Statics::NewProp_SphereComponent = { "SphereComponent", nullptr, (EPropertyFlags)0x0020080000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFLFood, SphereComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFLFood_Statics::NewProp_SphereComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFLFood_Statics::NewProp_SphereComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFLFood_Statics::NewProp_Pts_MetaData[] = {
		{ "Category", "FLFood" },
		{ "ModuleRelativePath", "FLFood.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AFLFood_Statics::NewProp_Pts = { "Pts", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFLFood, Pts), METADATA_PARAMS(Z_Construct_UClass_AFLFood_Statics::NewProp_Pts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFLFood_Statics::NewProp_Pts_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFLFood_Statics::NewProp_DividePlayerSpeedBy_MetaData[] = {
		{ "Category", "FLFood" },
		{ "ModuleRelativePath", "FLFood.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFLFood_Statics::NewProp_DividePlayerSpeedBy = { "DividePlayerSpeedBy", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFLFood, DividePlayerSpeedBy), METADATA_PARAMS(Z_Construct_UClass_AFLFood_Statics::NewProp_DividePlayerSpeedBy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFLFood_Statics::NewProp_DividePlayerSpeedBy_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFLFood_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFLFood_Statics::NewProp_GM,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFLFood_Statics::NewProp_StaticMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFLFood_Statics::NewProp_SphereComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFLFood_Statics::NewProp_Pts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFLFood_Statics::NewProp_DividePlayerSpeedBy,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFLFood_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFLFood>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFLFood_Statics::ClassParams = {
		&AFLFood::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFLFood_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFLFood_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFLFood_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFLFood_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFLFood()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFLFood_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFLFood, 924179079);
	template<> FOOD_LOOTER_GC_API UClass* StaticClass<AFLFood>()
	{
		return AFLFood::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFLFood(Z_Construct_UClass_AFLFood, &AFLFood::StaticClass, TEXT("/Script/Food_Looter_GC"), TEXT("AFLFood"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFLFood);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
