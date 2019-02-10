// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "Engine/World.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ProjectileSphere.generated.h"

UCLASS()
class SIDEPROJECT_API AProjectileSphere : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AProjectileSphere();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Projectile")
	bool isFired = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Projectile")
	bool isStopped = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Projectile")
	FVector dir;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Projectile")
	float timeFired = 0;
};
