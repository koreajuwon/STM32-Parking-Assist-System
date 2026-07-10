#include "oled_display.h"
#include "ssd1306.h"
#include "ssd1306_fonts.h"
#include <stdio.h>

void OLED_Update(int distance, ParkingState state)
{
	char *stateStr = "UNKNOWN";
	char *ledStr = "UNKNOWN";
	char *buzzerStr = "UNKNOWN";

	char line1[20];
	char line2[20];
	char line3[20];
	char line4[20];

	if(state == PARKING_SAFE)
	{
	    stateStr = "SAFE";
	    ledStr = "GREEN";
	    buzzerStr = "OFF";
	}
	else if(state == PARKING_CAUTION)
	{
	    stateStr = "CAUTION";
	    ledStr = "YELLOW";
	    buzzerStr = "BEEP";
	}
	else
	{
	    stateStr = "DANGER";
	    ledStr = "RED";
	    buzzerStr = "ON";
	}
	sprintf(line1, "DIST : %d cm", distance);
	sprintf(line2, "STATE: %s", stateStr);
	sprintf(line3, "LED : %s", ledStr);
	sprintf(line4, "BUZZ: %s", buzzerStr);

	ssd1306_Fill(Black);

	ssd1306_SetCursor(0, 0);
	ssd1306_WriteString(line1, Font_7x10, White);

	ssd1306_SetCursor(0, 16);
	ssd1306_WriteString(line2, Font_7x10, White);

	ssd1306_SetCursor(0, 32);
	ssd1306_WriteString(line3, Font_7x10, White);

	ssd1306_SetCursor(0, 48);
	ssd1306_WriteString(line4, Font_7x10, White);

	ssd1306_UpdateScreen();
}


