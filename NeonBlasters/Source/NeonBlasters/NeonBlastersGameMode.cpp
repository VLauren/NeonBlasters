// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "NeonBlastersGameMode.h"
#include "NeonBlastersPawn.h"

ANeonBlastersGameMode::ANeonBlastersGameMode()
{
	// set default pawn class to our flying pawn
	DefaultPawnClass = ANeonBlastersPawn::StaticClass();
}
