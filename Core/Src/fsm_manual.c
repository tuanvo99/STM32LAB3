/*
 * fsm_manual.c
 *
 *  Created on: Nov 24, 2023
 *      Author: ACER
 */

#include "fsm_manual.h"
#include "display_led.h"

void fsm_manual_run(){
	switch (status){
		case ALL_RED:
			display_LED_RED1();
			display_LED_RED2();

			if(timer1_flag == 1){
				status = RED1_GREEN2;
				setTimer1(300);
			}
			if(isButton2Pressed() == 1){
				status = ALL_YELLOW;
				setTimer1(500);
			}
			if(isButton3Pressed() == 1){
				status = ALL_GREEN;
				setTimer1(500);
			}
			break;
		case ALL_YELLOW:
			display_LED_YELLOW1();
			display_LED_YELLOW2();

			if(timer1_flag == 1){
				status = RED1_GREEN2;
				setTimer1(300);
			}
			if(isButton1Pressed() == 1){
				status = ALL_RED;
				setTimer1(500);
			}
			if(isButton3Pressed() == 1){
				status = ALL_GREEN;
				setTimer1(500);
			}
			break;
		case ALL_GREEN:
			display_LED_GREEN1();
			display_LED_GREEN2();

			if(timer1_flag == 1){
				status = RED1_GREEN2;
				setTimer1(300);
			}
			if(isButton1Pressed() == 1){
				status = ALL_RED;
				setTimer1(500);
			}
			if(isButton2Pressed() == 1){
				status = ALL_YELLOW;
				setTimer1(500);
			}
			break;
		default:
			break;
	}
}
