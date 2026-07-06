
#ifndef INC_ULTRASONIC_H_
#define INC_ULTRASONIC_H_

#include "main.h"

void Ultrasonic_Init(void);
void Ultrasonic_Trigger(void);
void Ultrasonic_Update(void);
float Ultrasonic_GetDistance(void);

#endif /* INC_ULTRASONIC_H_ */
