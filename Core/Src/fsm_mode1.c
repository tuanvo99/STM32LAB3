/*
 * fsm_mode1.c
 *
 *  Created on: Nov 24, 2023
 *      Author: ACER
 */

#include "fsm_mode1.h"
#include "display_led.h"
#include "toggle_led.h"

void fsm_mode1(){
		switch (status1){
			case INIT:
				//TODO
				display_LED_RED1();
				display_LED_GREEN2();

				status1 = RED1_GREEN2;
				setTimer1(300);
				break;
			case RED1_GREEN2:
				//TODO
				display_LED_RED1();
				display_LED_GREEN2();

				if(timer1_flag ==1){
					status1 = RED1_YELLOW2;
					setTimer1(200);
				}
				break;
			case RED1_YELLOW2:
				//TODO
				display_LED_RED1();
				display_LED_YELLOW2();

				if(timer1_flag ==1){
					status1 = GREEN1_RED2;
					setTimer1(300);
				}
				break;
			case GREEN1_RED2:
				//TODO
				display_LED_GREEN1();
				display_LED_RED2();

				if(timer1_flag ==1){
					status1 = YELLOW1_RED2;
					setTimer1(200);
				}
				break;
			case YELLOW1_RED2:
				//TODO
				display_LED_YELLOW1();
				display_LED_RED2();

				if(timer1_flag ==1){
					status1 = RED1_GREEN2;
					setTimer1(200);
				}
				break;
			default:
				break;
		}
	}
