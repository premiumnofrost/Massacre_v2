// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MACS_AttributeSet.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MACS_MACS_AttributeSet_generated_h
#error "MACS_AttributeSet.generated.h already included, missing '#pragma once' in MACS_AttributeSet.h"
#endif
#define MACS_MACS_AttributeSet_generated_h

#define FID_UnrealProjects_Massacre_Plugins_MACSClasses_Source_MACS_Public_MACS_AttributeSet_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_MaxStamina); \
	DECLARE_FUNCTION(execOnRep_Stamina); \
	DECLARE_FUNCTION(execOnRep_MaxCrawlingHealth); \
	DECLARE_FUNCTION(execOnRep_CrawlingHealth); \
	DECLARE_FUNCTION(execOnRep_MaxHealth); \
	DECLARE_FUNCTION(execOnRep_Health); \
	DECLARE_FUNCTION(execOnRep_MaxArmor); \
	DECLARE_FUNCTION(execOnRep_Armor);


#define FID_UnrealProjects_Massacre_Plugins_MACSClasses_Source_MACS_Public_MACS_AttributeSet_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMACS_AttributeSet(); \
	friend struct Z_Construct_UClass_UMACS_AttributeSet_Statics; \
public: \
	DECLARE_CLASS(UMACS_AttributeSet, UAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MACS"), NO_API) \
	DECLARE_SERIALIZER(UMACS_AttributeSet) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Armor=NETFIELD_REP_START, \
		MaxArmor, \
		Health, \
		MaxHealth, \
		CrawlingHealth, \
		MaxCrawlingHealth, \
		Stamina, \
		MaxStamina, \
		NETFIELD_REP_END=MaxStamina	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UMACS_AttributeSet) \
public:


#define FID_UnrealProjects_Massacre_Plugins_MACSClasses_Source_MACS_Public_MACS_AttributeSet_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMACS_AttributeSet(UMACS_AttributeSet&&); \
	UMACS_AttributeSet(const UMACS_AttributeSet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMACS_AttributeSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMACS_AttributeSet); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMACS_AttributeSet) \
	NO_API virtual ~UMACS_AttributeSet();


#define FID_UnrealProjects_Massacre_Plugins_MACSClasses_Source_MACS_Public_MACS_AttributeSet_h_21_PROLOG
#define FID_UnrealProjects_Massacre_Plugins_MACSClasses_Source_MACS_Public_MACS_AttributeSet_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_Massacre_Plugins_MACSClasses_Source_MACS_Public_MACS_AttributeSet_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_Massacre_Plugins_MACSClasses_Source_MACS_Public_MACS_AttributeSet_h_24_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_Massacre_Plugins_MACSClasses_Source_MACS_Public_MACS_AttributeSet_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MACS_API UClass* StaticClass<class UMACS_AttributeSet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_Massacre_Plugins_MACSClasses_Source_MACS_Public_MACS_AttributeSet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
