
#ifndef INC_ULTRASONIC_H_
#define INC_ULTRASONIC_H_

#include "main.h"

extern volatile uint32_t ic_end;
extern volatile uint8_t ic_done;

void Ultrasonic_Init(void);
void Ultrasonic_Trigger(void);
void Ultrasonic_Update(void);
int Ultrasonic_GetDistance(void);

#endif /* INC_ULTRASONIC_H_ */
