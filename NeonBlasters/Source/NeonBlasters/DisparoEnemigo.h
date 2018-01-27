// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DisparoEnemigo.generated.h"

const float VEL = 1000;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class NEONBLASTERS_API UDisparoEnemigo : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UDisparoEnemigo();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	FVector dir;
	
};
