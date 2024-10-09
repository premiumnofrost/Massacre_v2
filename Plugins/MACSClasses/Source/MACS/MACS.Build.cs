/*
*Product Name: MACS Classes
*Developer/Publisher: Demonrraz
*Date: 2022/11/18
*Unreal Engine Target Version: 5.2
*Marketplace URL: https://www.unrealengine.com/marketplace/en-US/product/97bf6ab1e948431ea72ed687bed82e18
*Documentation: https://docs.google.com/document/d/1xR66uYkgiK-I2NZHtDmVA9to_jAis4V4NJo5m0Xa-7Y
*Support: https://discord.gg/sB2P2QGZp2
*/

using UnrealBuildTool;

public class MACS : ModuleRules
{
	public MACS(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicIncludePaths.AddRange(
			new string[] {
				// ... add public include paths required here ...
			}
			);
				
		
		PrivateIncludePaths.AddRange(
			new string[] {
				// ... add other private include paths required here ...
			}
			);
			
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				#region MACS Required to use GAS inside this plugin
				"GameplayAbilities",
				"GameplayTags",
				"GameplayTasks",
				#endregion MACS
				// ... add other public dependencies that you statically link with here ...
			}
			);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",
				// ... add private dependencies that you statically link with here ...	
			}
			);
		
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);
	}
}
