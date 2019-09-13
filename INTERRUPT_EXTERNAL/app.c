#include<avr/io.h>
#include<avr/interrupt.h>
#include"INTERRUPT_EXTERNAL.h"
int main()
{
 interrupt_init();
 while(1);
return 0;
}
ISR(INT0_vect)
{
PORTB^=(1<<7);
}
