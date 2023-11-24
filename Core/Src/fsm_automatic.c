/*
 * fsm_automatic.c
 *
 *  Created on: Nov 24, 2023
 *      Author: ACER
 */

#include "fsm_automatic.h"
#include "fsm_mode1.h"
#include "fsm_mode2.h"
#include "fsm_mode3.h"
#include "fsm_mode4.h"
#include "display_led.h"
#include "toggle_led.h"

void fsm_automatic_run(){
	switch (status){
		case INIT:
			//TODO
			fsm_mode1();

			status = MODE1;
			break;
		case MODE1:
			//TODO
			fsm_mode1();
			if(isButton1Pressed() == 1){
				status = MODE2;
				display_LED_RED1();
				display_LED_RED2();
				setTimer2(50);
			}

			break;
		case MODE2:
			//TODO
			fsm_mode2();

			if(isButton1Pressed() == 1){
				status = MODE3;
				display_LED_YELLOW1();
				display_LED_YELLOW2();
				setTimer2(50);
			}
			break;
		case MODE3:
			//TODO
			fsm_mode3();

			if(isButton1Pressed() == 1){
				status = MODE4;
				display_LED_GREEN1();
				display_LED_GREEN2();
				setTimer2(50);
			}
			break;
		case MODE4:
			//TODO
			fsm_mode4();

			if(isButton1Pressed() == 1){
				status = MODE1;
				status1 = INIT;
			}
			break;
		default:
			break;
	}
}
