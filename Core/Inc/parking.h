
#ifndef INC_PARKING_H_
#define INC_PARKING_H_

#include "main.h"

typedef enum
{
	PARKING_SAFE, PARKING_CAUTION, PARKING_DANGER
}ParkingState;

void Parking_Update(int distance);
ParkingState Parking_GetState(void);

#endif /* INC_PARKING_H_ */
