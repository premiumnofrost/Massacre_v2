// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MACS/Public/MACS_Character.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMACS_Character() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
MACS_API UClass* Z_Construct_UClass_AMACS_Character();
MACS_API UClass* Z_Construct_UClass_AMACS_Character_NoRegister();
MACS_API UClass* Z_Construct_UClass_UMACS_AttributeSet_NoRegister();
UPackage* Z_Construct_UPackage__Script_MACS();
// End Cross Module References

// Begin Class AMACS_Character Function GetAbilitySystemComponent
struct Z_Construct_UFunction_AMACS_Character_GetAbilitySystemComponent_Statics
{
	struct MACS_Character_eventGetAbilitySystemComponent_Parms
	{
		UAbilitySystemComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MACS Character | MACS Ability System Component" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Helper function to get our ability system component (Used by the IAbilitySystemInterface).\n" },
#endif
		{ "ModuleRelativePath", "Public/MACS_Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Helper function to get our ability system component (Used by the IAbilitySystemInterface)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMACS_Character_GetAbilitySystemComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MACS_Character_eventGetAbilitySystemComponent_Parms, ReturnValue), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMACS_Character_GetAbilitySystemComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMACS_Character_GetAbilitySystemComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMACS_Character_GetAbilitySystemComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMACS_Character_GetAbilitySystemComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMACS_Character, nullptr, "GetAbilitySystemComponent", nullptr, nullptr, Z_Construct_UFunction_AMACS_Character_GetAbilitySystemComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMACS_Character_GetAbilitySystemComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMACS_Character_GetAbilitySystemComponent_Statics::MACS_Character_eventGetAbilitySystemComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMACS_Character_GetAbilitySystemComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMACS_Character_GetAbilitySystemComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMACS_Character_GetAbilitySystemComponent_Statics::MACS_Character_eventGetAbilitySystemComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMACS_Character_GetAbilitySystemComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMACS_Character_GetAbilitySystemComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMACS_Character::execGetAbilitySystemComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAbilitySystemComponent**)Z_Param__Result=P_THIS->GetAbilitySystemComponent();
	P_NATIVE_END;
}
// End Class AMACS_Character Function GetAbilitySystemComponent

// Begin Class AMACS_Character
void AMACS_Character::StaticRegisterNativesAMACS_Character()
{
	UClass* Class = AMACS_Character::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAbilitySystemComponent", &AMACS_Character::execGetAbilitySystemComponent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMACS_Character);
UClass* Z_Construct_UClass_AMACS_Character_NoRegister()
{
	return AMACS_Character::StaticClass();
}
struct Z_Construct_UClass_AMACS_Character_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MACS_Character.h" },
		{ "ModuleRelativePath", "Public/MACS_Character.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MACS_AbilitySystemComponent_MetaData[] = {
		{ "Category", "MACS Character | MACS Ability System Component" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Our ability system component.\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MACS_Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Our ability system component." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MACS_AttributeSet_MetaData[] = {
		{ "Category", "MACS Character | MACS Attribute Set" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Our attribute set (From player state).\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MACS_Character.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Our attribute set (From player state)." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MACS_AbilitySystemComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MACS_AttributeSet;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMACS_Character_GetAbilitySystemComponent, "GetAbilitySystemComponent" }, // 178939693
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMACS_Character>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMACS_Character_Statics::NewProp_MACS_AbilitySystemComponent = { "MACS_AbilitySystemComponent", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMACS_Character, MACS_AbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MACS_AbilitySystemComponent_MetaData), NewProp_MACS_AbilitySystemComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMACS_Character_Statics::NewProp_MACS_AttributeSet = { "MACS_AttributeSet", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMACS_Character, MACS_AttributeSet), Z_Construct_UClass_UMACS_AttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MACS_AttributeSet_MetaData), NewProp_MACS_AttributeSet_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMACS_Character_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMACS_Character_Statics::NewProp_MACS_AbilitySystemComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMACS_Character_Statics::NewProp_MACS_AttributeSet,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMACS_Character_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMACS_Character_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_MACS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMACS_Character_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AMACS_Character_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(AMACS_Character, IAbilitySystemInterface), false },  // 2272790346
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMACS_Character_Statics::ClassParams = {
	&AMACS_Character::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMACS_Character_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMACS_Character_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMACS_Character_Statics::Class_MetaDataParams), Z_Construct_UClass_AMACS_Character_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMACS_Character()
{
	if (!Z_Registration_Info_UClass_AMACS_Character.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMACS_Character.OuterSingleton, Z_Construct_UClass_AMACS_Character_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMACS_Character.OuterSingleton;
}
template<> MACS_API UClass* StaticClass<AMACS_Character>()
{
	return AMACS_Character::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMACS_Character);
AMACS_Character::~AMACS_Character() {}
// End Class AMACS_Character

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_Massacre_Plugins_MACSClasses_Source_MACS_Public_MACS_Character_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMACS_Character, AMACS_Character::StaticClass, TEXT("AMACS_Character"), &Z_Registration_Info_UClass_AMACS_Character, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMACS_Character), 2419345245U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_Massacre_Plugins_MACSClasses_Source_MACS_Public_MACS_Character_h_2964310813(TEXT("/Script/MACS"),
	Z_CompiledInDeferFile_FID_UnrealProjects_Massacre_Plugins_MACSClasses_Source_MACS_Public_MACS_Character_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_Massacre_Plugins_MACSClasses_Source_MACS_Public_MACS_Character_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
