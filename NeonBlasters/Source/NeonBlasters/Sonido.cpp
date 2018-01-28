
#include "Sonido.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"

USonido* USonido::instance;

USonido::USonido()
{
	PrimaryComponentTick.bCanEverTick = true;

	instance = this;
}


void USonido::BeginPlay()
{
	Super::BeginPlay();

	UGameplayStatics::PlaySound2D(this, sonidoTest);
}


void USonido::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

}

void USonido::Play(int indice)
{
	if (instance->sonidos[indice])
		UGameplayStatics::PlaySound2D(instance, instance->sonidos[indice]);
}

