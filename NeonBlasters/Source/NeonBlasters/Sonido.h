// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Sonido.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class NEONBLASTERS_API USonido : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	USonido();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;;

	static USonido* instance;


	UPROPERTY(EditAnywhere)
		USoundBase* sonidoTest;

	UPROPERTY(EditAnywhere)
		TArray<USoundBase*> sonidos;

	static void Play(int indice);
};
