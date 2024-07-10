#ifndef ADC_H_
#define ADC_H_
#include "std_types.h"

#define ADC_ReferenceVolatge 0b11000000
#define ADC_Prescaler 0b10001011


typedef struct{
uint8 ref_volt;
uint8 prescaler;
}ADC_ConfigType;


void ADC_init( ADC_ConfigType * Config_Ptr);
uint8 ADC_readChannel(uint8 pin_num);


#endif /* ADC_H_ */
