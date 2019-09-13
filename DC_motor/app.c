/*
 * app.c
 *
 *  Created on: Aug 31, 2019
 *      Author: mom
 */
#include<avr/io.h>
#include<avr/delay.h>
#include"MATH.h"
#include"STD_TYPES.h"
#include"DIO_INTERFACE.h"
#include"DC-MOTOR_INTERFACE.h"
int main()
{
	/*
	 * 	 * u can use PortA PortB only
    * *
	 *
	 */
	init();
	while(1)
{
//PressButtonToTurnOn(PORT2,PIN0,PORT3,PIN0);
//spinning_Anticlkwise();
PORTD=0xff;
}
return 0;
}
