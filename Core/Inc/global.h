/*
 * global.h
 *
 *  Created on: Nov 24, 2023
 *      Author: ACER
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "software_timer.h"
#include "button.h"

#define INIT 1
#define RED1_GREEN2 2
#define RED1_YELLOW2 3
#define GREEN1_RED2 4
#define YELLOW1_RED2 5

#define ALL_RED 15
#define ALL_YELLOW 16
#define ALL_GREEN 17

#define MODE1 25
#define MODE2 26
#define MODE3 27
#define MODE4 28

extern int status;
extern int status1;
extern int status2;
extern int status3;
extern int status4;

#endif /* INC_GLOBAL_H_ */
