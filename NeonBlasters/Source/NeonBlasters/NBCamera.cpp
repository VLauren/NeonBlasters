// Fill out your copyright notice in the Description page of Project Settings.

#include "NBCamera.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"

// Sets default values for this component's properties
UNBCamera::UNBCamera()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UNBCamera::BeginPlay()
{
	Super::BeginPlay();

	Camera = GetOwner();
}


// Called every frame
void UNBCamera::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	APlayerController* Player = UGameplayStatics::GetPlayerController(this, 0);
	if (Player)
		Player->SetViewTarget(Camera);
}

