#include<avr/io.h>
#include<avr/delay.h>
#include<avr/interrupt.h>
#include"INTERRUPT_EXTERNAL.h"
int i=0;
int main()
{

	interrupt_init();

	while(1)
	{
	while(1)
	 {
		 if (i)
			 break;
		 PORTB^=(1<<7);
		 _delay_ms(2000);
	 }
	_delay_ms(10000);
	i=0;
	}
return 0;
}
ISR(INT0_vect)
{
	i=1;
if ( PINB & (1<<7) )
	PORTB|=(1<<7);
else
	PORTB &= ~(1<<7);


}

