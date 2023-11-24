/*
 * button2.c
 *
 *  Created on: Nov 24, 2023
 *      Author: ACER
 */

#include "button.h"

int button2_flag = 0;

int Button2Reg0 = NORMAL_STATE;
int Button2Reg1 = NORMAL_STATE;
int Button2Reg2 = NORMAL_STATE;

int Button2Reg3 = NORMAL_STATE;
int TimeForButton2Press = 500;

int isButton2Pressed(){
	if(button2_flag == 1){
		button2_flag = 0;
		return 1;
	}
	return 0;
}

void subButton2(){
	button2_flag = 1;
}

void getButton2Input(){
	Button2Reg0 = Button2Reg1;
	Button2Reg1 = Button2Reg2;
	Button2Reg2 = HAL_GPIO_ReadPin(Button2_GPIO_Port, Button2_Pin);

	if((Button2Reg0  == Button2Reg1) && (Button2Reg1 == Button2Reg2)){
		if(Button2Reg3 != Button2Reg2){
			Button2Reg3 = Button2Reg2;
			if(Button2Reg2 == PRESSED_STATE){
				//TODO
				subButton2();
				TimeForButton2Press = 500;
			}
			else{
				TimeForButton2Press--;
				if(TimeForButton2Press == 0){
					//TODO
					Button2Reg3 = NORMAL_STATE;
				}
			}
		}
	}
}
