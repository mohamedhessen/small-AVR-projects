/*
 * App.c
 *
 *  Created on: Sep 6, 2019
 *      Author: mom
 */
#include"STD_TYPES.h"
#include<avr/io.h>
#include<avr/delay.h>
#include"LCD_INTERFACE.h"
#include "ADC_INTERFACE.h"
#include"interrupt_external.h"
int main()
{
DDRA=0x00;
DDRC=0xff;
DDRB=0xff;
DDRD=0xff;
ADC_INIT();
interrupt_init();
ReadChannel(0);
while(1);

return 0;
}
ISR(ADC_vect)
{
	PORTD=ADCL;
	PORTC=ADCH;
	ADCSRA|=(1<<6);
	u8 tempature=Temp_value(PORTC);
	Print_temp(tempature);
	_delay_ms(3000);
	LcdWriteCmd(0x01);
    _delay_ms(3000);
}
