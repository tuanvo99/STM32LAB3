/*
 * button1.c
 *
 *  Created on: Nov 24, 2023
 *      Author: ACER
 */

#include "button.h"

int button1_flag = 0;

int Button1Reg0 = NORMAL_STATE;
int Button1Reg1 = NORMAL_STATE;
int Button1Reg2 = NORMAL_STATE;

int Button1Reg3 = NORMAL_STATE;
int TimeForButton1Press = 500;

int isButton1Pressed(){
	if(button1_flag == 1){
		button1_flag = 0;
		return 1;
	}
	return 0;
}

void subButton1(){
	button1_flag = 1;
}

void getButton1Input(){
	Button1Reg0 = Button1Reg1;
	Button1Reg1 = Button1Reg2;
	Button1Reg2 = HAL_GPIO_ReadPin(Button1_GPIO_Port, Button1_Pin);

	if((Button1Reg0  == Button1Reg1) && (Button1Reg1 == Button1Reg2)){
		if(Button1Reg3 != Button1Reg2){
			Button1Reg3 = Button1Reg2;
			if(Button1Reg2 == PRESSED_STATE){
				//TODO
				subButton1();
				TimeForButton1Press = 500;
			}
			else{
				TimeForButton1Press--;
				if(TimeForButton1Press == 0){
					//TODO
					Button1Reg3 = NORMAL_STATE;
				}
			}
		}
	}
}
