// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "MyGameMode.generated.h"

/**
 * 
 */
UCLASS()
class SIDEPROJECT_API AMyGameMode : public AGameMode
{
	GENERATED_BODY()

	virtual void BeginPlay() override;
public:
	AMyGameMode();
protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Energy", Meta = (BlueprintProtected = "true"))
	TSubclassOf<class UUserWidget> PlayerHUDClass;

	UPROPERTY()
	class UUserWidget* CurrentWidget;
};
