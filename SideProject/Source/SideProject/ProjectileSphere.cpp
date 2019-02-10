// Fill out your copyright notice in the Description page of Project Settings.

#include "ProjectileSphere.h"
#include "Components/SphereComponent.h"
// Sets default values


AProjectileSphere::AProjectileSphere()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AProjectileSphere::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AProjectileSphere::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (isFired && !isStopped)
	{
		SetActorLocation(GetActorLocation() + (dir * 400 * DeltaTime));

		FVector newScale = GetActorScale3D();
		if (newScale.X <= 0.3f)
		{
			Destroy(this);
		}
		else if(GetWorld()->GetRealTimeSeconds() - timeFired > 2)
		{
			newScale = GetActorScale3D() - FVector(0.005f, 0.005f, 0.005f);
			SetActorScale3D(newScale);
		}
		

	}

}

