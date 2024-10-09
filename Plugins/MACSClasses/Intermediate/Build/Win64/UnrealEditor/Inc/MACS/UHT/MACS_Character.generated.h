// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MACS_Character.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAbilitySystemComponent;
#ifdef MACS_MACS_Character_generated_h
#error "MACS_Character.generated.h already included, missing '#pragma once' in MACS_Character.h"
#endif
#define MACS_MACS_Character_generated_h

#define FID_UnrealProjects_Massacre_Plugins_MACSClasses_Source_MACS_Public_MACS_Character_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetAbilitySystemComponent);


#define FID_UnrealProjects_Massacre_Plugins_MACSClasses_Source_MACS_Public_MACS_Character_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMACS_Character(); \
	friend struct Z_Construct_UClass_AMACS_Character_Statics; \
public: \
	DECLARE_CLASS(AMACS_Character, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MACS"), NO_API) \
	DECLARE_SERIALIZER(AMACS_Character) \
	virtual UObject* _getUObject() const override { return const_cast<AMACS_Character*>(this); }


#define FID_UnrealProjects_Massacre_Plugins_MACSClasses_Source_MACS_Public_MACS_Character_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMACS_Character(AMACS_Character&&); \
	AMACS_Character(const AMACS_Character&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMACS_Character); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMACS_Character); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMACS_Character) \
	NO_API virtual ~AMACS_Character();


#define FID_UnrealProjects_Massacre_Plugins_MACSClasses_Source_MACS_Public_MACS_Character_h_19_PROLOG
#define FID_UnrealProjects_Massacre_Plugins_MACSClasses_Source_MACS_Public_MACS_Character_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_Massacre_Plugins_MACSClasses_Source_MACS_Public_MACS_Character_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_Massacre_Plugins_MACSClasses_Source_MACS_Public_MACS_Character_h_22_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_Massacre_Plugins_MACSClasses_Source_MACS_Public_MACS_Character_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MACS_API UClass* StaticClass<class AMACS_Character>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_Massacre_Plugins_MACSClasses_Source_MACS_Public_MACS_Character_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
