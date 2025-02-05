// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MultiFlingueurProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef MULTIFLINGUEUR_MultiFlingueurProjectile_generated_h
#error "MultiFlingueurProjectile.generated.h already included, missing '#pragma once' in MultiFlingueurProjectile.h"
#endif
#define MULTIFLINGUEUR_MultiFlingueurProjectile_generated_h

#define FID_Users_icallewaert_Documents_Github_MultiFlingueur_MultiFlingueur_Source_MultiFlingueur_MultiFlingueurProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnHit);


#define FID_Users_icallewaert_Documents_Github_MultiFlingueur_MultiFlingueur_Source_MultiFlingueur_MultiFlingueurProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMultiFlingueurProjectile(); \
	friend struct Z_Construct_UClass_AMultiFlingueurProjectile_Statics; \
public: \
	DECLARE_CLASS(AMultiFlingueurProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MultiFlingueur"), NO_API) \
	DECLARE_SERIALIZER(AMultiFlingueurProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Users_icallewaert_Documents_Github_MultiFlingueur_MultiFlingueur_Source_MultiFlingueur_MultiFlingueurProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMultiFlingueurProjectile(AMultiFlingueurProjectile&&); \
	AMultiFlingueurProjectile(const AMultiFlingueurProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMultiFlingueurProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMultiFlingueurProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMultiFlingueurProjectile) \
	NO_API virtual ~AMultiFlingueurProjectile();


#define FID_Users_icallewaert_Documents_Github_MultiFlingueur_MultiFlingueur_Source_MultiFlingueur_MultiFlingueurProjectile_h_12_PROLOG
#define FID_Users_icallewaert_Documents_Github_MultiFlingueur_MultiFlingueur_Source_MultiFlingueur_MultiFlingueurProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_icallewaert_Documents_Github_MultiFlingueur_MultiFlingueur_Source_MultiFlingueur_MultiFlingueurProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_icallewaert_Documents_Github_MultiFlingueur_MultiFlingueur_Source_MultiFlingueur_MultiFlingueurProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_icallewaert_Documents_Github_MultiFlingueur_MultiFlingueur_Source_MultiFlingueur_MultiFlingueurProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MULTIFLINGUEUR_API UClass* StaticClass<class AMultiFlingueurProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_icallewaert_Documents_Github_MultiFlingueur_MultiFlingueur_Source_MultiFlingueur_MultiFlingueurProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
