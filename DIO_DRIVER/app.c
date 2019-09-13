/*
 * app.c
 *
 *  Created on: Aug 23, 2019
 *      Author: mom
 */

#include "STD_TYPES.h"
#include "MATH.h"
#include "DIO_INTERFACE.h"
int main()
{
	DIO_SetPortDirection(PORT2,PORT_OUTPUT);
	DIO_SetPortValue (PORT2, 0xff);
   while(1);
return 0;
}
