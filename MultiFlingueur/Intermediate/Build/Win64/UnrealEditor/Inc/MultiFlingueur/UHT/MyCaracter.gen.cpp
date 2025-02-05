// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MultiFlingueur/Public/MyCaracter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyCaracter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
MULTIFLINGUEUR_API UClass* Z_Construct_UClass_AMyCaracter();
MULTIFLINGUEUR_API UClass* Z_Construct_UClass_AMyCaracter_NoRegister();
UPackage* Z_Construct_UPackage__Script_MultiFlingueur();
// End Cross Module References

// Begin Class AMyCaracter
void AMyCaracter::StaticRegisterNativesAMyCaracter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyCaracter);
UClass* Z_Construct_UClass_AMyCaracter_NoRegister()
{
	return AMyCaracter::StaticClass();
}
struct Z_Construct_UClass_AMyCaracter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MyCaracter.h" },
		{ "ModuleRelativePath", "Public/MyCaracter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReplicationIndicatorMesh_MetaData[] = {
		{ "Category", "Visuals" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MyCaracter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Jump Input Action */" },
#endif
		{ "ModuleRelativePath", "Public/MyCaracter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Jump Input Action" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReplicationIndicatorMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyCaracter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCaracter_Statics::NewProp_ReplicationIndicatorMesh = { "ReplicationIndicatorMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCaracter, ReplicationIndicatorMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReplicationIndicatorMesh_MetaData), NewProp_ReplicationIndicatorMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCaracter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCaracter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpAction_MetaData), NewProp_JumpAction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyCaracter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCaracter_Statics::NewProp_ReplicationIndicatorMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCaracter_Statics::NewProp_JumpAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCaracter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMyCaracter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_MultiFlingueur,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCaracter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyCaracter_Statics::ClassParams = {
	&AMyCaracter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMyCaracter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMyCaracter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCaracter_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyCaracter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyCaracter()
{
	if (!Z_Registration_Info_UClass_AMyCaracter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyCaracter.OuterSingleton, Z_Construct_UClass_AMyCaracter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyCaracter.OuterSingleton;
}
template<> MULTIFLINGUEUR_API UClass* StaticClass<AMyCaracter>()
{
	return AMyCaracter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyCaracter);
AMyCaracter::~AMyCaracter() {}
// End Class AMyCaracter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_icallewaert_Documents_Unreal_Projects_TIRER_CPP_MultiCacaRacter_MultiFlingueur_Source_MultiFlingueur_Public_MyCaracter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyCaracter, AMyCaracter::StaticClass, TEXT("AMyCaracter"), &Z_Registration_Info_UClass_AMyCaracter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyCaracter), 1341277643U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_icallewaert_Documents_Unreal_Projects_TIRER_CPP_MultiCacaRacter_MultiFlingueur_Source_MultiFlingueur_Public_MyCaracter_h_3313743203(TEXT("/Script/MultiFlingueur"),
	Z_CompiledInDeferFile_FID_Users_icallewaert_Documents_Unreal_Projects_TIRER_CPP_MultiCacaRacter_MultiFlingueur_Source_MultiFlingueur_Public_MyCaracter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_icallewaert_Documents_Unreal_Projects_TIRER_CPP_MultiCacaRacter_MultiFlingueur_Source_MultiFlingueur_Public_MyCaracter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
