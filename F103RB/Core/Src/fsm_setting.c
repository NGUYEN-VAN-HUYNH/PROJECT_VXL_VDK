/*
 * fsm_setting.c
 *
 *  Created on: Dec 3, 2024
 *      Author: Admin
 */
#include "fsm_setting.h"

void fsm_setting_run(){
	switch(status){
	case MODE_2 :
		if(sch_counter > 0){
			sch_counter --;
		}
		if (sch_counter == 0) {
			lcd_goto_XY(1, 0);
			lcd_send_string("Next_mode : B1");
			lcd_goto_XY(2, 0);
			lcd_send_string("Edit red : B2");
		}

		if (isButton1Pressed() == 1) {
			status = MODE_3;
			traffic_light_1_run(GREEN);
			traffic_light_2_run(GREEN);
			traffic_light_3_run(GREEN);
			traffic_light_4_run(GREEN);
			lcd_init();
			lcd_send_string("MODE 3:SET GREEN");
			sch_counter = 2;
		}
		if (isButton2Pressed() == 1) {
			status = RED_EDIT;
			lcd_init();
			lcd_send_string("EDIT:RED");
			sch_counter = 2;
		}
		break;
	case MODE_3:
		if(sch_counter > 0){
			sch_counter --;
		}
		if (sch_counter == 0) {
			lcd_goto_XY(1, 0);
			lcd_send_string("Next_mode : B1  ");
			lcd_goto_XY(2, 0);
			lcd_send_string("Edit green : B2");
		}

		if (isButton1Pressed() == 1) {
			status = MODE_4;
			traffic_light_1_run(YELLOW);
			traffic_light_2_run(YELLOW);
			traffic_light_3_run(YELLOW);
			traffic_light_4_run(YELLOW);
			lcd_init();
			lcd_send_string("MODE4:SET YELLOW");
			sch_counter = 2;
		}
		if (isButton2Pressed() == 1) {
			status = GREEN_EDIT;
			lcd_init();
			lcd_send_string("EDIT:GREEN");
			sch_counter = 2;
		}
		break;
	case MODE_4:
		if(sch_counter > 0){
			sch_counter --;
		}
		if (sch_counter == 0) {
			lcd_goto_XY(1, 0);
			lcd_send_string("Next_mode : B1  ");
			lcd_goto_XY(2, 0);
			lcd_send_string("Edit yellow : B2");
		}

		if (isButton1Pressed() == 1) {
			status = MODE_5;
			lcd_init();
			clear_all_traffic_light();
			lcd_send_string("MODE 5:MANUAL");
			sch_counter = 2;
		}
		if (isButton2Pressed() == 1) {
			status = YELLOW_EDIT;
			lcd_init();
			lcd_send_string("EDIT:YELLOW");
			sch_counter = 2;
		}
	break;
	}
}


