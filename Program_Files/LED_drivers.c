#include "microcontrollers.h"
#include <stdbool.h>

/******************************************************************************
 * Function: LED_Control
 * Description: Allows the user to turn on particular LEDs in a single RGB LED.
 *				Note, red_on = 1 if you want red to be turned on, and same for blue/green
 *****************************************************************************/
void LED_Control(struct micro_struct micro, unsigned char pin_number, bool red_on, bool blue_on, bool green_on, unsigned char LED_Power)
{
	struct pin_info red_led, blue_led, green_led;

	//Subtract 1 from MAX_PIN_COUNT to adjust for zero indexing
	if (pin_number > (MAX_PIN_COUNT - 1)) pin_number = (MAX_PIN_COUNT - 1);
	//Ideally pin_number cant be below zero since it is unsigned char, adding bounds just for safety
	else if (pin_number < 0) pin_number = 0;

	//Obtain the LEDs
	switch (pin_number)
	{
		case 0:
			red_led   = micro.LED_0_Red;
			blue_led  = micro.LED_0_Blue;
			green_led = micro.LED_0_Green;
			break;

		case 1:
			red_led   = micro.LED_1_Red;
			blue_led  = micro.LED_1_Blue;
			green_led = micro.LED_1_Green;
			break;

		case 2:
			red_led   = micro.LED_2_Red;
			blue_led  = micro.LED_2_Blue;
			green_led = micro.LED_2_Green;
			break;

		case 3:
			red_led   = micro.LED_3_Red;
			blue_led  = micro.LED_3_Blue;
			green_led = micro.LED_3_Green;
			break;

		case 4:
		default:
			red_led   = micro.LED_4_Red;
			blue_led  = micro.LED_4_Blue;
			green_led = micro.LED_4_Green;
			break;
	}
	
	//Subtract 1 from MAX_PIN_COUNT to adjust for zero indexing
	if (LED_Power > 100) LED_Power = 100;
	//Ideally pin_number cant be below zero since it is unsigned char, adding bounds just for safety
	else if (LED_Power < 0) LED_Power = 0;

	//This is how the  PWM gets altered in order to change LED brightness.
	//Since I was allowed to assume system/timer initialization, don't actually have this variable instantiated.
	//sConfig0C.Pulse = LED_Power;

	//Change the PWM frequency for the activated LEDs
	if (red_on)   HAL_TIM_PWM_START(/*&htim2,  TIM_CHANNEL_1*/);
	if (blue_on)  HAL_TIM_PWM_START(/*&htim2,  TIM_CHANNEL_1*/);
	if (green_on) HAL_TIM_PWM_START(/*&htim2,  TIM_CHANNEL_1*/);

	//Commenting out parameters since I have stubbed functions
	//Turn on the LEDs
	HAL_GPIO_WritePin(/* red_led.GPIO_Port,   red_led.GPIO_Pin,   red_on */);
	HAL_GPIO_WritePin(/* blue_led.GPIO_Port,  blue_led.GPIO_Pin,  blue_on */);
	HAL_GPIO_WritePin(/* green_led.GPIO_Port, green_led.GPIO_Pin, green_on */);
}