#include "buzzer.h"

static uint32_t previousTick = 0;
static uint8_t buzzerState = 0;

void Buzzer_Update(ParkingState state)
{
    if(state == PARKING_SAFE)
    {
    	buzzerState = 0;
    	previousTick = HAL_GetTick();
        HAL_GPIO_WritePin(GPIOC, GPIO_PIN_3, GPIO_PIN_RESET);
    }
    else if(state == PARKING_CAUTION)
    {
        if(HAL_GetTick() - previousTick >= 500)
        {
        	previousTick = HAL_GetTick();
        	buzzerState = !buzzerState;
        }
        if(buzzerState)
                	{
                		HAL_GPIO_WritePin(GPIOC, GPIO_PIN_3, GPIO_PIN_SET);
                	}
                	else
                	{
                		HAL_GPIO_WritePin(GPIOC, GPIO_PIN_3, GPIO_PIN_RESET);
                	}
    }
    else
    {
    	buzzerState = 0;
    	previousTick = HAL_GetTick();
        HAL_GPIO_WritePin(GPIOC, GPIO_PIN_3, GPIO_PIN_SET);
    }
}

