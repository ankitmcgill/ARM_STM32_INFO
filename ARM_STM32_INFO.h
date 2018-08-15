//ARM STM32 INFO
//TO RETREIVE ARM STM32 SPECIFIC MCU INFO
//
//ANKIT BHATNAGAR
//ANKIT.BHATNAGARINDIA@GMAIL.COM
//AUGUST 15 2018

#ifndef _ARM_STM32_INFO_
#define _ARM_STM32_INFO_

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#define STM32F103C8

void ARM_STM32_INFO_GetDeviceId(uint32_t* id);
uint16_t ARM_STM32_INFO_GetFlashSizeKb(void);

#endif
