#include <avr\io.h>
#include "gpio.h"
#include"adc.h"
#include"uart.h"
#include "lcd.h"
#include"motor.h"
#include"std_types.h"
#include <util/delay.h>
int main(void)
{
	LCD_init();
	UART_init(9600);
GPIO_setupPinDirection(0, 1, PIN_OUTPUT);
GPIO_setupPinDirection(1, 1, PIN_OUTPUT);
for(;;)
{
	uint8 temp=UART_recieveByte();
	if(temp>=50)
	{
		GPIO_writePin(0, 1, LOGIC_HIGH);
		GPIO_writePin(1, 1, LOGIC_HIGH);
		LCD_moveCursor(0, 3);
		LCD_displayString("7areaaaaa");
		LCD_displayString("           ");
		LCD_moveCursor(1, 3);
		LCD_displayString("           ");
	}else
	{
		GPIO_writePin(0, 1, LOGIC_LOW);
		GPIO_writePin(1, 1, LOGIC_LOW);
		LCD_moveCursor(0, 3);
		LCD_displayString("FAN IS OFF");
		LCD_moveCursor(1, 3);
		LCD_displayString("TEMP:");
		LCD_moveCursor(1, 8);
		LCD_intgerToString(temp);;

	}

}
}
