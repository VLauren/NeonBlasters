// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "NeonBlastersPawn.h"
#include "UObject/ConstructorHelpers.h"
#include "Camera/CameraComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Engine/World.h"
#include "Engine/StaticMesh.h"

ANeonBlastersPawn* ANeonBlastersPawn::instance;

ANeonBlastersPawn::ANeonBlastersPawn()
{
	// Structure to hold one-time initialization
	/*
	struct FConstructorStatics
	{
		ConstructorHelpers::FObjectFinderOptional<UStaticMesh> PlaneMesh;
		FConstructorStatics()
			: PlaneMesh(TEXT("/Game/Flying/Meshes/UFO.UFO"))
		{
		}
	};
	static FConstructorStatics ConstructorStatics;
	*/

	// Create static mesh component
	PlaneMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlaneMesh0"));
	// PlaneMesh->SetStaticMesh(ConstructorStatics.PlaneMesh.Get());	// Set static mesh
	RootComponent = PlaneMesh;

	// Create a spring arm component
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm0"));
	SpringArm->SetupAttachment(RootComponent);	// Attach SpringArm to RootComponent
	SpringArm->TargetArmLength = 160.0f; // The camera follows at this distance behind the character	
	SpringArm->SocketOffset = FVector(0.f,0.f,60.f);
	SpringArm->bEnableCameraLag = false;	// Do not allow camera to lag
	SpringArm->CameraLagSpeed = 15.f;

	// Create camera component 
	// Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera0"));
	// Camera->SetupAttachment(SpringArm, USpringArmComponent::SocketName);	// Attach the camera
	// Camera->bUsePawnControlRotation = false; // Don't rotate camera with controller


	SpringArm2 = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm1"));
	SpringArm2->SetupAttachment(RootComponent);	// Attach SpringArm to RootComponent
	SpringArm2->TargetArmLength = 160.0f; // The camera follows at this distance behind the character	
	SpringArm2->SocketOffset = FVector(0.f, 0.f, 60.f);
	SpringArm2->bEnableCameraLag = false;	// Do not allow camera to lag
	SpringArm2->CameraLagSpeed = 15.f;

	instance = this;
}

void ANeonBlastersPawn::Tick(float DeltaSeconds)
{
	FVector LocalMove = FVector(0,0,0);

	// ANeonBlastersPawn::instance = this;
	// ==================================

	FVector Up = GetActorUpVector() * UpVal * 1000 * DeltaSeconds;
	FVector Right = GetActorRightVector() * RightVal * 1000 * DeltaSeconds;

	LocalMove += Up;
	LocalMove += Right;

	// ==================================

	// Move plan forwards (with sweep so we stop when we collide with things)
	AddActorLocalOffset(LocalMove, true);

	// Call any parent class Tick implementation
	Super::Tick(DeltaSeconds);
}

void ANeonBlastersPawn::NotifyHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit)
{
	Super::NotifyHit(MyComp, Other, OtherComp, bSelfMoved, HitLocation, HitNormal, NormalImpulse, Hit);

	// Deflect along the surface when we collide.
	FRotator CurrentRotation = GetActorRotation();
	SetActorRotation(FQuat::Slerp(CurrentRotation.Quaternion(), HitNormal.ToOrientationQuat(), 0.025f));
}


void ANeonBlastersPawn::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
    // Check if PlayerInputComponent is valid (not NULL)
	check(PlayerInputComponent);

	// Bind our control axis' to callback functions
	PlayerInputComponent->BindAxis("MoveUp", this, &ANeonBlastersPawn::MoveUpInput);
	PlayerInputComponent->BindAxis("MoveRight", this, &ANeonBlastersPawn::MoveRightInput);
	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &ANeonBlastersPawn::Fire);
}

void ANeonBlastersPawn::MoveUpInput(float Val)
{
	UpVal = Val;
}

void ANeonBlastersPawn::MoveRightInput(float Val)
{
	RightVal = Val;
}

void ANeonBlastersPawn::Fire()
{
	disparador = FindComponentByClass<UDisparador>();
	disparador->Disparar();
}


// ANeonBlastersPawn* ANeonBlastersPawn::GetInstance()
// {
	// return instance;
// }

