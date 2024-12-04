/*
 * light_traffic.c
 *
 *  Created on: Dec 3, 2024
 *      Author: Admin
 */
#include "light_traffic.h"
#include "global.h"
void clear_all_traffic_light(){
	   HAL_GPIO_WritePin(traffic_light_1_0_GPIO_Port, traffic_light_1_0_Pin, RESET);
	   HAL_GPIO_WritePin(traffic_light_1_1_GPIO_Port, traffic_light_1_1_Pin, RESET);
	   HAL_GPIO_WritePin(traffic_light_2_0_GPIO_Port, traffic_light_2_0_Pin, RESET);
	   HAL_GPIO_WritePin(traffic_light_2_1_GPIO_Port, traffic_light_2_1_Pin, RESET);
	   HAL_GPIO_WritePin(traffic_light_3_0_GPIO_Port, traffic_light_3_0_Pin, RESET);
	   HAL_GPIO_WritePin(traffic_light_3_1_GPIO_Port, traffic_light_3_1_Pin, RESET);
	   HAL_GPIO_WritePin(traffic_light_4_0_GPIO_Port, traffic_light_4_0_Pin, RESET);
	   HAL_GPIO_WritePin(traffic_light_4_1_GPIO_Port, traffic_light_4_1_Pin, RESET);
}
void traffic_light_1_run(int color){
	switch (color) {
	case RED:
	   HAL_GPIO_WritePin(traffic_light_1_0_GPIO_Port, traffic_light_1_0_Pin, SET);
	   HAL_GPIO_WritePin(traffic_light_1_1_GPIO_Port, traffic_light_1_1_Pin, SET);
		break;
	case YELLOW:
	   HAL_GPIO_WritePin(traffic_light_1_0_GPIO_Port, traffic_light_1_0_Pin, SET);
	   HAL_GPIO_WritePin(traffic_light_1_1_GPIO_Port, traffic_light_1_1_Pin, RESET);
		break;
	case GREEN:
	   HAL_GPIO_WritePin(traffic_light_1_0_GPIO_Port, traffic_light_1_0_Pin, RESET);
	   HAL_GPIO_WritePin(traffic_light_1_1_GPIO_Port, traffic_light_1_1_Pin, SET);
		break;
	default :
	   HAL_GPIO_WritePin(traffic_light_1_0_GPIO_Port, traffic_light_1_0_Pin, RESET);
	   HAL_GPIO_WritePin(traffic_light_1_1_GPIO_Port, traffic_light_1_1_Pin, RESET);
	   break;
	}
}
void traffic_light_2_run(int color){
	switch (color) {
	case RED:
	   HAL_GPIO_WritePin(traffic_light_2_0_GPIO_Port, traffic_light_2_0_Pin, SET);
	   HAL_GPIO_WritePin(traffic_light_2_1_GPIO_Port, traffic_light_2_1_Pin, SET);
		break;
	case YELLOW:
	   HAL_GPIO_WritePin(traffic_light_2_0_GPIO_Port, traffic_light_2_0_Pin, SET);
	   HAL_GPIO_WritePin(traffic_light_2_1_GPIO_Port, traffic_light_2_1_Pin, RESET);
		break;
	case GREEN:
	   HAL_GPIO_WritePin(traffic_light_2_0_GPIO_Port, traffic_light_2_0_Pin, RESET);
	   HAL_GPIO_WritePin(traffic_light_2_1_GPIO_Port, traffic_light_2_1_Pin, SET);
		break;
	default :
	   HAL_GPIO_WritePin(traffic_light_2_0_GPIO_Port, traffic_light_2_0_Pin, RESET);
	   HAL_GPIO_WritePin(traffic_light_2_1_GPIO_Port, traffic_light_2_1_Pin, RESET);
	   break;
	}
}
void traffic_light_3_run(int color){
	switch (color) {
	case RED:
	   HAL_GPIO_WritePin(traffic_light_3_0_GPIO_Port, traffic_light_3_0_Pin, SET);
	   HAL_GPIO_WritePin(traffic_light_3_1_GPIO_Port, traffic_light_3_1_Pin, SET);
		break;
	case YELLOW:
	   HAL_GPIO_WritePin(traffic_light_3_0_GPIO_Port, traffic_light_3_0_Pin, SET);
	   HAL_GPIO_WritePin(traffic_light_3_1_GPIO_Port, traffic_light_3_1_Pin, RESET);
		break;
	case GREEN:
	   HAL_GPIO_WritePin(traffic_light_3_0_GPIO_Port, traffic_light_3_0_Pin, RESET);
	   HAL_GPIO_WritePin(traffic_light_3_1_GPIO_Port, traffic_light_3_1_Pin, SET);
		break;
	default :
	   HAL_GPIO_WritePin(traffic_light_3_0_GPIO_Port, traffic_light_3_0_Pin, RESET);
	   HAL_GPIO_WritePin(traffic_light_3_1_GPIO_Port, traffic_light_3_1_Pin, RESET);
	   break;
	}
}
void traffic_light_4_run(int color){
	switch (color) {
	case RED:
	   HAL_GPIO_WritePin(traffic_light_4_0_GPIO_Port, traffic_light_4_0_Pin, SET);
	   HAL_GPIO_WritePin(traffic_light_4_1_GPIO_Port, traffic_light_4_1_Pin, SET);
		break;
	case YELLOW:
	   HAL_GPIO_WritePin(traffic_light_4_0_GPIO_Port, traffic_light_4_0_Pin, SET);
	   HAL_GPIO_WritePin(traffic_light_4_1_GPIO_Port, traffic_light_4_1_Pin, RESET);
		break;
	case GREEN:
	   HAL_GPIO_WritePin(traffic_light_4_0_GPIO_Port, traffic_light_4_0_Pin, RESET);
	   HAL_GPIO_WritePin(traffic_light_4_1_GPIO_Port, traffic_light_4_1_Pin, SET);
		break;
	default :
	   HAL_GPIO_WritePin(traffic_light_4_0_GPIO_Port, traffic_light_4_0_Pin, RESET);
	   HAL_GPIO_WritePin(traffic_light_4_1_GPIO_Port, traffic_light_4_1_Pin, RESET);
	   break;
	}
}

void init_traffic_light_time(int red,int yellow, int green){
	red_time = red;
	yellow_time = yellow;
	green_time = green;

}
