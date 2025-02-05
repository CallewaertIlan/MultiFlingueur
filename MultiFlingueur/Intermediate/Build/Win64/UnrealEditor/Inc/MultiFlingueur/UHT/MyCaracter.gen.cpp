// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MultiFlingueur/Public/MyCaracter.h"
#include "Runtime/Engine/Classes/Engine/DamageEvents.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyCaracter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDamageEvent();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
MULTIFLINGUEUR_API UClass* Z_Construct_UClass_AMyCaracter();
MULTIFLINGUEUR_API UClass* Z_Construct_UClass_AMyCaracter_NoRegister();
UPackage* Z_Construct_UPackage__Script_MultiFlingueur();
// End Cross Module References

// Begin Class AMyCaracter Function GetCurrentHealth
struct Z_Construct_UFunction_AMyCaracter_GetCurrentHealth_Statics
{
	struct MyCaracter_eventGetCurrentHealth_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Getter for Current Health.*/" },
#endif
		{ "ModuleRelativePath", "Public/MyCaracter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Getter for Current Health." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyCaracter_GetCurrentHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyCaracter_eventGetCurrentHealth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyCaracter_GetCurrentHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCaracter_GetCurrentHealth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCaracter_GetCurrentHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCaracter_GetCurrentHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCaracter, nullptr, "GetCurrentHealth", nullptr, nullptr, Z_Construct_UFunction_AMyCaracter_GetCurrentHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCaracter_GetCurrentHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyCaracter_GetCurrentHealth_Statics::MyCaracter_eventGetCurrentHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCaracter_GetCurrentHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyCaracter_GetCurrentHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMyCaracter_GetCurrentHealth_Statics::MyCaracter_eventGetCurrentHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMyCaracter_GetCurrentHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyCaracter_GetCurrentHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyCaracter::execGetCurrentHealth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetCurrentHealth();
	P_NATIVE_END;
}
// End Class AMyCaracter Function GetCurrentHealth

// Begin Class AMyCaracter Function GetMaxHealth
struct Z_Construct_UFunction_AMyCaracter_GetMaxHealth_Statics
{
	struct MyCaracter_eventGetMaxHealth_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Getter for Max Health.*/" },
#endif
		{ "ModuleRelativePath", "Public/MyCaracter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Getter for Max Health." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyCaracter_GetMaxHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyCaracter_eventGetMaxHealth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyCaracter_GetMaxHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCaracter_GetMaxHealth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCaracter_GetMaxHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCaracter_GetMaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCaracter, nullptr, "GetMaxHealth", nullptr, nullptr, Z_Construct_UFunction_AMyCaracter_GetMaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCaracter_GetMaxHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyCaracter_GetMaxHealth_Statics::MyCaracter_eventGetMaxHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCaracter_GetMaxHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyCaracter_GetMaxHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMyCaracter_GetMaxHealth_Statics::MyCaracter_eventGetMaxHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMyCaracter_GetMaxHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyCaracter_GetMaxHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyCaracter::execGetMaxHealth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMaxHealth();
	P_NATIVE_END;
}
// End Class AMyCaracter Function GetMaxHealth

// Begin Class AMyCaracter Function OnRep_CurrentHealth
struct Z_Construct_UFunction_AMyCaracter_OnRep_CurrentHealth_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyCaracter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCaracter_OnRep_CurrentHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCaracter, nullptr, "OnRep_CurrentHealth", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCaracter_OnRep_CurrentHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyCaracter_OnRep_CurrentHealth_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMyCaracter_OnRep_CurrentHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyCaracter_OnRep_CurrentHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyCaracter::execOnRep_CurrentHealth)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_CurrentHealth();
	P_NATIVE_END;
}
// End Class AMyCaracter Function OnRep_CurrentHealth

// Begin Class AMyCaracter Function SetCurrentHealth
struct Z_Construct_UFunction_AMyCaracter_SetCurrentHealth_Statics
{
	struct MyCaracter_eventSetCurrentHealth_Parms
	{
		float healthValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Setter for Current Health. Clamps the value between 0 and MaxHealth and calls OnHealthUpdate. Should only be called on the server.*/" },
#endif
		{ "ModuleRelativePath", "Public/MyCaracter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Setter for Current Health. Clamps the value between 0 and MaxHealth and calls OnHealthUpdate. Should only be called on the server." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_healthValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyCaracter_SetCurrentHealth_Statics::NewProp_healthValue = { "healthValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyCaracter_eventSetCurrentHealth_Parms, healthValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyCaracter_SetCurrentHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCaracter_SetCurrentHealth_Statics::NewProp_healthValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCaracter_SetCurrentHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCaracter_SetCurrentHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCaracter, nullptr, "SetCurrentHealth", nullptr, nullptr, Z_Construct_UFunction_AMyCaracter_SetCurrentHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCaracter_SetCurrentHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyCaracter_SetCurrentHealth_Statics::MyCaracter_eventSetCurrentHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCaracter_SetCurrentHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyCaracter_SetCurrentHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMyCaracter_SetCurrentHealth_Statics::MyCaracter_eventSetCurrentHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMyCaracter_SetCurrentHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyCaracter_SetCurrentHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyCaracter::execSetCurrentHealth)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_healthValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCurrentHealth(Z_Param_healthValue);
	P_NATIVE_END;
}
// End Class AMyCaracter Function SetCurrentHealth

// Begin Class AMyCaracter Function TakeDamage
struct Z_Construct_UFunction_AMyCaracter_TakeDamage_Statics
{
	struct MyCaracter_eventTakeDamage_Parms
	{
		float DamageTaken;
		FDamageEvent DamageEvent;
		AController* EventInstigator;
		AActor* DamageCauser;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Event for taking damage. Overridden from APawn.*/" },
#endif
		{ "ModuleRelativePath", "Public/MyCaracter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event for taking damage. Overridden from APawn." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageEvent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageTaken;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DamageEvent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EventInstigator;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyCaracter_TakeDamage_Statics::NewProp_DamageTaken = { "DamageTaken", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyCaracter_eventTakeDamage_Parms, DamageTaken), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyCaracter_TakeDamage_Statics::NewProp_DamageEvent = { "DamageEvent", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyCaracter_eventTakeDamage_Parms, DamageEvent), Z_Construct_UScriptStruct_FDamageEvent, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageEvent_MetaData), NewProp_DamageEvent_MetaData) }; // 3306819763
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyCaracter_TakeDamage_Statics::NewProp_EventInstigator = { "EventInstigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyCaracter_eventTakeDamage_Parms, EventInstigator), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMyCaracter_TakeDamage_Statics::NewProp_DamageCauser = { "DamageCauser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyCaracter_eventTakeDamage_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyCaracter_TakeDamage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyCaracter_eventTakeDamage_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyCaracter_TakeDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCaracter_TakeDamage_Statics::NewProp_DamageTaken,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCaracter_TakeDamage_Statics::NewProp_DamageEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCaracter_TakeDamage_Statics::NewProp_EventInstigator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCaracter_TakeDamage_Statics::NewProp_DamageCauser,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCaracter_TakeDamage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCaracter_TakeDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCaracter_TakeDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCaracter, nullptr, "TakeDamage", nullptr, nullptr, Z_Construct_UFunction_AMyCaracter_TakeDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCaracter_TakeDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyCaracter_TakeDamage_Statics::MyCaracter_eventTakeDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCaracter_TakeDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyCaracter_TakeDamage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMyCaracter_TakeDamage_Statics::MyCaracter_eventTakeDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMyCaracter_TakeDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyCaracter_TakeDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyCaracter::execTakeDamage)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DamageTaken);
	P_GET_STRUCT_REF(FDamageEvent,Z_Param_Out_DamageEvent);
	P_GET_OBJECT(AController,Z_Param_EventInstigator);
	P_GET_OBJECT(AActor,Z_Param_DamageCauser);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->TakeDamage(Z_Param_DamageTaken,Z_Param_Out_DamageEvent,Z_Param_EventInstigator,Z_Param_DamageCauser);
	P_NATIVE_END;
}
// End Class AMyCaracter Function TakeDamage

// Begin Class AMyCaracter
void AMyCaracter::StaticRegisterNativesAMyCaracter()
{
	UClass* Class = AMyCaracter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCurrentHealth", &AMyCaracter::execGetCurrentHealth },
		{ "GetMaxHealth", &AMyCaracter::execGetMaxHealth },
		{ "OnRep_CurrentHealth", &AMyCaracter::execOnRep_CurrentHealth },
		{ "SetCurrentHealth", &AMyCaracter::execSetCurrentHealth },
		{ "TakeDamage", &AMyCaracter::execTakeDamage },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClientMaterial_MetaData[] = {
		{ "Category", "CACA" },
		{ "ModuleRelativePath", "Public/MyCaracter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerMaterial_MetaData[] = {
		{ "Category", "CACA" },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_maxHealth_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Public/MyCaracter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_currentHealth_MetaData[] = {
		{ "ModuleRelativePath", "Public/MyCaracter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReplicationIndicatorMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ClientMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ServerMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_maxHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_currentHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyCaracter_GetCurrentHealth, "GetCurrentHealth" }, // 509947229
		{ &Z_Construct_UFunction_AMyCaracter_GetMaxHealth, "GetMaxHealth" }, // 2472039638
		{ &Z_Construct_UFunction_AMyCaracter_OnRep_CurrentHealth, "OnRep_CurrentHealth" }, // 2206556386
		{ &Z_Construct_UFunction_AMyCaracter_SetCurrentHealth, "SetCurrentHealth" }, // 3236634804
		{ &Z_Construct_UFunction_AMyCaracter_TakeDamage, "TakeDamage" }, // 2934524651
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyCaracter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCaracter_Statics::NewProp_ReplicationIndicatorMesh = { "ReplicationIndicatorMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCaracter, ReplicationIndicatorMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReplicationIndicatorMesh_MetaData), NewProp_ReplicationIndicatorMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCaracter_Statics::NewProp_ClientMaterial = { "ClientMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCaracter, ClientMaterial), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClientMaterial_MetaData), NewProp_ClientMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCaracter_Statics::NewProp_ServerMaterial = { "ServerMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCaracter, ServerMaterial), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerMaterial_MetaData), NewProp_ServerMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCaracter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCaracter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpAction_MetaData), NewProp_JumpAction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyCaracter_Statics::NewProp_maxHealth = { "maxHealth", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCaracter, maxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_maxHealth_MetaData), NewProp_maxHealth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyCaracter_Statics::NewProp_currentHealth = { "currentHealth", "OnRep_CurrentHealth", (EPropertyFlags)0x0020080100000020, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCaracter, currentHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_currentHealth_MetaData), NewProp_currentHealth_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyCaracter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCaracter_Statics::NewProp_ReplicationIndicatorMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCaracter_Statics::NewProp_ClientMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCaracter_Statics::NewProp_ServerMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCaracter_Statics::NewProp_JumpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCaracter_Statics::NewProp_maxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCaracter_Statics::NewProp_currentHealth,
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
	FuncInfo,
	Z_Construct_UClass_AMyCaracter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
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
void AMyCaracter::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_currentHealth(TEXT("currentHealth"));
	const bool bIsValid = true
		&& Name_currentHealth == ClassReps[(int32)ENetFields_Private::currentHealth].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AMyCaracter"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyCaracter);
AMyCaracter::~AMyCaracter() {}
// End Class AMyCaracter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_ljelinek_Documents_GitHub_MultiFlingueur_MultiFlingueur_Source_MultiFlingueur_Public_MyCaracter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyCaracter, AMyCaracter::StaticClass, TEXT("AMyCaracter"), &Z_Registration_Info_UClass_AMyCaracter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyCaracter), 188933057U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_ljelinek_Documents_GitHub_MultiFlingueur_MultiFlingueur_Source_MultiFlingueur_Public_MyCaracter_h_1510969032(TEXT("/Script/MultiFlingueur"),
	Z_CompiledInDeferFile_FID_Users_ljelinek_Documents_GitHub_MultiFlingueur_MultiFlingueur_Source_MultiFlingueur_Public_MyCaracter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_ljelinek_Documents_GitHub_MultiFlingueur_MultiFlingueur_Source_MultiFlingueur_Public_MyCaracter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
