/*
 * app.c
 *
 *  Created on: Aug 17, 2019
 *      Author: mom
 */

#include<avr/io.h>
#include<avr/delay.h>
void main()
{
DDRA=0xff;
DDRC=0x00;
PORTC=0xFF;   //pull up
while(1)
{
if( !(PINC & 0b10000000-) )
PORTA=0xFF;
else
	PORTA=0x00;
}
}
