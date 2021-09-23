/*
 * APP.c
 *
 * Created: 9/23/2021 1:49:01 AM
 *  Author: Mohamed El-Kholy
 */ 

#include "APP.h"

 /* Global Array Holds the String Received */
 u8 global_u8PtrStr[10] ;
 
 
void APP_voidInit(void)
{
	/* Initialize USART */
	  MUSART_voidUsartInit();
	 /* Initialize LEDs */
	EULED_voidLEDInit(GPIOB , GREEN_LED	);
	EULED_voidLEDInit(GPIOB , YELLOW_LED);
	EULED_voidLEDInit(GPIOB , RED_LED);
		
}
void APP_voidUpdate(void)
{
	/* Receive The Incoming String */
	MUSART_voidUsartReceiveString(global_u8PtrStr);
	if (strcmp(global_u8PtrStr,"START") == 0 )
	{
		APP_voidStart();
		
	}
	else if  (strcmp(global_u8PtrStr,"WAIT") == 0 )
	{
		APP_voidWait();
		
	}
	else if  (strcmp(global_u8PtrStr,"STOP") == 0 )
	{
		APP_voidStop();
		
	}
	else if  (strcmp(global_u8PtrStr,"AT") == 0 )
	{
		APP_voidAT();
	}
}


void APP_voidStart (void)
{
	MUSART_voidUsartSendString("Green Led Is ON");
	EULED_voidLedON(GPIOB , GREEN_LED);
	EULED_voidLedOFF(GPIOB , YELLOW_LED);
	EULED_voidLedOFF(GPIOB ,RED_LED);

}
void APP_voidWait (void)
{
	MUSART_voidUsartSendString("Yellow Led Is ON");
	EULED_voidLedOFF(GPIOB , GREEN_LED);
	EULED_voidLedON(GPIOB , YELLOW_LED);
	EULED_voidLedOFF(GPIOB ,RED_LED);
}

void APP_voidStop (void)
{
	MUSART_voidUsartSendString("Red Led Is ON");
	EULED_voidLedOFF(GPIOB , GREEN_LED);
	EULED_voidLedOFF(GPIOB , YELLOW_LED);
	EULED_voidLedON(GPIOB ,RED_LED);
}

void APP_voidAT (void)
{
	MUSART_voidUsartSendString("OK");
}