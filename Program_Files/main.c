/*******************************************************************************
 * Author: Taylor Rink
 * Description: Program capable of driving up to 5 LEDs. Do not assume
 * any sepcific microcontroller or LED driver
 ******************************************************************************/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "HAL_stubs.h"
#include "LED_Drivers.h"
#include "microcontrollers.h"

struct micro_struct micro;

//Commented out as HAL isn't included, used for PWM
/* TIM_HandleTypeDef htim2; */

int main(void)
{
   //This function is commented out seeing as I just stubbed the hal commands
   //It would, however, need to be first in the main loop had HAL been included
   HAL_Init();

   //Instructions said I could assume STM32 gets initialized
   //STM32_Init();

   //For PWM, assuming:
   //htim2.Init.Period = 100;
   //Used 100 for easy % conversion

   //Initialize our microcontroller
   micro = Micro_Init(micro);

   while (1)
   {
	   //Turn on Green 100% brightness
	   LED_Control(micro, 0, false, false, true, 100);
	   delay(1000);

	   //Turn on Blue 75% brightness
	   LED_Control(micro, 0, false, true, false, 75);
	   delay(1000);
	   
	   //Turn on Red 50% brightness
	   LED_Control(micro, 0, true, false, false, 50);
	   delay(1000);

	   //Turn all off
	   LED_Control(micro, 0, false, false, false, 100);
	   delay(1000);

	   //Turn on all 25% brightness
	   LED_Control(micro, 0, true, true, true, 25);
	   delay(1000);
   }
{
}
