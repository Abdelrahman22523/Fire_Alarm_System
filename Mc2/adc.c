#include "common_macros.h" /* For GET_BIT Macro */
#include "ADC.h"
#include "gpio.h"
#include"avr/io.h"

void ADC_init( ADC_ConfigType * Config_Ptr){
	Config_Ptr->ref_volt= ADC_ReferenceVolatge;
		Config_Ptr->prescaler=ADC_Prescaler;
	ADMUX=Config_Ptr->ref_volt;
	ADCSRA=Config_Ptr->prescaler;
	/* ADMUX|=((3<<6)|(1<<1);
	ADCSRA|=1<<7;
	ADCSRA|=1<<0;
		ADCSRA|=1<<1;*/
}
uint8 ADC_readChannel( uint8 pin_num){
	ADMUX = ((ADMUX) & (0xF0))|((pin_num)&(0x0F));
	ADCSRA|=1<<6;
	while((ADCSRA)&(1<<6));
	return ADC ;
}
