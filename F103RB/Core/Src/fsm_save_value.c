/*
 * fsm_save_value.c
 *
 *  Created on: Dec 3, 2024
 *      Author: Admin
 */
#include "fsm_save_value.h"
void fsm_save_value_run(){
	switch (status) {
	case RED_SAVE:
		if(sch_counter > 0){
			sch_counter --;
		}
		clear_all_traffic_light();
		if (sch_counter == 0) {
			lcd_send_string("SAVED !");
			status = INIT;

		}
		break;
	case GREEN_SAVE:
		if(sch_counter > 0){
			sch_counter --;
		}
		clear_all_traffic_light();
		if (sch_counter == 0) {
			lcd_send_string("SAVED !");
			status = INIT;
		}
		break;
	case YELLOW_SAVE:
		if(sch_counter > 0){
			sch_counter --;
		}
		clear_all_traffic_light();
		if (sch_counter == 0) {
			lcd_send_string("SAVED !");
			status = INIT;
		}
		break;
	}
}


