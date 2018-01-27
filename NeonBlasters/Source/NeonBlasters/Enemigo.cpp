#include "Enemigo.h"


UEnemigo::UEnemigo()
{
	PrimaryComponentTick.bCanEverTick = true;
}


// Called when the game starts
void UEnemigo::BeginPlay()
{
	Super::BeginPlay();
}


// Called every frame
void UEnemigo::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	t += DeltaTime;
	if (t > 2)
	{
		t = 0;
		Disparar();
	}
}

void UEnemigo::Disparar()
{
	if (Disparo)
	{
		UWorld* world = GetWorld();
		if (world)
		{
			FActorSpawnParameters spawnParams;
			spawnParams.Owner = GetOwner();
			FVector posSpawn = GetOwner()->GetActorLocation() + FVector(-100, 0, 0);

			world->SpawnActor<AActor>(Disparo, posSpawn, FRotator::ZeroRotator, spawnParams);
		}
	}
}

