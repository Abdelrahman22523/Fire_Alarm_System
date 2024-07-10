################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../adc.c \
../fullproject2.c \
../gpio.c \
../lcd.c \
../lm.c \
../motor.c \
../uart.c 

OBJS += \
./adc.o \
./fullproject2.o \
./gpio.o \
./lcd.o \
./lm.o \
./motor.o \
./uart.o 

C_DEPS += \
./adc.d \
./fullproject2.d \
./gpio.d \
./lcd.d \
./lm.d \
./motor.d \
./uart.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


