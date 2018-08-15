//ARM STM32 INFO
//TO RETREIVE ARM STM32 SPECIFIC MCU INFO
//
//ANKIT BHATNAGAR
//ANKIT.BHATNAGARINDIA@GMAIL.COM
//AUGUST 15 2018

#include "ARM_STM32_INFO.h"

void ARM_STM32_INFO_GetDeviceId(uint32_t* id)
{
    //RETURN MCU UNIQUE ID (96 BITS)

    uint32_t* id_ptr = NULL;

    #ifdef STM32F103C8
        id_ptr = (uint32_t*)0x1FFFF7E8;
    #endif

    id[0] = id_ptr[0];
    id[1] = id_ptr[1];
    id[2] = id_ptr[2];
}

uint16_t ARM_STM32_INFO_GetFlashSizeKb(void)
{
    //RETURN FLASH SIZE IN KB

    uint32_t* id_ptr = NULL;

    #ifdef STM32F103C8
        id_ptr = (uint32_t*)0x1FFFF7E0;
    #endif

    return id_ptr[0];
}

