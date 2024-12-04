/*
 * fsm_edit.c
 *
 *  Created on: Dec 3, 2024
 *      Author: Admin
 */
#include "fsm_edit.h"
void fsm_edit_run(){
	switch (status) {
	case RED_EDIT:
		if(sch_counter > 0){
			sch_counter --;
		}
		if (sch_counter == 0) {
			lcd_goto_XY(1, 0);
			lcd_send_string("TIME :    ");
		}
		if (isButton2Pressed() == 1) {
			if (RED_TIME < 7 || RED_TIME > 0) {
				RED_TIME++;
				if (RED_TIME == 7) {
					RED_TIME = 1;
				}
			}
			display_lcd_r1(RED_TIME);
		}
		if (isButton3Pressed() == 1) {
			status = RED_SAVE;
		    lcd_init();
			sch_counter = 2;
		}
		break;
	case GREEN_EDIT:
		if(sch_counter > 0){
			sch_counter --;
		}
		if (sch_counter == 0) {
			lcd_goto_XY(1, 0);
			lcd_send_string("TIME :     ");
		}
		if (isButton2Pressed() == 1) {
			if (GREEN_TIME < 7 || GREEN_TIME > 0) {
				GREEN_TIME++;
				if (GREEN_TIME == 7) {
					GREEN_TIME = 1;
				}
			}
			display_lcd_r1(GREEN_TIME);
		}
		if (isButton3Pressed() == 1) {
			status = GREEN_SAVE;
		    lcd_init();
			sch_counter = 2;
		}
		break;
	case YELLOW_EDIT:
		if(sch_counter > 0){
			sch_counter --;
		}
		if (sch_counter == 0) {
			lcd_goto_XY(1, 0);
			lcd_send_string("TIME :     ");
		}
		if (isButton2Pressed() == 1) {
			if (YELLOW_TIME < 7 || YELLOW_TIME > 0) {
				YELLOW_TIME++;
				if (YELLOW_TIME == 7) {
					YELLOW_TIME = 1;
				}
			}
			display_lcd_r1(YELLOW_TIME);
		}
		if (isButton3Pressed() == 1) {
			status = YELLOW_SAVE;
		    lcd_init();
			sch_counter = 2;
		}
		break;
	}
}



