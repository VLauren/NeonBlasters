#include "DisparoEnemigo.h"
#include "NeonBlastersPawn.h"
#include "NeonBlastersPawn2.h"

UDisparoEnemigo::UDisparoEnemigo()
{
	PrimaryComponentTick.bCanEverTick = true;

	if (ANeonBlastersPawn::instance)
	{
		/*
		FVector objPos = ANeonBlastersPawn::instance->GetActorLocation();
		if (FMath::FRand() < 0.5f)
		{
			objPos = ANeonBlastersPawn2::instance->GetActorLocation();
		}

		dir = objPos - GetOwner()->GetActorLocation();
		dir.Normalize();
		*/
	}
}

void UDisparoEnemigo::BeginPlay()
{
	Super::BeginPlay();
}

void UDisparoEnemigo::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	/*
	FVector Mov = dir * VEL * DeltaTime;
	GetOwner()->AddActorLocalOffset(Mov);
	*/

}

