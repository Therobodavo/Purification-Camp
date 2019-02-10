#include "MyUserWidget.h"
#include "MyCharacter.h"
#include "Engine/World.h"
#include "MyGameMode.h"

UMyUserWidget::UMyUserWidget(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}


void UMyUserWidget::NativeConstruct()
{
	// Do some custom setup

	// Call the Blueprint "Event Construct" node
	Super::NativeConstruct();
}


void UMyUserWidget::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	// Make sure to call the base class's NativeTick function
	Super::NativeTick(MyGeometry, InDeltaTime);

	AMyCharacter* character = dynamic_cast<AMyCharacter*>(GetWorld()->GetFirstPlayerController()->GetPawn());

	// Do your custom tick stuff here
	UProgressBar* energyBar = dynamic_cast<UProgressBar *>(GetWidgetFromName(FName("EnergyBar")));

	energyBar->SetPercent((*character).num);

	
}