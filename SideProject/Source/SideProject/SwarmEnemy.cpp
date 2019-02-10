// Fill out your copyright notice in the Description page of Project Settings.

#include "SwarmEnemy.h"
#include "MyCharacter.h"
#include "GameFramework/PlayerController.h"
#include "Engine/World.h"
UPROPERTY()
AMyCharacter* player;

// Sets default values
ASwarmEnemy::ASwarmEnemy()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASwarmEnemy::BeginPlay()
{
	Super::BeginPlay();
	player = Cast<AMyCharacter>(GetWorld()->GetFirstPlayerController()->GetPawn());



	
}

// Called every frame
void ASwarmEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASwarmEnemy::OnHit(UPrimitiveComponent * HitComp, AActor * OtherActor, UPrimitiveComponent * OtherComp, FVector NormalImpulse, const FHitResult & Hit)
{

}

