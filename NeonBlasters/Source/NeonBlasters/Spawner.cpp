
#include "Spawner.h"


USpawner::USpawner()
{
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


void USpawner::BeginPlay()
{
	Super::BeginPlay();

	// ...
}

void USpawner::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	tCount += DeltaTime;
	if (tCount >= timeBetweenSpawns)
	{
		tCount = 0;
		Spawn();
	}
}

void USpawner::Spawn()
{
	if (ToSpawn)
	{
		UWorld* world = GetWorld();
		if (world)
		{
			FActorSpawnParameters spawnParams;
			spawnParams.Owner = GetOwner();

			FRotator rotator;
			FVector spawnLocation = GetOwner() -> GetActorLocation();
			FVector offset = FVector(-300, 0, 0);
			spawnLocation += offset;

			world->SpawnActor<AActor>(ToSpawn, spawnLocation, rotator, spawnParams);
		}
	}
}


