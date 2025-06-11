// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef MULTIFLINGUEUR_MyProjectile_generated_h
#error "MyProjectile.generated.h already included, missing '#pragma once' in MyProjectile.h"
#endif
#define MULTIFLINGUEUR_MyProjectile_generated_h

#define FID_Users_Lenny_Documents_GitHub_MultiFlingueur_MultiFlingueur_Source_MultiFlingueur_Public_MyProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnProjectileImpact);


#define FID_Users_Lenny_Documents_GitHub_MultiFlingueur_MultiFlingueur_Source_MultiFlingueur_Public_MyProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyProjectile(); \
	friend struct Z_Construct_UClass_AMyProjectile_Statics; \
public: \
	DECLARE_CLASS(AMyProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MultiFlingueur"), NO_API) \
	DECLARE_SERIALIZER(AMyProjectile)


#define FID_Users_Lenny_Documents_GitHub_MultiFlingueur_MultiFlingueur_Source_MultiFlingueur_Public_MyProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMyProjectile(AMyProjectile&&); \
	AMyProjectile(const AMyProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyProjectile)


#define FID_Users_Lenny_Documents_GitHub_MultiFlingueur_MultiFlingueur_Source_MultiFlingueur_Public_MyProjectile_h_12_PROLOG
#define FID_Users_Lenny_Documents_GitHub_MultiFlingueur_MultiFlingueur_Source_MultiFlingueur_Public_MyProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Lenny_Documents_GitHub_MultiFlingueur_MultiFlingueur_Source_MultiFlingueur_Public_MyProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Lenny_Documents_GitHub_MultiFlingueur_MultiFlingueur_Source_MultiFlingueur_Public_MyProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_Lenny_Documents_GitHub_MultiFlingueur_MultiFlingueur_Source_MultiFlingueur_Public_MyProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MULTIFLINGUEUR_API UClass* StaticClass<class AMyProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Lenny_Documents_GitHub_MultiFlingueur_MultiFlingueur_Source_MultiFlingueur_Public_MyProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
