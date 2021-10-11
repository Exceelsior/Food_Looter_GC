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
	ENGINE_API UClass* Z_Construct_UClass_AGameMode();
	UPackage* Z_Construct_UPackage__Script_Food_Looter_GC();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FOOD_LOOTER_GC_API UClass* Z_Construct_UClass_AGameManager_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AFood_Looter_GCGameModeBase::execManageIa)
	{
		P_GET_TARRAY(AActor*,Z_Param_List);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Timer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ManageIa(Z_Param_List,Z_Param_Timer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFood_Looter_GCGameModeBase::execCompareFood)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CompareFood();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFood_Looter_GCGameModeBase::execBeginPlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BeginPlay();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFood_Looter_GCGameModeBase::execTick)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Tick(Z_Param_DeltaSeconds);
		P_NATIVE_END;
	}
	void AFood_Looter_GCGameModeBase::StaticRegisterNativesAFood_Looter_GCGameModeBase()
	{
		UClass* Class = AFood_Looter_GCGameModeBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeginPlay", &AFood_Looter_GCGameModeBase::execBeginPlay },
			{ "CompareFood", &AFood_Looter_GCGameModeBase::execCompareFood },
			{ "ManageIa", &AFood_Looter_GCGameModeBase::execManageIa },
			{ "Tick", &AFood_Looter_GCGameModeBase::execTick },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFood_Looter_GCGameModeBase_BeginPlay_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFood_Looter_GCGameModeBase_BeginPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Food_Looter_GCGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFood_Looter_GCGameModeBase_BeginPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFood_Looter_GCGameModeBase, nullptr, "BeginPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFood_Looter_GCGameModeBase_BeginPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFood_Looter_GCGameModeBase_BeginPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFood_Looter_GCGameModeBase_BeginPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFood_Looter_GCGameModeBase_BeginPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFood_Looter_GCGameModeBase_CompareFood_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFood_Looter_GCGameModeBase_CompareFood_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Food_Looter_GCGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFood_Looter_GCGameModeBase_CompareFood_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFood_Looter_GCGameModeBase, nullptr, "CompareFood", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFood_Looter_GCGameModeBase_CompareFood_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFood_Looter_GCGameModeBase_CompareFood_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFood_Looter_GCGameModeBase_CompareFood()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFood_Looter_GCGameModeBase_CompareFood_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFood_Looter_GCGameModeBase_ManageIa_Statics
	{
		struct Food_Looter_GCGameModeBase_eventManageIa_Parms
		{
			TArray<AActor*> List;
			float Timer;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_List_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_List;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Timer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFood_Looter_GCGameModeBase_ManageIa_Statics::NewProp_List_Inner = { "List", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AFood_Looter_GCGameModeBase_ManageIa_Statics::NewProp_List = { "List", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Food_Looter_GCGameModeBase_eventManageIa_Parms, List), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFood_Looter_GCGameModeBase_ManageIa_Statics::NewProp_Timer = { "Timer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Food_Looter_GCGameModeBase_eventManageIa_Parms, Timer), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFood_Looter_GCGameModeBase_ManageIa_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFood_Looter_GCGameModeBase_ManageIa_Statics::NewProp_List_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFood_Looter_GCGameModeBase_ManageIa_Statics::NewProp_List,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFood_Looter_GCGameModeBase_ManageIa_Statics::NewProp_Timer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFood_Looter_GCGameModeBase_ManageIa_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Food_Looter_GCGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFood_Looter_GCGameModeBase_ManageIa_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFood_Looter_GCGameModeBase, nullptr, "ManageIa", nullptr, nullptr, sizeof(Food_Looter_GCGameModeBase_eventManageIa_Parms), Z_Construct_UFunction_AFood_Looter_GCGameModeBase_ManageIa_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFood_Looter_GCGameModeBase_ManageIa_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFood_Looter_GCGameModeBase_ManageIa_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFood_Looter_GCGameModeBase_ManageIa_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFood_Looter_GCGameModeBase_ManageIa()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFood_Looter_GCGameModeBase_ManageIa_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFood_Looter_GCGameModeBase_Tick_Statics
	{
		struct Food_Looter_GCGameModeBase_eventTick_Parms
		{
			float DeltaSeconds;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFood_Looter_GCGameModeBase_Tick_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Food_Looter_GCGameModeBase_eventTick_Parms, DeltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFood_Looter_GCGameModeBase_Tick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFood_Looter_GCGameModeBase_Tick_Statics::NewProp_DeltaSeconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFood_Looter_GCGameModeBase_Tick_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Functions\n" },
		{ "ModuleRelativePath", "Food_Looter_GCGameModeBase.h" },
		{ "ToolTip", "Functions" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFood_Looter_GCGameModeBase_Tick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFood_Looter_GCGameModeBase, nullptr, "Tick", nullptr, nullptr, sizeof(Food_Looter_GCGameModeBase_eventTick_Parms), Z_Construct_UFunction_AFood_Looter_GCGameModeBase_Tick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFood_Looter_GCGameModeBase_Tick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFood_Looter_GCGameModeBase_Tick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFood_Looter_GCGameModeBase_Tick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFood_Looter_GCGameModeBase_Tick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFood_Looter_GCGameModeBase_Tick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFood_Looter_GCGameModeBase_NoRegister()
	{
		return AFood_Looter_GCGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AFood_Looter_GCGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Win_MetaData[];
#endif
		static void NewProp_Win_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Win;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TempAct_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TempAct;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PtSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PtSpawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SaveTimerBetweenEnemies_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SaveTimerBetweenEnemies;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CanDecreaseTimer_MetaData[];
#endif
		static void NewProp_CanDecreaseTimer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CanDecreaseTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnemyClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_EnemyClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GM_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GM;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Timer1Min_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Timer1Min;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimerBetweenEnemies_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimerBetweenEnemies;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFood_Looter_GCGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_Food_Looter_GC,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFood_Looter_GCGameModeBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFood_Looter_GCGameModeBase_BeginPlay, "BeginPlay" }, // 648277488
		{ &Z_Construct_UFunction_AFood_Looter_GCGameModeBase_CompareFood, "CompareFood" }, // 3382200008
		{ &Z_Construct_UFunction_AFood_Looter_GCGameModeBase_ManageIa, "ManageIa" }, // 2920333890
		{ &Z_Construct_UFunction_AFood_Looter_GCGameModeBase_Tick, "Tick" }, // 2611564895
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFood_Looter_GCGameModeBase_Statics::NewProp_Win_MetaData[] = {
		{ "Category", "Food_Looter_GCGameModeBase" },
		{ "ModuleRelativePath", "Food_Looter_GCGameModeBase.h" },
	};
#endif
	void Z_Construct_UClass_AFood_Looter_GCGameModeBase_Statics::NewProp_Win_SetBit(void* Obj)
	{
		((AFood_Looter_GCGameModeBase*)Obj)->Win = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFood_Looter_GCGameModeBase_Statics::NewProp_Win = { "Win", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFood_Looter_GCGameModeBase), &Z_Construct_UClass_AFood_Looter_GCGameModeBase_Statics::NewProp_Win_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFood_Looter_GCGameModeBase_Statics::NewProp_Win_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFood_Looter_GCGameModeBase_Statics::NewProp_Win_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFood_Looter_GCGameModeBase_Statics::NewProp_TempAct_MetaData[] = {
		{ "Category", "Food_Looter_GCGameModeBase" },
		{ "Comment", "//Temp actor that will be instantiated\n" },
		{ "ModuleRelativePath", "Food_Looter_GCGameModeBase.h" },
		{ "ToolTip", "Temp actor that will be instantiated" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFood_Looter_GCGameModeBase_Statics::NewProp_TempAct = { "TempAct", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFood_Looter_GCGameModeBase, TempAct), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFood_Looter_GCGameModeBase_Statics::NewProp_TempAct_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFood_Looter_GCGameModeBase_Statics::NewProp_TempAct_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFood_Looter_GCGameModeBase_Statics::NewProp_PtSpawn_MetaData[] = {
		{ "Category", "Food_Looter_GCGameModeBase" },
		{ "Comment", "//Spawn point of enemies\n" },
		{ "ModuleRelativePath", "Food_Looter_GCGameModeBase.h" },
		{ "ToolTip", "Spawn point of enemies" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFood_Looter_GCGameModeBase_Statics::NewProp_PtSpawn = { "PtSpawn", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFood_Looter_GCGameModeBase, PtSpawn), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFood_Looter_GCGameModeBase_Statics::NewProp_PtSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFood_Looter_GCGameModeBase_Statics::NewProp_PtSpawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFood_Looter_GCGameModeBase_Statics::NewProp_SaveTimerBetweenEnemies_MetaData[] = {
		{ "Category", "Food_Looter_GCGameModeBase" },
		{ "ModuleRelativePath", "Food_Looter_GCGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFood_Looter_GCGameModeBase_Statics::NewProp_SaveTimerBetweenEnemies = { "SaveTimerBetweenEnemies", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFood_Looter_GCGameModeBase, SaveTimerBetweenEnemies), METADATA_PARAMS(Z_Construct_UClass_AFood_Looter_GCGameModeBase_Statics::NewProp_SaveTimerBetweenEnemies_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFood_Looter_GCGameModeBase_Statics::NewProp_SaveTimerBetweenEnemies_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFood_Looter_GCGameModeBase_Statics::NewProp_CanDecreaseTimer_MetaData[] = {
		{ "Category", "Food_Looter_GCGameModeBase" },
		{ "ModuleRelativePath", "Food_Looter_GCGameModeBase.h" },
	};
#endif
	void Z_Construct_UClass_AFood_Looter_GCGameModeBase_Statics::NewProp_CanDecreaseTimer_SetBit(void* Obj)
	{
		((AFood_Looter_GCGameModeBase*)Obj)->CanDecreaseTimer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFood_Looter_GCGameModeBase_Statics::NewProp_CanDecreaseTimer = { "CanDecreaseTimer", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFood_Looter_GCGameModeBase), &Z_Construct_UClass_AFood_Looter_GCGameModeBase_Statics::NewProp_CanDecreaseTimer_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFood_Looter_GCGameModeBase_Statics::NewProp_CanDecreaseTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFood_Looter_GCGameModeBase_Statics::NewProp_CanDecreaseTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFood_Looter_GCGameModeBase_Statics::NewProp_EnemyClass_MetaData[] = {
		{ "Category", "Food_Looter_GCGameModeBase" },
		{ "ModuleRelativePath", "Food_Looter_GCGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFood_Looter_GCGameModeBase_Statics::NewProp_EnemyClass = { "EnemyClass", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFood_Looter_GCGameModeBase, EnemyClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AFood_Looter_GCGameModeBase_Statics::NewProp_EnemyClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFood_Looter_GCGameModeBase_Statics::NewProp_EnemyClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFood_Looter_GCGameModeBase_Statics::NewProp_GM_MetaData[] = {
		{ "Category", "Food_Looter_GCGameModeBase" },
		{ "ModuleRelativePath", "Food_Looter_GCGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFood_Looter_GCGameModeBase_Statics::NewProp_GM = { "GM", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFood_Looter_GCGameModeBase, GM), Z_Construct_UClass_AGameManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFood_Looter_GCGameModeBase_Statics::NewProp_GM_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFood_Looter_GCGameModeBase_Statics::NewProp_GM_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFood_Looter_GCGameModeBase_Statics::NewProp_Timer1Min_MetaData[] = {
		{ "Category", "Food_Looter_GCGameModeBase" },
		{ "ModuleRelativePath", "Food_Looter_GCGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFood_Looter_GCGameModeBase_Statics::NewProp_Timer1Min = { "Timer1Min", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFood_Looter_GCGameModeBase, Timer1Min), METADATA_PARAMS(Z_Construct_UClass_AFood_Looter_GCGameModeBase_Statics::NewProp_Timer1Min_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFood_Looter_GCGameModeBase_Statics::NewProp_Timer1Min_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFood_Looter_GCGameModeBase_Statics::NewProp_TimerBetweenEnemies_MetaData[] = {
		{ "Category", "Food_Looter_GCGameModeBase" },
		{ "ModuleRelativePath", "Food_Looter_GCGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFood_Looter_GCGameModeBase_Statics::NewProp_TimerBetweenEnemies = { "TimerBetweenEnemies", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFood_Looter_GCGameModeBase, TimerBetweenEnemies), METADATA_PARAMS(Z_Construct_UClass_AFood_Looter_GCGameModeBase_Statics::NewProp_TimerBetweenEnemies_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFood_Looter_GCGameModeBase_Statics::NewProp_TimerBetweenEnemies_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFood_Looter_GCGameModeBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFood_Looter_GCGameModeBase_Statics::NewProp_Win,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFood_Looter_GCGameModeBase_Statics::NewProp_TempAct,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFood_Looter_GCGameModeBase_Statics::NewProp_PtSpawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFood_Looter_GCGameModeBase_Statics::NewProp_SaveTimerBetweenEnemies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFood_Looter_GCGameModeBase_Statics::NewProp_CanDecreaseTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFood_Looter_GCGameModeBase_Statics::NewProp_EnemyClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFood_Looter_GCGameModeBase_Statics::NewProp_GM,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFood_Looter_GCGameModeBase_Statics::NewProp_Timer1Min,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFood_Looter_GCGameModeBase_Statics::NewProp_TimerBetweenEnemies,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFood_Looter_GCGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFood_Looter_GCGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFood_Looter_GCGameModeBase_Statics::ClassParams = {
		&AFood_Looter_GCGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFood_Looter_GCGameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFood_Looter_GCGameModeBase_Statics::PropPointers),
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
	IMPLEMENT_CLASS(AFood_Looter_GCGameModeBase, 256413131);
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
