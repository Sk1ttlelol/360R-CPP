// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActionGame_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ActionGame;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ActionGame()
	{
		if (!Z_Registration_Info_UPackage__Script_ActionGame.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/ActionGame",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xDC03BF38,
				0x2C555819,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ActionGame.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_ActionGame.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ActionGame(Z_Construct_UPackage__Script_ActionGame, TEXT("/Script/ActionGame"), Z_Registration_Info_UPackage__Script_ActionGame, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xDC03BF38, 0x2C555819));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
