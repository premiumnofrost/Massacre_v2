/*
*Product Name: MACS Classes
*Developer/Publisher: Demonrraz
*Date: 2022/11/18
*Unreal Engine Target Version: 5.2
*Marketplace URL: https://www.unrealengine.com/marketplace/en-US/product/97bf6ab1e948431ea72ed687bed82e18
*Documentation: https://docs.google.com/document/d/1xR66uYkgiK-I2NZHtDmVA9to_jAis4V4NJo5m0Xa-7Y
*Support: https://discord.gg/sB2P2QGZp2
*/

#include "MACS_AttributeSet.h"
#include "GameplayEffectExtension.h"
#include "Net/UnrealNetwork.h"

UMACS_AttributeSet::UMACS_AttributeSet()
{
#pragma region MACS Armor
	Armor = FGameplayAttributeData(100.f);
	MaxArmor = FGameplayAttributeData(100.f);
#pragma endregion MACS Armor
	
#pragma region MACS Health
	Health = FGameplayAttributeData(100.f);
	MaxHealth = FGameplayAttributeData(100.f);
#pragma endregion MACS Health

#pragma region MACS CrawlingHealth
	CrawlingHealth = FGameplayAttributeData(100.f);
	MaxCrawlingHealth = FGameplayAttributeData(100.f);
#pragma endregion MACS CrawlingHealth

#pragma region MACS Stamina
	Stamina = FGameplayAttributeData(100.f);
	MaxStamina = FGameplayAttributeData(100.f);
#pragma endregion MACS Stamina
}

#pragma region MACS Armor
// Helper function for attribute comparison. (EX: Can be used to check against this attribute during Pre / Post Gameplay Effect Execute)
FGameplayAttribute UMACS_AttributeSet::AttributeArmor()
{
	static FProperty* Property = FindFieldChecked<FProperty>(UMACS_AttributeSet::StaticClass(), GET_MEMBER_NAME_CHECKED(UMACS_AttributeSet, Armor));
	return FGameplayAttribute(Property);
}

// Helper function for attribute comparison. (EX: Can be used to check against this attribute during Pre / Post Gameplay Effect Execute)
FGameplayAttribute UMACS_AttributeSet::AttributeMaxArmor()
{
	static FProperty* Property = FindFieldChecked<FProperty>(UMACS_AttributeSet::StaticClass(), GET_MEMBER_NAME_CHECKED(UMACS_AttributeSet, MaxArmor));
	return FGameplayAttribute(Property);
}
#pragma endregion MACS Armor

#pragma region MACS Health
// Helper function for attribute comparison. (EX: Can be used to check against this attribute during Pre / Post Gameplay Effect Execute)
FGameplayAttribute UMACS_AttributeSet::AttributeHealth()
{
	static FProperty* Property = FindFieldChecked<FProperty>(UMACS_AttributeSet::StaticClass(), GET_MEMBER_NAME_CHECKED(UMACS_AttributeSet, Health));
	return FGameplayAttribute(Property);
}

// Helper function for attribute comparison. (EX: Can be used to check against this attribute during Pre / Post Gameplay Effect Execute)
FGameplayAttribute UMACS_AttributeSet::AttributeMaxHealth()
{
	static FProperty* Property = FindFieldChecked<FProperty>(UMACS_AttributeSet::StaticClass(), GET_MEMBER_NAME_CHECKED(UMACS_AttributeSet, MaxHealth));
	return FGameplayAttribute(Property);
}
#pragma endregion MACS Health

#pragma region MACS CrawlingHealth
// Helper function for attribute comparison. (EX: Can be used to check against this attribute during Pre / Post Gameplay Effect Execute)
FGameplayAttribute UMACS_AttributeSet::AttributeCrawlingHealth()
{
	static FProperty* Property = FindFieldChecked<FProperty>(UMACS_AttributeSet::StaticClass(), GET_MEMBER_NAME_CHECKED(UMACS_AttributeSet, CrawlingHealth));
	return FGameplayAttribute(Property);
}

// Helper function for attribute comparison. (EX: Can be used to check against this attribute during Pre / Post Gameplay Effect Execute)
FGameplayAttribute UMACS_AttributeSet::AttributeMaxCrawlingHealth()
{
	static FProperty* Property = FindFieldChecked<FProperty>(UMACS_AttributeSet::StaticClass(), GET_MEMBER_NAME_CHECKED(UMACS_AttributeSet, MaxCrawlingHealth));
	return FGameplayAttribute(Property);
}
#pragma endregion MACS CrawlingHealth

#pragma region MACS Stamina
// Helper function for attribute comparison. (EX: Can be used to check against this attribute during Pre / Post Gameplay Effect Execute)
FGameplayAttribute UMACS_AttributeSet::AttributeStamina()
{
	static FProperty* Property = FindFieldChecked<FProperty>(UMACS_AttributeSet::StaticClass(), GET_MEMBER_NAME_CHECKED(UMACS_AttributeSet, Stamina));
	return FGameplayAttribute(Property);
}

// Helper function for attribute comparison. (EX: Can be used to check against this attribute during Pre / Post Gameplay Effect Execute)
FGameplayAttribute UMACS_AttributeSet::AttributeMaxStamina()
{
	static FProperty* Property = FindFieldChecked<FProperty>(UMACS_AttributeSet::StaticClass(), GET_MEMBER_NAME_CHECKED(UMACS_AttributeSet, MaxStamina));
	return FGameplayAttribute(Property);
}
#pragma endregion MACS Stamina

// This is called after a GameplayEffect has ben executed. Can be used to Clamp too or useful to check for things such as Health <=0 to handle death etc.
void UMACS_AttributeSet::PostGameplayEffectExecute(const struct FGameplayEffectModCallbackData &Data)
{
	Super::PostGameplayEffectExecute(Data);
	
#pragma region MACS Armor
	//Verify if attribute that change is Armor
	if (Data.EvaluatedData.Attribute.GetUProperty() == FindFieldChecked<FProperty>(UMACS_AttributeSet::StaticClass(), GET_MEMBER_NAME_CHECKED(UMACS_AttributeSet, Armor)))
	{
		Armor.SetCurrentValue(FMath::Clamp(Armor.GetCurrentValue(), 0.0f, MaxArmor.GetCurrentValue()));
		Armor.SetBaseValue(FMath::Clamp(Armor.GetCurrentValue(), 0.0f, MaxArmor.GetCurrentValue()));
	}
#pragma endregion MACS Armor
	
#pragma region MACS Health
	//Verify if attribute that change is HP
	if (Data.EvaluatedData.Attribute.GetUProperty() == FindFieldChecked<FProperty>(UMACS_AttributeSet::StaticClass(), GET_MEMBER_NAME_CHECKED(UMACS_AttributeSet, Health)))
	{
		Health.SetCurrentValue(FMath::Clamp(Health.GetCurrentValue(), 0.0f, MaxHealth.GetCurrentValue()));
		Health.SetBaseValue(FMath::Clamp(Health.GetCurrentValue(), 0.0f, MaxHealth.GetCurrentValue()));
	}
#pragma endregion MACS Health

#pragma region MACS CrawlingHealth
	//Verify if attribute that change is CHP
	if (Data.EvaluatedData.Attribute.GetUProperty() == FindFieldChecked<FProperty>(UMACS_AttributeSet::StaticClass(), GET_MEMBER_NAME_CHECKED(UMACS_AttributeSet, CrawlingHealth)))
	{
		CrawlingHealth.SetCurrentValue(FMath::Clamp(CrawlingHealth.GetCurrentValue(), 0.0f, MaxCrawlingHealth.GetCurrentValue()));
		CrawlingHealth.SetBaseValue(FMath::Clamp(CrawlingHealth.GetCurrentValue(), 0.0f, MaxCrawlingHealth.GetCurrentValue()));
	}
#pragma endregion MACS CrawlingHealth

#pragma region MACS Stamina
	//Verify if attribute that change is Stamina
	if (Data.EvaluatedData.Attribute.GetUProperty() == FindFieldChecked<FProperty>(UMACS_AttributeSet::StaticClass(), GET_MEMBER_NAME_CHECKED(UMACS_AttributeSet, Stamina)))
	{
		Stamina.SetCurrentValue(FMath::Clamp(Stamina.GetCurrentValue(), 0.0f, MaxStamina.GetCurrentValue()));
		Stamina.SetBaseValue(FMath::Clamp(Stamina.GetCurrentValue(), 0.0f, MaxStamina.GetCurrentValue()));
	}
#pragma endregion MACS Stamina

}

// Set up our attributes for replication.
void UMACS_AttributeSet::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
#pragma region MACS Armor
	DOREPLIFETIME_CONDITION_NOTIFY(UMACS_AttributeSet, Armor, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UMACS_AttributeSet, MaxArmor, COND_None, REPNOTIFY_Always);
#pragma endregion MACS Armor
	
#pragma region MACS Health
	DOREPLIFETIME_CONDITION_NOTIFY(UMACS_AttributeSet, Health, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UMACS_AttributeSet, MaxHealth, COND_None, REPNOTIFY_Always);
#pragma endregion MACS Health

#pragma region MACS CrawlingHealth
	DOREPLIFETIME_CONDITION_NOTIFY(UMACS_AttributeSet, CrawlingHealth, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UMACS_AttributeSet, MaxCrawlingHealth, COND_None, REPNOTIFY_Always);
#pragma endregion MACS CrawlingHealth

#pragma region MACS Stamina
	DOREPLIFETIME_CONDITION_NOTIFY(UMACS_AttributeSet, Stamina, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UMACS_AttributeSet, MaxStamina, COND_None, REPNOTIFY_Always);
#pragma endregion MACS Stamina
}