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
#include "GameFramework/Character.h"
#include "AbilitySystemInterface.h"
#include "MACS_AttributeSet.h"
#include "MACS_Character.generated.h"

UCLASS()
class MACS_API AMACS_Character : public ACharacter, public IAbilitySystemInterface //Required this interface to use GAS on this character's class
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMACS_Character();

#pragma region MACS //Setup interface's functions and components
	// Helper function to get our ability system component (Used by the IAbilitySystemInterface).
	UFUNCTION(BlueprintPure, Category = "MACS Character | MACS Ability System Component")
		UAbilitySystemComponent* GetAbilitySystemComponent() const override;
	
	// Our ability system component.
	UPROPERTY(BlueprintReadOnly, Category = "MACS Character | MACS Ability System Component")
	class UAbilitySystemComponent* MACS_AbilitySystemComponent;

	// Our attribute set (From player state).
	UPROPERTY(BlueprintReadOnly, Category = "MACS Character | MACS Attribute Set")
	class UMACS_AttributeSet* MACS_AttributeSet;
#pragma endregion MACS

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

#pragma region MACS //Setup the override functions and implemment the interface's function
	// Called when our controller changes.
	void PossessedBy(AController* NewController) override;

	// Called when our PlayerState is assigned.
	void OnRep_PlayerState() override;

	// Sets up the ability system component.
	void SetAbilitySystemComponent();
#pragma endregion MACS
	
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
