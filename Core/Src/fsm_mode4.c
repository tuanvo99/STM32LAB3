/*
 * fsm_mode4.c
 *
 *  Created on: Nov 24, 2023
 *      Author: ACER
 */

#include "fsm_mode4.h"
#include "display_led.h"
#include "toggle_led.h"

void fsm_mode4(){
	if(timer2_flag == 1){
		setTimer2(50);
		toggle_LED_GREEN1();
		toggle_LED_GREEN2();
	}
}
