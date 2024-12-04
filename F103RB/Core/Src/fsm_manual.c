/*
 * fsm_manual.c
 *
 *  Created on: Dec 3, 2024
 *      Author: Admin
 */
#include "fsm_manual.h"
void fsm_manual_run(){
	switch(status){
	case MODE_5:
	if(sch_counter > 0){
		sch_counter --;
	}
	if (sch_counter == 0) {
		status = RED_GREEN_MAN;
		lcd_init();
		lcd_send_string("RED_GREEN");
	}
	case RED_GREEN_MAN :
		if(isButton2Pressed() == 1){
			traffic_light_1_run(RED);
			traffic_light_2_run(RED);
			traffic_light_3_run(GREEN);
			traffic_light_4_run(GREEN);
		}
		if(isButton3Pressed() == 1){
			lcd_init();
			lcd_send_string("RED_YELLOW");
			status = RED_YELLOW_MAN;
		}
		if (isButton1Pressed() == 1) {
			status = MODE_1;
			lcd_init();
			clear_all_traffic_light();
			lcd_send_string("MODE 1:AUTOMATIC");
			sch_counter = 1;
		}
		break;
	case RED_YELLOW_MAN :
		if(isButton2Pressed() == 1){
			traffic_light_1_run(RED);
			traffic_light_2_run(RED);
			traffic_light_3_run(YELLOW);
			traffic_light_4_run(YELLOW);
		}
		if(isButton3Pressed() == 1){
			lcd_init();
			lcd_send_string("GREEN_RED");
			status = GREEN_RED_MAN;
		}
		if (isButton1Pressed() == 1) {
			status = MODE_1;
			lcd_init();
			clear_all_traffic_light();
			lcd_send_string("MODE 1:AUTOMATIC");
			sch_counter = 1;
		}
		break;
	case GREEN_RED_MAN :
		if(isButton2Pressed() == 1){
			traffic_light_1_run(GREEN);
			traffic_light_2_run(GREEN);
			traffic_light_3_run(RED);
			traffic_light_4_run(RED);
		}
		if(isButton3Pressed() == 1){
			lcd_init();
			lcd_send_string("YELLOW_RED");
			status = YELLOW_RED_MAN;
		}
		if (isButton1Pressed() == 1) {
			status = MODE_1;
			lcd_init();
			clear_all_traffic_light();
			lcd_send_string("MODE 1:AUTOMATIC");
			sch_counter = 1;
		}
		break;
	case YELLOW_RED_MAN :
		if(isButton2Pressed() == 1){
			traffic_light_1_run(YELLOW);
			traffic_light_2_run(YELLOW);
			traffic_light_3_run(RED);
			traffic_light_4_run(RED);
		}
		if(isButton3Pressed() == 1){
			lcd_init();
			lcd_send_string("RED_GREEN");
			status = RED_GREEN_MAN;
		}
		if (isButton1Pressed() == 1) {
			status = MODE_1;
			lcd_init();
			clear_all_traffic_light();
			lcd_send_string("MODE 1:AUTOMATIC");
			sch_counter = 1;
		}
		break;
	}

}


