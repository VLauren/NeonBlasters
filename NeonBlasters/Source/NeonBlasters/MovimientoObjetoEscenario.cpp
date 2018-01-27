
#include "MovimientoObjetoEscenario.h"

const float VEL = 1000;

// Sets default values for this component's properties
UMovimientoObjetoEscenario::UMovimientoObjetoEscenario()
{
	PrimaryComponentTick.bCanEverTick = true;
}


// Called when the game starts
void UMovimientoObjetoEscenario::BeginPlay()
{
	Super::BeginPlay();
}


// Called every frame
void UMovimientoObjetoEscenario::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	FVector LocalMove = FVector(-VEL * DeltaTime, 0, 0);

	GetOwner()->AddActorLocalOffset(LocalMove, true);
	// UE_LOG(LogTemp, Warning, TEXT("KE %s"), *LocalMove.ToString());

}

