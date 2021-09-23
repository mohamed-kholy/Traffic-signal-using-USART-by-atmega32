/*
 * UART.c
 *
 * Created: 9/22/2021 10:59:05 PM
 * Author : Mohamed El-Kholy
 */ 

#include "LIB/STD_TYPES.h"
#include "LIB/BIT_MATH.h"
#include "APP/APP.h"


#define F_CPU 1000000UL


int main(void)
{
  
	APP_voidInit();
	
    while (1) 
    {
			APP_voidUpdate();
    }
}

