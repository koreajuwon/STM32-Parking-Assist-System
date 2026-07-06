#include "ultrasonic.h"
#include "delay.h"

volatile uint32_t ic_start = 0;
volatile uint32_t ic_end = 0;
volatile uint8_t ic_done = 0;

void Ultrasonic_Init(void)
{

}

void Ultrasonic_Trigger(void)
{
	 HAL_GPIO_WritePin(GPIOA, GPIO_PIN_0, GPIO_PIN_RESET);
	 Delay_us(2);

	 HAL_GPIO_WritePin(GPIOA, GPIO_PIN_0, GPIO_PIN_SET);
	 Delay_us(10);

	 HAL_GPIO_WritePin(GPIOA, GPIO_PIN_0, GPIO_PIN_RESET);
}

void Ultrasonic_Update(void)
{

}

float Ultrasonic_GetDistance(void)
{
	if (ic_done)
	    {
	        ic_done = 0;

	        // us 기준
	        float time_us = ic_end;

	        // cm 변환 (음속 기반)
	        return time_us * 0.0343f / 2.0f;
	    }

	    return -1;
}
