/*
 * app.c
 *
 *  Created on: Aug 16, 2019
 *      Author: mom
 */
#include<avr/io.h>
#include<avr/delay.h>
 void main()
{
DDRD=0xFF;


//2 PORTD=0x5B;
//3 PORTD=0x4F;
//4 PORTD=0x66;
//5 PORTD=0x6C;
//6 PORTD=0x7c;
//7 PORTD=0x07;
//8 PORTD=0xFF;
//9  PORTD=0x6F;
while(1)
{
	 PORTD=0x3F;     //0
	 _delay_ms(1000);
	 PORTD=0x06;     //1
	 _delay_ms(1000);
	 PORTD=0x5B;     //2
	 _delay_ms(1000);
	 PORTD=0x4F;    //3
	 _delay_ms(1000);
	 PORTD=0x66;    //4
	 _delay_ms(1000);
	 PORTD=0x6d;  //5
	 _delay_ms(1000);
	 PORTD=0x7d; //6
	 _delay_ms(1000);
	 PORTD=0x07; //7
	 _delay_ms(1000);
	 PORTD=0xFF;  //8
	 _delay_ms(1000);
     PORTD=0x6F;  //9
     _delay_ms(1000);
     PORTD=0x00; //off
     _delay_ms(2000);
     PORTD=0xFF;  //8
     	 _delay_ms(1000);
     	 PORTD=0x07; //7
     	 _delay_ms(1000);
     	 PORTD=0x7d; //6
     	 _delay_ms(1000);
     	 PORTD=0x6d;  //5
     	_delay_ms(1000);
     	 PORTD=0x66;    //4
     	 _delay_ms(1000);
     	 PORTD=0x4F;    //3
     	 _delay_ms(1000);
     	 PORTD=0x5B;     //2
     	 _delay_ms(1000);
     	 PORTD=0x06;     //1
     	 _delay_ms(1000);
}
}
