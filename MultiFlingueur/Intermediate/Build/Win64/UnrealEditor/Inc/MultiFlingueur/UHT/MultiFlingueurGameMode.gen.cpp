// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MultiFlingueur/MultiFlingueurGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMultiFlingueurGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
MULTIFLINGUEUR_API UClass* Z_Construct_UClass_AMultiFlingueurGameMode();
MULTIFLINGUEUR_API UClass* Z_Construct_UClass_AMultiFlingueurGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_MultiFlingueur();
// End Cross Module References

// Begin Class AMultiFlingueurGameMode
void AMultiFlingueurGameMode::StaticRegisterNativesAMultiFlingueurGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMultiFlingueurGameMode);
UClass* Z_Construct_UClass_AMultiFlingueurGameMode_NoRegister()
{
	return AMultiFlingueurGameMode::StaticClass();
}
struct Z_Construct_UClass_AMultiFlingueurGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MultiFlingueurGameMode.h" },
		{ "ModuleRelativePath", "MultiFlingueurGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMultiFlingueurGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMultiFlingueurGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MultiFlingueur,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiFlingueurGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMultiFlingueurGameMode_Statics::ClassParams = {
	&AMultiFlingueurGameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMultiFlingueurGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AMultiFlingueurGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMultiFlingueurGameMode()
{
	if (!Z_Registration_Info_UClass_AMultiFlingueurGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMultiFlingueurGameMode.OuterSingleton, Z_Construct_UClass_AMultiFlingueurGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMultiFlingueurGameMode.OuterSingleton;
}
template<> MULTIFLINGUEUR_API UClass* StaticClass<AMultiFlingueurGameMode>()
{
	return AMultiFlingueurGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMultiFlingueurGameMode);
AMultiFlingueurGameMode::~AMultiFlingueurGameMode() {}
// End Class AMultiFlingueurGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Lenny_Documents_GitHub_MultiFlingueur_MultiFlingueur_Source_MultiFlingueur_MultiFlingueurGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMultiFlingueurGameMode, AMultiFlingueurGameMode::StaticClass, TEXT("AMultiFlingueurGameMode"), &Z_Registration_Info_UClass_AMultiFlingueurGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMultiFlingueurGameMode), 1248504123U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Lenny_Documents_GitHub_MultiFlingueur_MultiFlingueur_Source_MultiFlingueur_MultiFlingueurGameMode_h_2534637315(TEXT("/Script/MultiFlingueur"),
	Z_CompiledInDeferFile_FID_Users_Lenny_Documents_GitHub_MultiFlingueur_MultiFlingueur_Source_MultiFlingueur_MultiFlingueurGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Lenny_Documents_GitHub_MultiFlingueur_MultiFlingueur_Source_MultiFlingueur_MultiFlingueurGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
