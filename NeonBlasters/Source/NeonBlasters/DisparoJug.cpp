
#include "DisparoJug.h"

const float VEL = 10000;

UDisparoJug::UDisparoJug()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UDisparoJug::BeginPlay()
{
	Super::BeginPlay();
}

void UDisparoJug::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	FVector Mov = FVector(VEL * DeltaTime, 0, 0);
	GetOwner()->AddActorLocalOffset(Mov, true);
	UE_LOG(LogTemp, Warning, TEXT("Mov: %s"), *Mov.ToString());
}

