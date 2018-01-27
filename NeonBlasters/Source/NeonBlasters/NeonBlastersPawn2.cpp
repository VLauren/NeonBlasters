// Fill out your copyright notice in the Description page of Project Settings.

#include "NeonBlastersPawn2.h"
#include "UObject/ConstructorHelpers.h"
#include "Camera/CameraComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Engine/World.h"
#include "Engine/StaticMesh.h"
#include "DrawDebugHelpers.h"
#include "NeonBlastersPawn.h"

ANeonBlastersPawn2* ANeonBlastersPawn2::instance;

// Sets default values
ANeonBlastersPawn2::ANeonBlastersPawn2()
{
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

	SpringArm2 = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm1"));
	SpringArm2->SetupAttachment(RootComponent);	// Attach SpringArm to RootComponent
	SpringArm2->TargetArmLength = 160.0f; // The camera follows at this distance behind the character	
	SpringArm2->SocketOffset = FVector(0.f, 0.f, 60.f);
	SpringArm2->bEnableCameraLag = false;	// Do not allow camera to lag
	SpringArm2->CameraLagSpeed = 15.f;

	instance = this;
}

void ANeonBlastersPawn2::Tick(float DeltaSeconds)
{
	FVector LocalMove = FVector(0,0,0);

	// ==================================
	// movimiento

	FVector Up = GetActorUpVector() * UpVal * 1000 * DeltaSeconds;
	FVector Right = GetActorRightVector() * RightVal * 1000 * DeltaSeconds;

	LocalMove += Up;
	LocalMove += Right;

	// ==================================

	// Move plan forwards (with sweep so we stop when we collide with things)
	AddActorLocalOffset(LocalMove, true);

	// ==================================
	// raycast

	AimRotation += FRotator(0, 0, DeltaSeconds * 90);

	FVector start = GetActorLocation();
	FVector end = start + AimRotation.RotateVector(FVector(0, 10000, 0));

	FVector v = ANeonBlastersPawn::instance->GetActorLocation() - GetActorLocation();
	// UE_LOG(LogTemp, Warning, TEXT(" V: %s"), *v.ToString());

	FVector v2 = end - start;

	float angle = FGenericPlatformMath::Atan2(v.Y, v.Z);
	float angle2 = FGenericPlatformMath::Atan2(v2.Y, v2.Z);
	angle = FMath::RadiansToDegrees(angle);
	angle2 = FMath::RadiansToDegrees(angle2);

	// UE_LOG(LogTemp, Warning, TEXT(" Angle: %f --- Angle2: %f"), angle, angle2);
	// UE_LOG(LogTemp, Warning, TEXT(" Dif: %f"), FGenericPlatformMath::Abs(angle - angle2));


	FColor col = FColor(255, 0, 0);
	if (FGenericPlatformMath::Abs(angle - angle2) < 15)
	{
		end = start + AimRotation.RotateVector(FVector(0, v.Size(), 0));
		col = FColor(0, 255, 0);
	}

	DrawDebugLine(GetWorld(), start, end, col,
		false, 0, 0, 3);




	// PASO DE ESTA MIERDA
	/*
	if (GetWorld())
	{


		FHitResult hit;
		GetWorld()->LineTraceSingleByChannel(hit, start, end, ECC_Pawn);


		DrawDebugLine(GetWorld(), start, end, FColor(0, 255, 255),
			false, 0, 0, 3);

			// ECC_Pawn
	}
	// UE_LOG(LowTemp, Warning, TEXT("hit: %s ---- "), *hit.Location.ToString());
	*/


	// ==================================

	// Call any parent class Tick implementation
	Super::Tick(DeltaSeconds);
}

void ANeonBlastersPawn2::NotifyHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit)
{
	Super::NotifyHit(MyComp, Other, OtherComp, bSelfMoved, HitLocation, HitNormal, NormalImpulse, Hit);

	// Deflect along the surface when we collide.
	FRotator CurrentRotation = GetActorRotation();
	SetActorRotation(FQuat::Slerp(CurrentRotation.Quaternion(), HitNormal.ToOrientationQuat(), 0.025f));
}


void ANeonBlastersPawn2::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
    // Check if PlayerInputComponent is valid (not NULL)
	check(PlayerInputComponent);

	// Bind our control axis' to callback functions
	PlayerInputComponent->BindAxis("MoveUp", this, &ANeonBlastersPawn2::MoveUpInput);
	PlayerInputComponent->BindAxis("MoveRight", this, &ANeonBlastersPawn2::MoveRightInput);
}

void ANeonBlastersPawn2::MoveUpInput(float Val)
{
	UpVal = Val;
}

void ANeonBlastersPawn2::MoveRightInput(float Val)
{
	RightVal = Val;
}

