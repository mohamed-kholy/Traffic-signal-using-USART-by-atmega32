/*
 * APP.h
 *
 * Created: 9/23/2021 1:49:18 AM
 *  Author: Mohamed El-Kholy
 */ 


#ifndef APP_H_
#define APP_H_

/* Include Libraries */
#include "../LIB/STD_TYPES.h"
#include "../LIB/BIT_MATH.h"
#include "../MCAL/DIO/MDIO_interface.h"
#include "../MCAL/USART/UART_interface.h"
#include "../EUCAL/LED/LED_interface.h"
#include <string.h>

/* Prototype of the Function */
void APP_voidInit(void);
void APP_voidUpdate(void);
void APP_voidAT (void);
void APP_voidStart(void);
void APP_voidStop (void);
void APP_voidWait (void);

#define		GREEN_LED		PIN0
#define		YELLOW_LED		PIN1
#define		RED_LED		    PIN2

#endif /* APP_H_ */