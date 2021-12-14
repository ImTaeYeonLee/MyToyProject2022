// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThirdPerson_Fantasy/ThirdPerson_FantasyGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThirdPerson_FantasyGameMode() {}
// Cross Module References
	THIRDPERSON_FANTASY_API UClass* Z_Construct_UClass_AThirdPerson_FantasyGameMode_NoRegister();
	THIRDPERSON_FANTASY_API UClass* Z_Construct_UClass_AThirdPerson_FantasyGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ThirdPerson_Fantasy();
// End Cross Module References
	void AThirdPerson_FantasyGameMode::StaticRegisterNativesAThirdPerson_FantasyGameMode()
	{
	}
	UClass* Z_Construct_UClass_AThirdPerson_FantasyGameMode_NoRegister()
	{
		return AThirdPerson_FantasyGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AThirdPerson_FantasyGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AThirdPerson_FantasyGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ThirdPerson_Fantasy,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThirdPerson_FantasyGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ThirdPerson_FantasyGameMode.h" },
		{ "ModuleRelativePath", "ThirdPerson_FantasyGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AThirdPerson_FantasyGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AThirdPerson_FantasyGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AThirdPerson_FantasyGameMode_Statics::ClassParams = {
		&AThirdPerson_FantasyGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AThirdPerson_FantasyGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPerson_FantasyGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AThirdPerson_FantasyGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AThirdPerson_FantasyGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AThirdPerson_FantasyGameMode, 2032041623);
	template<> THIRDPERSON_FANTASY_API UClass* StaticClass<AThirdPerson_FantasyGameMode>()
	{
		return AThirdPerson_FantasyGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AThirdPerson_FantasyGameMode(Z_Construct_UClass_AThirdPerson_FantasyGameMode, &AThirdPerson_FantasyGameMode::StaticClass, TEXT("/Script/ThirdPerson_Fantasy"), TEXT("AThirdPerson_FantasyGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AThirdPerson_FantasyGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
