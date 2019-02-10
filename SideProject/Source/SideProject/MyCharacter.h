// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "ProjectileSphere.h"
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MyCharacter.generated.h"

UCLASS()
class SIDEPROJECT_API AMyCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMyCharacter();


	UPROPERTY(BlueprintReadWrite)
	TSubclassOf<AProjectileSphere> ProjSphereClass;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	void MoveForward(float valForward);
	void MoveRight(float valRight);
	void RotateSideways(float rate);
	void RotateVertical(float rate);

	void CreateProjectile(float val);
	void FireProjectile();

	float scaleVal = 0;
	float lastDeltaTime = 0;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	AProjectileSphere* proj = NULL;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	float num = 0;
};
