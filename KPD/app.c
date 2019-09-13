/*
 * app.c
 *
 *  Created on: Aug 27, 2019
 *      Author: mom
 */
#include "MATH.h"
#include<avr/io.h>
#include"STD_TYPES.h"
#include "DIO_INTERFACE.h"
#include "KPD_INTERFACE.h"
#include"LCD_INTERFACE.h"
#include<avr/delay.h>
int main()
{

	/*1.6*/
	PORT_INIT();
     LCD_INIT();
	DIO_SetPortDirection(PORT3,0x0f);
	DIO_SetPortValue(PORT3,0xff);
//	DIO_SetPinValue_u8(PORT3,PIN0,LOW);
	DIO_SetPinDirection_u8(PORT2,PIN7,HIGH);
	//u8 key_id=GetPressedKey();

	while(1)
	{
		u8 key_id=GetPressedKey();
           /* switch(key_id)
            {
            case 42: LcdWriteData(key_id); break;
            case 43: LcdWriteData(key_id);
            case 45: LcdWriteData(key_id);
            case 48: LcdWriteData(key_id);  break;
            case 49: LcdWriteData(key_id);
            case 50: LcdWriteData(key_id);
            case 51: LcdWriteData(key_id);
            case 52: LcdWriteData(key_id);
            case 53: LcdWriteData(key_id);
            case 54: LcdWriteData(key_id);
            case 55: LcdWriteData(key_id);
            case 56: LcdWriteData(key_id);
            case 57: LcdWriteData(key_id);

            }*/
		   if(key_id==48)
			     		{
						LcdWriteData(key_id);
				       	}
		   if(key_id==49)
		   			{
		   				LcdWriteData(key_id);
		   			}
		   if(key_id==50)
		   			{
		   				LcdWriteData(key_id);
		   			}
		   if(key_id==51)
		   			{
		   				LcdWriteData(key_id);
		   			}
		   if(key_id==52)
		   			{
		   				LcdWriteData(key_id);
		   			}
		   if(key_id==53)
		   			{
		   				LcdWriteData(key_id);
		   			}
		 	if(key_id==54)
		 	{	DIO_SetPinValue_u8(PORT2,PIN7,HIGH);
		 	//_delay_ms(4000);
			//DIO_SetPinValue_u8(PORT2,PIN7,LOW);
			//_delay_ms(4000);
			LcdWriteData(key_id);
	      	//LcdWriteCmd(0xC5);
		 	}
		 	if(key_id==55)
		 	{
			LcdWriteData(key_id);
	      	//LcdWriteCmd(0xC5);
		 	}
		 	if(key_id==56)
		 				{
		 					LcdWriteData(key_id);
		 				}
	}


return 0;

}

