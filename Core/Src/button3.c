/*
 * button3.c
 *
 *  Created on: Nov 24, 2023
 *      Author: ACER
 */

#include "button.h"

int button3_flag = 0;

int Button3Reg0 = NORMAL_STATE;
int Button3Reg1 = NORMAL_STATE;
int Button3Reg2 = NORMAL_STATE;

int Button3Reg3 = NORMAL_STATE;
int TimeForButton3Press = 500;

int isButton3Pressed(){
	if(button3_flag == 1){
		button3_flag = 0;
		return 1;
	}
	return 0;
}

void subButton3(){
	button3_flag = 1;
}

void getButton3Input(){
	Button3Reg0 = Button3Reg1;
	Button3Reg1 = Button3Reg2;
	Button3Reg2 = HAL_GPIO_ReadPin(Button3_GPIO_Port, Button3_Pin);

	if((Button3Reg0  == Button3Reg1) && (Button3Reg1 == Button3Reg2)){
		if(Button3Reg3 != Button3Reg2){
			Button3Reg3 = Button3Reg2;
			if(Button3Reg2 == PRESSED_STATE){
				//TODO
				subButton3();
				TimeForButton3Press = 500;
			}
			else{
				TimeForButton3Press--;
				if(TimeForButton3Press == 0){
					//TODO
					Button3Reg3 = NORMAL_STATE;
				}
			}
		}
	}
}
