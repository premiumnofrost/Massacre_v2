// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMACS_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_MACS;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_MACS()
	{
		if (!Z_Registration_Info_UPackage__Script_MACS.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/MACS",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xC8D870D6,
				0x6430279F,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_MACS.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_MACS.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_MACS(Z_Construct_UPackage__Script_MACS, TEXT("/Script/MACS"), Z_Registration_Info_UPackage__Script_MACS, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xC8D870D6, 0x6430279F));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
