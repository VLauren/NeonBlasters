// Fill out your copyright notice in the Description page of Project Settings.

#include "DisparoJug2.h"

const float VEL = 10000;

// Sets default values
ADisparoJug2::ADisparoJug2(const FObjectInitializer& objectInitializer)
	:Super(objectInitializer)
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	_collision = CreateDefaultSubobject<USphereComponent>(TEXT("RootCollision"));

	_collision->SetSphereRadius(200.f);
	_collision->SetHiddenInGame(false);

	RootComponent = _collision;
}

// Called when the game starts or when spawned
void ADisparoJug2::BeginPlay()
{
	Super::BeginPlay();
	
	_collision->OnComponentBeginOverlap.AddDynamic(this, &ADisparoJug2::OnDisparoOverlap);
}

void ADisparoJug2::OnDisparoOverlap(UPrimitiveComponent * OverlappedComponent, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	// GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, "Overlap!");
	UE_LOG(LogTemp, Warning, TEXT("ALGO?"));
}

// Called every frame
void ADisparoJug2::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector Mov = FVector(VEL * DeltaTime, 0, 0);
	AddActorLocalOffset(Mov, true);
}

