/*
 * DC-MOTOR_INTERFACE.h
 *
 *  Created on: Sep 4, 2019
 *      Author: mom
 */

#ifndef DC_MOTOR_INTERFACE_H_
#define DC_MOTOR_INTERFACE_H_
extern void PressButtonToTurnOn(u8 u8MotorPort,u8 u8MotorPin,u8 u8ButtonPort, u8 u8ButtonPin);
extern void spinning_clkwise();
extern void spinning_Anticlkwise();
extern void init();



#endif /* DC_MOTOR_INTERFACE_H_ */
