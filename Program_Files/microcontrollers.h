
/*********************************** Defines **********************************/
//Select your desired micro
#define micro_option_0
//...
//#define micro_option_x

//Since I dont have HAL, typedefing these types as they are required
typedef int GPIO_TypeDef;
typedef int uint16_t;

/********************************* Structures *********************************/
struct pin_info
{
  GPIO_TypeDef * GPIO_Port;
  uint16_t GPIO_Pin;
};

#define MAX_PIN_COUNT 5
struct micro_struct
{
  /* LED 0 */
  struct pin_info LED_0_Red;
  struct pin_info LED_0_Blue;
  struct pin_info LED_0_Green;

  /* LED 1 */
  struct pin_info LED_1_Red;
  struct pin_info LED_1_Green;
  struct pin_info LED_1_Blue;

  /* LED 2 */
  struct pin_info LED_2_Red;
  struct pin_info LED_2_Green;
  struct pin_info LED_2_Blue;

  /* LED 3 */
  struct pin_info LED_3_Red;
  struct pin_info LED_3_Green;
  struct pin_info LED_3_Blue;

  /* LED 4 */
  struct pin_info LED_4_Red;
  struct pin_info LED_4_Green;
  struct pin_info LED_4_Blue;

  /* Other desired GPIO info */
  // ...
  // ...
};




/********************************* Prototypes *********************************/
struct micro_struct Micro_Init(struct micro_struct micro);
struct micro_struct Micro_Option_0_Init(struct micro_struct micro);
//...
struct micro_struct Micro_Option_x_Init(struct micro_struct micro);
