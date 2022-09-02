// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActionGame/Public/DCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDCharacter() {}
// Cross Module References
	ACTIONGAME_API UClass* Z_Construct_UClass_ADCharacter_NoRegister();
	ACTIONGAME_API UClass* Z_Construct_UClass_ADCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_ActionGame();
// End Cross Module References
	void ADCharacter::StaticRegisterNativesADCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADCharacter);
	UClass* Z_Construct_UClass_ADCharacter_NoRegister()
	{
		return ADCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ADCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_ActionGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "DCharacter.h" },
		{ "ModuleRelativePath", "Public/DCharacter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADCharacter_Statics::ClassParams = {
		&ADCharacter::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADCharacter()
	{
		if (!Z_Registration_Info_UClass_ADCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADCharacter.OuterSingleton, Z_Construct_UClass_ADCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADCharacter.OuterSingleton;
	}
	template<> ACTIONGAME_API UClass* StaticClass<ADCharacter>()
	{
		return ADCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADCharacter);
	struct Z_CompiledInDeferFile_FID_ActionGame_Source_ActionGame_Public_DCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ActionGame_Source_ActionGame_Public_DCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADCharacter, ADCharacter::StaticClass, TEXT("ADCharacter"), &Z_Registration_Info_UClass_ADCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADCharacter), 3114669012U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ActionGame_Source_ActionGame_Public_DCharacter_h_2874319141(TEXT("/Script/ActionGame"),
		Z_CompiledInDeferFile_FID_ActionGame_Source_ActionGame_Public_DCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ActionGame_Source_ActionGame_Public_DCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
