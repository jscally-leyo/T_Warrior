// Leyodemus All Rights reserved


#include "Characters/WarriorHeroCharacter.h"
#include "WarriorDebugHelper.h"

void AWarriorHeroCharacter::BeginPlay()
{
	Super::BeginPlay();

	Debug::Print(TEXT("Working")); // This comes from the namespace Debug in WarriorDebugHelper.h
}
