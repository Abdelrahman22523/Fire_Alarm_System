#include "std_types.h"
#include "lm.h"
#include "ADC.h"
uint8 LM35_getTemp(uint8 pin)
{
	uint8 temperature = 0;
	uint16 adc_value = 0;

	adc_value = ADC_readChannel(pin);
	temperature = ((uint32) adc_value * 256 / 1023.0);


	return temperature;
}
