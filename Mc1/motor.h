#include<avr/io.h>
#include "gpio.h"
#include "std_types.h"
#include "common_macros.h"
typedef uint8 DcMotor_State;
#define MOTOR_L_PORT_ID                  PORTB_ID
#define MOTOR_L_PIN_ID                   PIN1_ID
#define MOTOR_R_PORT_ID                  PORTB_ID
#define MOTOR_R_PIN_ID                   PIN2_ID

void DcMotor_Init(void);
void DcMotor_Rotate(DcMotor_State state);
