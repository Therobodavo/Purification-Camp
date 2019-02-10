// Fill out your copyright notice in the Description page of Project Settings.

#include "MyGameMode.h"
#include "SideProject.h"
#include "MyCharacter.h"
#include "Blueprint/UserWidget.h"

void AMyGameMode::BeginPlay()
{
	Super::BeginPlay();

	AMyCharacter* Character = Cast<AMyCharacter>(UGameplayStatics::GetPlayerPawn(this, 0));
	
	if (PlayerHUDClass != NULL)
	{
		CurrentWidget = CreateWidget<UUserWidget>(GetWorld(), PlayerHUDClass);
		if (CurrentWidget != NULL)
		{
			CurrentWidget->AddToViewport();
		}
	}
}

AMyGameMode::AMyGameMode()
{

}
