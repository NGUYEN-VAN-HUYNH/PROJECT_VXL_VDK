/*
 * global.c
 *
 *  Created on: Dec 3, 2024
 *      Author: Admin
 */

#include "global.h"
int status = INIT;
int counter = 0;
int sch_counter = 0;
int red_time = 0;
int yellow_time = 0;
int green_time = 0;
int RED_TIME = 5;
int GREEN_TIME = 3;
int YELLOW_TIME = 2;
void blinky_led(){
	HAL_GPIO_TogglePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin);
}


