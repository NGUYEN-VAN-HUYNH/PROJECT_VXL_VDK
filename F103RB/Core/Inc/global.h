/*
 * global.h
 *
 *  Created on: Dec 3, 2024
 *      Author: Admin
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_
#include "main.h"
#define RED_GREEN 1
#define RED_YELLOW 2
#define GREEN_RED 3
#define YELLOW_RED 4



#define INIT 11
#define MODE_1 12
#define MODE_2 13
#define MODE_3 14
#define MODE_4 15
#define MODE_5 16
#define RED_EDIT 17
#define GREEN_EDIT 18
#define YELLOW_EDIT 19
#define RED_SAVE 20
#define GREEN_SAVE 21
#define YELLOW_SAVE 22
#define RED 23
#define YELLOW 24
#define GREEN 25
#define RED_GREEN_MAN 26
#define RED_YELLOW_MAN 27
#define GREEN_RED_MAN 28
#define YELLOW_RED_MAN 29
extern int status;
extern int counter;
extern int sch_counter;
extern int red_time;
extern int yellow_time;
extern int green_time;
extern int dem;
// INIT TIME
extern int RED_TIME;
extern int GREEN_TIME;
extern int YELLOW_TIME;
void blinky_led();




#endif /* INC_GLOBAL_H_ */
