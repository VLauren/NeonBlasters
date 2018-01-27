// Fill out your copyright notice in the Description page of Project Settings.

#include "Disparador.h"

// Sets default values for this component's properties
UDisparador::UDisparador()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
}

// Called when the game starts
void UDisparador::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void UDisparador::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

void UDisparador::Disparar()
{
	if (Disparo)
	{
		UWorld* world = GetWorld();
		if (world)
		{
			FActorSpawnParameters spawnParams;
			spawnParams.Owner = GetOwner();
			FVector posSpawn = GetOwner()->GetActorLocation() + FVector(100, 0, 0);

			world->SpawnActor<AActor>(Disparo, posSpawn, FRotator::ZeroRotator, spawnParams);
		}
	}
}
