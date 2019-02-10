// Fill out your copyright notice in the Description page of Project Settings.

#include "MyCharacter.h"
#include "Runtime/CoreUObject/Public/UObject/ConstructorHelpers.h"
#include "Components/InputComponent.h"
#include "Engine/World.h"
#include "Engine.h"


// Sets default values
AMyCharacter::AMyCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Gets Blueprint for projectile
	static ConstructorHelpers::FObjectFinder<UClass> ProjFinder(TEXT("Blueprint'/Game/Blueprints/BP_ProjectileSphere.BP_ProjectileSphere_C'"));
	ProjSphereClass = ProjFinder.Object;

}

// Called when the game starts or when spawned
void AMyCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

void AMyCharacter::MoveForward(float valForward)
{
	AddMovementInput(GetActorForwardVector(), valForward);
}

void AMyCharacter::MoveRight(float valRight)
{
	AddMovementInput(GetActorRightVector(), valRight);
}

void AMyCharacter::RotateSideways(float rate)
{
	AddControllerYawInput(rate * 0.1f);
}

void AMyCharacter::RotateVertical(float rate)
{
	AddControllerPitchInput(rate * 0.1f);
}
void AMyCharacter::CreateProjectile(float val)
{
	if (val > 0 && scaleVal <= 3 && num < 1)
	{

		if (scaleVal == 0)
		{
			FVector Location = GetActorLocation() + FVector(.5f, .3f, 1);
			FRotator Rotation = GetActorRotation();
			FActorSpawnParameters SpawnInfo;
			proj = GetWorld()->SpawnActor<AProjectileSphere>(ProjSphereClass, Location, Rotation, SpawnInfo);
			proj->SetActorScale3D(FVector(.1f, .1f, .1f));
			scaleVal = 0.1f;
			
		}
		else if (scaleVal <= 3)
		{
			scaleVal += 0.01f;
			proj->SetActorScale3D(FVector(scaleVal, scaleVal, scaleVal));
		}
		num += 0.5 * lastDeltaTime;
	}
}

void AMyCharacter::FireProjectile()
{
	if (proj)
	{
		(*proj).dir = GetActorForwardVector();
		(*proj).isFired = true;
		(*proj).timeFired = GetWorld()->GetRealTimeSeconds();
		proj = NULL;
		num = 0;
		scaleVal = 0;
	}
}


// Called every frame
void AMyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	lastDeltaTime = DeltaTime;

	if (proj)
	{
		UActorComponent* temp = GetComponentByClass(USceneComponent::StaticClass());
		USceneComponent* pos = Cast<USceneComponent>(temp);
		
		TArray<USceneComponent*> allComponents;
		GetRootComponent()->GetChildrenComponents(true, allComponents);

		for (int i = 0; i < allComponents.Max(); i++)
		{
			if (allComponents[i]->GetName() == "ProjectilePosition")
			{
				pos = allComponents[i];
			}
		}
		
		proj->SetActorRotation(GetActorRotation() + FRotator(0, 90, 0));
		proj->SetActorLocation(pos->GetComponentLocation());
		
	}
	
}

// Called to bind functionality to input
void AMyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAxis("MoveForward", this, &AMyCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AMyCharacter::MoveRight);
	PlayerInputComponent->BindAxis("Rotate_Sideways", this, &AMyCharacter::RotateSideways);
	PlayerInputComponent->BindAxis("Rotate_Vertical", this, &AMyCharacter::RotateVertical);
	PlayerInputComponent->BindAxis("Fire", this, &AMyCharacter::CreateProjectile);
	PlayerInputComponent->BindAction("Fire_Release",IE_Pressed ,this, &AMyCharacter::FireProjectile);

}

