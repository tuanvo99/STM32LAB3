/*
 * button.h
 *
 *  Created on: Nov 24, 2023
 *      Author: ACER
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#include "main.h"

int isButton1Pressed();
int isButton2Pressed();
int isButton3Pressed();
int isButton4Pressed();

#define NORMAL_STATE GPIO_PIN_SET
#define PRESSED_STATE GPIO_PIN_RESET

void getButton1Input();
void getButton2Input();
void getButton3Input();
void getButton4Input();

#endif /* INC_BUTTON_H_ */
