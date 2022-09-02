// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ACTIONGAME_DCharacter_generated_h
#error "DCharacter.generated.h already included, missing '#pragma once' in DCharacter.h"
#endif
#define ACTIONGAME_DCharacter_generated_h

#define FID_ActionGame_Source_ActionGame_Public_DCharacter_h_12_SPARSE_DATA
#define FID_ActionGame_Source_ActionGame_Public_DCharacter_h_12_RPC_WRAPPERS
#define FID_ActionGame_Source_ActionGame_Public_DCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_ActionGame_Source_ActionGame_Public_DCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADCharacter(); \
	friend struct Z_Construct_UClass_ADCharacter_Statics; \
public: \
	DECLARE_CLASS(ADCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionGame"), NO_API) \
	DECLARE_SERIALIZER(ADCharacter)


#define FID_ActionGame_Source_ActionGame_Public_DCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesADCharacter(); \
	friend struct Z_Construct_UClass_ADCharacter_Statics; \
public: \
	DECLARE_CLASS(ADCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActionGame"), NO_API) \
	DECLARE_SERIALIZER(ADCharacter)


#define FID_ActionGame_Source_ActionGame_Public_DCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADCharacter(ADCharacter&&); \
	NO_API ADCharacter(const ADCharacter&); \
public:


#define FID_ActionGame_Source_ActionGame_Public_DCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADCharacter(ADCharacter&&); \
	NO_API ADCharacter(const ADCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADCharacter)


#define FID_ActionGame_Source_ActionGame_Public_DCharacter_h_9_PROLOG
#define FID_ActionGame_Source_ActionGame_Public_DCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ActionGame_Source_ActionGame_Public_DCharacter_h_12_SPARSE_DATA \
	FID_ActionGame_Source_ActionGame_Public_DCharacter_h_12_RPC_WRAPPERS \
	FID_ActionGame_Source_ActionGame_Public_DCharacter_h_12_INCLASS \
	FID_ActionGame_Source_ActionGame_Public_DCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ActionGame_Source_ActionGame_Public_DCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ActionGame_Source_ActionGame_Public_DCharacter_h_12_SPARSE_DATA \
	FID_ActionGame_Source_ActionGame_Public_DCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ActionGame_Source_ActionGame_Public_DCharacter_h_12_INCLASS_NO_PURE_DECLS \
	FID_ActionGame_Source_ActionGame_Public_DCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ACTIONGAME_API UClass* StaticClass<class ADCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ActionGame_Source_ActionGame_Public_DCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
