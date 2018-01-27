#include "EnemySpawner.h"

UEnemySpawner::UEnemySpawner()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UEnemySpawner::BeginPlay()
{
	Super::BeginPlay();
}

void UEnemySpawner::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);


	t += DeltaTime;
	freq += DeltaTime * 0.05f;
	if (t >= 1 / freq)
	{
		t = 0;
		UWorld* world = GetWorld();
		if (world)
		{
			FActorSpawnParameters spawnParams;
			spawnParams.Owner = GetOwner();

			FRotator rotator;
			FVector pos = GetOwner()->GetActorLocation();
			// +/- 2000 en z
			// +/- 500 en y
			pos += FVector(0, FMath::RandRange(-2000, 2000), FMath::RandRange(-500, 500));

			world->SpawnActor<AActor>(Enemy, pos, rotator, spawnParams);
		}
	}
}

