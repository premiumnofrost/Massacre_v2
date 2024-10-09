/*
*Product Name: MACS Classes
*Developer/Publisher: Demonrraz
*Date: 2022/11/18
*Unreal Engine Target Version: 5.2
*Marketplace URL: https://www.unrealengine.com/marketplace/en-US/product/97bf6ab1e948431ea72ed687bed82e18
*Documentation: https://docs.google.com/document/d/1xR66uYkgiK-I2NZHtDmVA9to_jAis4V4NJo5m0Xa-7Y
*Support: https://discord.gg/sB2P2QGZp2
*/

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "MACS_AttributeSet.generated.h"

/**
 * 
 */
UCLASS()
class MACS_API UMACS_AttributeSet : public UAttributeSet
{
	GENERATED_BODY()
	//
public:
	UMACS_AttributeSet();

#pragma region MACS Set Armor
	// Our basic Armor attribute.
	UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing = OnRep_Armor, Category = "Attributes | Armor") FGameplayAttributeData Armor;
	UFUNCTION() void OnRep_Armor() { GAMEPLAYATTRIBUTE_REPNOTIFY(UMACS_AttributeSet, Armor, Armor.GetCurrentValue()); }
	static FGameplayAttribute AttributeArmor();

	// Our basic MaxArmor attribute.
	UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing = OnRep_MaxArmor, Category = "Attributes | MaxArmor") FGameplayAttributeData MaxArmor;
	UFUNCTION() void OnRep_MaxArmor() { GAMEPLAYATTRIBUTE_REPNOTIFY(UMACS_AttributeSet, MaxArmor, MaxArmor.GetCurrentValue()); }
	static FGameplayAttribute AttributeMaxArmor();
#pragma endregion MACS Set Armor

#pragma region MACS Set Health
	// Our basic Health attribute.
	UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing = OnRep_Health, Category = "Attributes | Health") FGameplayAttributeData Health;
	UFUNCTION() void OnRep_Health() { GAMEPLAYATTRIBUTE_REPNOTIFY(UMACS_AttributeSet, Health, Health.GetCurrentValue()); }
	static FGameplayAttribute AttributeHealth();

	// Our basic MaxHealth attribute.
	UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing = OnRep_MaxHealth, Category = "Attributes | MaxHealth") FGameplayAttributeData MaxHealth;
	UFUNCTION() void OnRep_MaxHealth() { GAMEPLAYATTRIBUTE_REPNOTIFY(UMACS_AttributeSet, MaxHealth, MaxHealth.GetCurrentValue()); }
	static FGameplayAttribute AttributeMaxHealth();
#pragma endregion MACS Set  Health

#pragma region MACS Set CrawlingHealth
	// Our basic CrawlingHealth attribute.
	UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing = OnRep_CrawlingHealth, Category = "Attributes | CrawlingHealth") FGameplayAttributeData CrawlingHealth;
	UFUNCTION() void OnRep_CrawlingHealth() { GAMEPLAYATTRIBUTE_REPNOTIFY(UMACS_AttributeSet, CrawlingHealth, CrawlingHealth.GetCurrentValue()); }
	static FGameplayAttribute AttributeCrawlingHealth();

	// Our basic MaxCrawlingHealth attribute.
	UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing = OnRep_MaxCrawlingHealth, Category = "Attributes | MaxCrawlingHealth") FGameplayAttributeData MaxCrawlingHealth;
	UFUNCTION() void OnRep_MaxCrawlingHealth() { GAMEPLAYATTRIBUTE_REPNOTIFY(UMACS_AttributeSet, MaxCrawlingHealth, MaxCrawlingHealth.GetCurrentValue()); }
	static FGameplayAttribute AttributeMaxCrawlingHealth();
#pragma endregion MACS Set CrawlingHealth

#pragma region MACS Set Stamina
	// Our basic Stamina attribute.
	UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing = OnRep_Stamina, Category = "Attributes | Stamina") FGameplayAttributeData Stamina;
	UFUNCTION() void OnRep_Stamina() { GAMEPLAYATTRIBUTE_REPNOTIFY(UMACS_AttributeSet, Stamina, Stamina.GetCurrentValue()); }
	static FGameplayAttribute AttributeStamina();

	// Our basic MaxStamina attribute.
	UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing = OnRep_MaxStamina, Category = "Attributes | MaxStamina") FGameplayAttributeData MaxStamina;
	UFUNCTION() void OnRep_MaxStamina() { GAMEPLAYATTRIBUTE_REPNOTIFY(UMACS_AttributeSet, MaxStamina, MaxStamina.GetCurrentValue()); }
	static FGameplayAttribute AttributeMaxStamina();
#pragma endregion MACS Set Stamina
	
	virtual void PostGameplayEffectExecute(const struct FGameplayEffectModCallbackData &Data) override;
};
