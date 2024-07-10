#include<avr/io.h>
#include "gpio.h"
#include"motor.h"
#include "common_macros.h"
#include "std_types.h"

void DcMotor_Init(void)
{
	GPIO_setupPinDirection(MOTOR_L_PORT_ID, MOTOR_L_PIN_ID,PIN_OUTPUT);
    GPIO_setupPinDirection(MOTOR_R_PORT_ID, MOTOR_R_PIN_ID,PIN_OUTPUT);
    GPIO_writePin(MOTOR_L_PORT_ID, MOTOR_L_PIN_ID, LOGIC_LOW);
    GPIO_writePin(MOTOR_R_PORT_ID, MOTOR_R_PIN_ID, LOGIC_LOW);
    GPIO_setupPinDirection(1, 3,PIN_OUTPUT);
    GPIO_writePin(1, 3, LOGIC_HIGH);
}
void DcMotor_Rotate(DcMotor_State state)
{if(state==0){
    	GPIO_writePin(MOTOR_L_PORT_ID, MOTOR_L_PIN_ID, LOGIC_HIGH);
    	GPIO_writePin(MOTOR_R_PORT_ID, MOTOR_R_PIN_ID, LOGIC_LOW);
    		}
    else if(state==1)
	{
    	GPIO_writePin(MOTOR_L_PORT_ID, MOTOR_L_PIN_ID, LOGIC_LOW);
        GPIO_writePin(MOTOR_R_PORT_ID, MOTOR_R_PIN_ID, LOGIC_HIGH);
	}
    else if(state==2)
       		{
    	GPIO_writePin(MOTOR_L_PORT_ID, MOTOR_L_PIN_ID, LOGIC_LOW);
        GPIO_writePin(MOTOR_R_PORT_ID, MOTOR_R_PIN_ID, LOGIC_LOW);
       		}
}
