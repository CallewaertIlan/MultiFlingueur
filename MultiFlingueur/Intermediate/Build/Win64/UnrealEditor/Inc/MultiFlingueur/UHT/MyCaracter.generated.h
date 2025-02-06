// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyCaracter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AController;
struct FDamageEvent;
#ifdef MULTIFLINGUEUR_MyCaracter_generated_h
#error "MyCaracter.generated.h already included, missing '#pragma once' in MyCaracter.h"
#endif
#define MULTIFLINGUEUR_MyCaracter_generated_h

#define FID_Users_Lenny_Documents_GitHub_MultiFlingueur_MultiFlingueur_Source_MultiFlingueur_Public_MyCaracter_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void HandleFire_Implementation(); \
	DECLARE_FUNCTION(execTakeDamage); \
	DECLARE_FUNCTION(execSetCurrentHealth); \
	DECLARE_FUNCTION(execGetCurrentHealth); \
	DECLARE_FUNCTION(execGetMaxHealth); \
	DECLARE_FUNCTION(execHandleFire); \
	DECLARE_FUNCTION(execStopFire); \
	DECLARE_FUNCTION(execStartFire); \
	DECLARE_FUNCTION(execOnRep_CurrentHealth);


#define FID_Users_Lenny_Documents_GitHub_MultiFlingueur_MultiFlingueur_Source_MultiFlingueur_Public_MyCaracter_h_17_CALLBACK_WRAPPERS
#define FID_Users_Lenny_Documents_GitHub_MultiFlingueur_MultiFlingueur_Source_MultiFlingueur_Public_MyCaracter_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyCaracter(); \
	friend struct Z_Construct_UClass_AMyCaracter_Statics; \
public: \
	DECLARE_CLASS(AMyCaracter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MultiFlingueur"), NO_API) \
	DECLARE_SERIALIZER(AMyCaracter) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		currentHealth=NETFIELD_REP_START, \
		NETFIELD_REP_END=currentHealth	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Users_Lenny_Documents_GitHub_MultiFlingueur_MultiFlingueur_Source_MultiFlingueur_Public_MyCaracter_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMyCaracter(AMyCaracter&&); \
	AMyCaracter(const AMyCaracter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyCaracter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyCaracter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyCaracter) \
	NO_API virtual ~AMyCaracter();


#define FID_Users_Lenny_Documents_GitHub_MultiFlingueur_MultiFlingueur_Source_MultiFlingueur_Public_MyCaracter_h_14_PROLOG
#define FID_Users_Lenny_Documents_GitHub_MultiFlingueur_MultiFlingueur_Source_MultiFlingueur_Public_MyCaracter_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Lenny_Documents_GitHub_MultiFlingueur_MultiFlingueur_Source_MultiFlingueur_Public_MyCaracter_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Lenny_Documents_GitHub_MultiFlingueur_MultiFlingueur_Source_MultiFlingueur_Public_MyCaracter_h_17_CALLBACK_WRAPPERS \
	FID_Users_Lenny_Documents_GitHub_MultiFlingueur_MultiFlingueur_Source_MultiFlingueur_Public_MyCaracter_h_17_INCLASS_NO_PURE_DECLS \
	FID_Users_Lenny_Documents_GitHub_MultiFlingueur_MultiFlingueur_Source_MultiFlingueur_Public_MyCaracter_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MULTIFLINGUEUR_API UClass* StaticClass<class AMyCaracter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Lenny_Documents_GitHub_MultiFlingueur_MultiFlingueur_Source_MultiFlingueur_Public_MyCaracter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
