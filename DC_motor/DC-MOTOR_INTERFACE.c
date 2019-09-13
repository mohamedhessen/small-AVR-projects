/*
 * DC-MOTOR_INTERFACE.c
 *
 *  Created on: Sep 4, 2019
 *      Author: mom
 */
#include<avr/io.h>
#include<avr/delay.h>
#include"MATH.h"
#include"STD_TYPES.h"
#include"DIO_INTERFACE.h"
void init()
{
	DDRC=0xff;
	DDRD=0xff;
}
void PressButtonToTurnOn(u8 u8MotorPort,u8 u8MotorPin,u8 u8ButtonPort, u8 u8ButtonPin)
{
	if   ( ! ( DIO_GetPinValue(u8ButtonPort,u8ButtonPin) )  )
		        DIO_SetPortValue(u8MotorPort,1<<u8MotorPin);
			else
		        DIO_SetPortValue(u8MotorPort,0x00);
}

void spinning_clkwise()
{
_delay_ms(1000);
	PORTC=0x00;
	PORTD=0xff;
}

void spinning_Anticlkwise()
{
	_delay_ms(1000);
	PORTC=0xff;
	PORTD=0x00;
}

