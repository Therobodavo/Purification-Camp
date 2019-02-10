// Fill out your copyright notice in the Description page of Project Settings.

#include "SwarmSpawner.h"

// Sets default values
ASwarmSpawner::ASwarmSpawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASwarmSpawner::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASwarmSpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

