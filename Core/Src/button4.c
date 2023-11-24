/*
 * button4.c
 *
 *  Created on: Nov 24, 2023
 *      Author: ACER
 */

#include "button.h"

int button4_flag = 0;

int Button4Reg0 = NORMAL_STATE;
int Button4Reg1 = NORMAL_STATE;
int Button4Reg2 = NORMAL_STATE;

int Button4Reg3 = NORMAL_STATE;
int TimeForButton4Press = 500;

int isButton4Pressed(){
	if(button4_flag == 1){
		button4_flag = 0;
		return 1;
	}
	return 0;
}

void subButton4(){
	button4_flag = 1;
}

void getButton4Input(){
	Button4Reg0 = Button4Reg1;
	Button4Reg1 = Button4Reg2;
	Button4Reg2 = HAL_GPIO_ReadPin(Button4_GPIO_Port, Button4_Pin);

	if((Button4Reg0  == Button4Reg1) && (Button4Reg1 == Button4Reg2)){
		if(Button4Reg3 != Button4Reg2){
			Button4Reg3 = Button4Reg2;
			if(Button4Reg2 == PRESSED_STATE){
				//TODO
				subButton4();
				TimeForButton4Press = 500;
			}
			else{
				TimeForButton4Press--;
				if(TimeForButton4Press == 0){
					//TODO
					Button4Reg3 = NORMAL_STATE;
				}
			}
		}
	}
}
