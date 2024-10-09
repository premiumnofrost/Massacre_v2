/*
*Product Name: MACS Classes
*Developer/Publisher: Demonrraz
*Date: 2022/11/18
*Unreal Engine Target Version: 5.2
*Marketplace URL: https://www.unrealengine.com/marketplace/en-US/product/97bf6ab1e948431ea72ed687bed82e18
*Documentation: https://docs.google.com/document/d/1xR66uYkgiK-I2NZHtDmVA9to_jAis4V4NJo5m0Xa-7Y
*Support: https://discord.gg/sB2P2QGZp2
*/


#include "MACS_Character.h"

#pragma region MACS //Implemmentations
// Sets default values
AMACS_Character::AMACS_Character()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	//Set Comp and AttributeSet of GAS
	MACS_AbilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponent>(TEXT("MACS_AbilitySystemComponent"));
	MACS_AttributeSet = CreateDefaultSubobject<UMACS_AttributeSet>(TEXT("MACS_AttributeSet"));

}

// Returns our ability system component (Used by the IAbilitySystemInterface).
UAbilitySystemComponent* AMACS_Character::GetAbilitySystemComponent() const
{
	return MACS_AbilitySystemComponent;
}

// Get the ability system component from the player state when assigned.
void AMACS_Character::OnRep_PlayerState()
{
	Super::OnRep_PlayerState();
	SetAbilitySystemComponent();
}

// Get the ability system component from the player controller when assigned.
void AMACS_Character::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);
	if (MACS_AbilitySystemComponent)
		MACS_AbilitySystemComponent->InitAbilityActorInfo(this, this);
}

// Called to set up the character's ability system component.
void AMACS_Character::SetAbilitySystemComponent()
{
	if (MACS_AbilitySystemComponent)
		MACS_AbilitySystemComponent->InitAbilityActorInfo(this, this);
}
#pragma endregion MACS

// Called when the game starts or when spawned
void AMACS_Character::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AMACS_Character::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void AMACS_Character::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}
