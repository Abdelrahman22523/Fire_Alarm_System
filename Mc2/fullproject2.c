#include <avr\io.h>
#include "gpio.h"
#include"adc.h"
#include"uart.h"
#include "lcd.h"
#include"motor.h"
#include <util/delay.h>
int main(void)
{
	const ADC_ConfigType *Config_Ptr;
	ADC_init(Config_Ptr);
	UART_init(9600);
	DcMotor_Init();
	for(;;)
	{uint8 temp = LM35_getTemp();
	UART_sendByte(temp);
	if(temp>=50)
	{
		DcMotor_Rotate(0);
	}else{ DcMotor_Rotate(2);}
	}
}
