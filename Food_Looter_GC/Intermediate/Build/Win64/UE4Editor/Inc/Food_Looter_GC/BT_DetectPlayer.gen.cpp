// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Food_Looter_GC/BT_DetectPlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBT_DetectPlayer() {}
// Cross Module References
	FOOD_LOOTER_GC_API UClass* Z_Construct_UClass_UBT_DetectPlayer_NoRegister();
	FOOD_LOOTER_GC_API UClass* Z_Construct_UClass_UBT_DetectPlayer();
	AIMODULE_API UClass* Z_Construct_UClass_UBTService();
	UPackage* Z_Construct_UPackage__Script_Food_Looter_GC();
// End Cross Module References
	void UBT_DetectPlayer::StaticRegisterNativesUBT_DetectPlayer()
	{
	}
	UClass* Z_Construct_UClass_UBT_DetectPlayer_NoRegister()
	{
		return UBT_DetectPlayer::StaticClass();
	}
	struct Z_Construct_UClass_UBT_DetectPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBT_DetectPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService,
		(UObject* (*)())Z_Construct_UPackage__Script_Food_Looter_GC,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBT_DetectPlayer_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BT_DetectPlayer.h" },
		{ "ModuleRelativePath", "BT_DetectPlayer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBT_DetectPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBT_DetectPlayer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBT_DetectPlayer_Statics::ClassParams = {
		&UBT_DetectPlayer::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBT_DetectPlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBT_DetectPlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBT_DetectPlayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBT_DetectPlayer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBT_DetectPlayer, 2475127730);
	template<> FOOD_LOOTER_GC_API UClass* StaticClass<UBT_DetectPlayer>()
	{
		return UBT_DetectPlayer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBT_DetectPlayer(Z_Construct_UClass_UBT_DetectPlayer, &UBT_DetectPlayer::StaticClass, TEXT("/Script/Food_Looter_GC"), TEXT("UBT_DetectPlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBT_DetectPlayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
