// Fill out your copyright notice in the Description page of Project Settings.
#include "EnergyCollector.h"
#include "Components/SphereComponent.h"
#include "ProjectileSphere.h"
#include "Components/StaticMeshComponent.h"
#include "Engine.h"

UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Collector")
USphereComponent* collider;

UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Collector")
UStaticMeshComponent* top;

UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = "Collector")
USphereComponent* topCollider;

// Sets default values
AEnergyCollector::AEnergyCollector()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	
}

// Called when the game starts or when spawned
void AEnergyCollector::BeginPlay()
{
	Super::BeginPlay();
	TArray<USceneComponent*> allComponents;
	GetRootComponent()->GetChildrenComponents(true, allComponents);

	for (int i = 0; i < allComponents.Max(); i++)
	{
		if (allComponents[i]->GetName() == "Sphere")
		{
			
			collider = Cast<USphereComponent>(allComponents[i]);
			collider->OnComponentBeginOverlap.AddDynamic(this, &AEnergyCollector::OnOverlap);
		}
		else if (allComponents[i]->GetName() == "Top")
		{
			top = Cast<UStaticMeshComponent>(allComponents[i]);
		}
		else if (allComponents[i]->GetName() == "Top_Sphere")
		{
			topCollider = Cast<USphereComponent>(allComponents[i]);
			topCollider->OnComponentBeginOverlap.AddDynamic(this, &AEnergyCollector::OnOverlapTop);
		}
	}
}

// Called every frame
void AEnergyCollector::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEnergyCollector::OnOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	AProjectileSphere* proj = Cast<AProjectileSphere>(OtherActor);
	proj->dir = (top->GetComponentLocation() - proj->GetActorLocation()).GetSafeNormal();

	UE_LOG(LogTemp, Warning, TEXT("Energy Collector's Location is %s"),FString("HI"));
	//UE_LOG(LogTemp, Warning, TEXT("Top's Location is %s"), top->GetComponentLocation().ToString());
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Orange, FString::Printf(TEXT("Collector: %s"), *GetActorLocation().ToString()));
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Orange, FString::Printf(TEXT("Top: %s"), (*top).GetComponentLocation().ToString()));
}

void AEnergyCollector::OnOverlapTop(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	OtherActor->Destroy();
}

