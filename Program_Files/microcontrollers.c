/*******************************************************************************
 * Author: Taylor Rink
 * Description: Stores information regarding the various microcontrollers
 * that may be used in the system.
 ******************************************************************************/
#include "microcontrollers.h"


 /******************************************************************************
  * Function: Micro_Init
  * Description: Selects the proper initialization function based on the user
  *              defined micro in microcontrollers.h
  *****************************************************************************/
struct micro_struct Micro_Init(struct micro_struct micro)
{
  #ifdef micro_option_0
    Micro_Option_0_Init(micro);

  //#elif ...

  #else // micro_option_x
    Micro_Option_x_Init(micro);

  #endif

  return micro;
}


/* The following pins were modeled after two random micros from an STM32 datasheet */

/******************************************************************************
 * Function: Micro_Option_0_Init
 * Description: Selects the proper initialization function based on the user
 *              defined micro in microcontrollers.h
 *****************************************************************************/
struct micro_struct Micro_Option_0_Init(struct micro_struct micro)
{
  /* LED 0 Info */
  micro.LED_0_Red.GPIO_Port   = GPIOA;
  micro.LED_0_Red.GPIO_Pin    = GPIO_PIN_8;

  micro.LED_0_Blue.GPIO_Port  = GPIOA;
  micro.LED_0_Blue.GPIO_Pin   = GPIO_PIN_9;

  micro.LED_0_Green.GPIO_Port = GPIOA;
  micro.LED_0_Green.GPIO_Pin  = GPIO_PIN_10;

  /* LED 1 Info */
  micro.LED_1_Red.GPIO_Port   = GPIOA;
  micro.LED_1_Red.GPIO_Pin    = GPIO_PIN_11;

  micro.LED_1_Blue.GPIO_Port  = GPIOA;
  micro.LED_1_Blue.GPIO_Pin   = GPIO_PIN_12;

  micro.LED_1_Green.GPIO_Port = GPIOA;
  micro.LED_1_Green.GPIO_Pin  = GPIO_PIN_13;

  /* LED 2 Info */
  micro.LED_2_Red.GPIO_Port   = GPIOA;
  micro.LED_2_Red.GPIO_Pin    = GPIO_PIN_14;

  micro.LED_2_Blue.GPIO_Port  = GPIOA;
  micro.LED_2_Blue.GPIO_Pin   = GPIO_PIN_15;

  micro.LED_2_Green.GPIO_Port = GPIOC;
  micro.LED_2_Green.GPIO_Pin  = GPIO_PIN_16;

  /* LED 3 Info */
  micro.LED_3_Red.GPIO_Port   = GPIOB;
  micro.LED_3_Red.GPIO_Pin    = GPIO_PIN_17;

  micro.LED_3_Blue.GPIO_Port  = GPIOB;
  micro.LED_3_Blue.GPIO_Pin   = GPIO_PIN_18;

  micro.LED_3_Green.GPIO_Port = GPIOB;
  micro.LED_3_Green.GPIO_Pin  = GPIO_PIN_19;

  /* LED 4 Info */
  micro.LED_4_Red.GPIO_Port   = GPIOB;
  micro.LED_4_Red.GPIO_Pin    = GPIO_PIN_22;

  micro.LED_4_Blue.GPIO_Port  = GPIOB;
  micro.LED_4_Blue.GPIO_Pin   = GPIO_PIN_24;

  micro.LED_4_Green.GPIO_Port = GPIOB;
  micro.LED_4_Green.GPIO_Pin  = GPIO_PIN_25;

  /* Other micro specific info */
  // ...

  return micro;
}


/******************************************************************************
 * Function: Micro_Option_x_Init
 * Description: Selects the proper initialization function based on the user
 *              defined micro in microcontrollers.h
 *****************************************************************************/
struct micro_struct Micro_Option_x_Init(struct micro_struct micro)
{
  /* LED 0 Info */
  micro.LED_0_Red.GPIO_Port   = GPIOA;
  micro.LED_0_Red.GPIO_Pin    = GPIO_PIN_8;

  micro.LED_0_Blue.GPIO_Port  = GPIOA;
  micro.LED_0_Blue.GPIO_Pin   = GPIO_PIN_9;

  micro.LED_0_Green.GPIO_Port = GPIOA;
  micro.LED_0_Green.GPIO_Pin  = GPIO_PIN_10;

  /* LED 1 Info */
  micro.LED_1_Red.GPIO_Port   = GPIOA;
  micro.LED_1_Red.GPIO_Pin    = GPIO_PIN_11;

  micro.LED_1_Blue.GPIO_Port  = GPIOA;
  micro.LED_1_Blue.GPIO_Pin   = GPIO_PIN_12;

  micro.LED_1_Green.GPIO_Port = GPIOA;
  micro.LED_1_Green.GPIO_Pin  = GPIO_PIN_13;

  /* LED 2 Info */
  micro.LED_2_Red.GPIO_Port   = GPIOA;
  micro.LED_2_Red.GPIO_Pin    = GPIO_PIN_14;

  micro.LED_2_Blue.GPIO_Port  = GPIOA;
  micro.LED_2_Blue.GPIO_Pin   = GPIO_PIN_15;

  micro.LED_2_Green.GPIO_Port = GPIOB;
  micro.LED_2_Green.GPIO_Pin  = GPIO_PIN_16;

  /* LED 3 Info */
  micro.LED_3_Red.GPIO_Port   = GPIOB;
  micro.LED_3_Red.GPIO_Pin    = GPIO_PIN_17;

  micro.LED_3_Blue.GPIO_Port  = GPIOB;
  micro.LED_3_Blue.GPIO_Pin   = GPIO_PIN_18;

  micro.LED_3_Green.GPIO_Port = GPIOB;
  micro.LED_3_Green.GPIO_Pin  = GPIO_PIN_22;

  /* LED 4 Info */
  micro.LED_4_Red.GPIO_Port   = GPIOB;
  micro.LED_4_Red.GPIO_Pin    = GPIO_PIN_25;

  micro.LED_4_Blue.GPIO_Port  = GPIOB;
  micro.LED_4_Blue.GPIO_Pin   = GPIO_PIN_26;

  micro.LED_4_Green.GPIO_Port = GPIOB;
  micro.LED_4_Green.GPIO_Pin  = GPIO_PIN_27;

  /* Other micro specific info */
  // ...

  return micro;
}
