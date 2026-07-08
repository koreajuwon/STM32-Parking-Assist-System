#include "parking.h"

static ParkingState currentState = PARKING_SAFE;

void Parking_Update(int distance)
{
	if(distance > 30 )
	{
		currentState = PARKING_SAFE;
	}
	else if(distance > 15 )
	{
		currentState = PARKING_CAUTION;
	}
	else
	{
		currentState = PARKING_DANGER;
	}
}

ParkingState Parking_GetState(void)
{
	return currentState;
}
