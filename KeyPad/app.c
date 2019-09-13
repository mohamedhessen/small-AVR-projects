/*
 * app.c
 *
 *  Created on: Aug 27, 2019
 *      Author: mom
 */
#include "MATH.h"
#include"STD_TYPES.h"
#include "DIO_INTERFACE.h"
#include "KPD_INTERFACE.h"
int main()
{
	u8 key_id=GetPressesKey();
	if(key_id==0x06)
		DIO_GetPinValue(PORT2,PIN6,HIGH);
return 0;
}

