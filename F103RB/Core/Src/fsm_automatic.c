/*
 * fsm_automatic.c
 *
 *  Created on: Dec 3, 2024
 *      Author: Admin
 */
#include "fsm_automatic.h"
#include "light_traffic.h"
#include "display_time.h"
#include "i2c-lcd.h"
#include "button.h"
void fsm_automatic_run(){
	switch (status) {
	case INIT:
		clear_all_traffic_light();
		lcd_init();
		init_traffic_light_time(RED_TIME,YELLOW_TIME,GREEN_TIME);
		if(isButton1Pressed() == 1){
		    lcd_send_string("MODE 1:AUTOMATIC");
			status = MODE_1;
			sch_counter = 1;
		}
		break;
	case MODE_1:
		lcd_init();
		if(sch_counter > 0){
			sch_counter --;
		}
		if(sch_counter == 0){
			init_display();
			status = RED_GREEN;
			sch_counter = 1;
		}

		break;
	case RED_GREEN:
	    if (sch_counter > 0) {
	        sch_counter--;
	    }
	    if (sch_counter == 0) {
	        traffic_light_1_run(RED);
	        traffic_light_2_run(RED);
	        traffic_light_3_run(GREEN);
	        traffic_light_4_run(GREEN);

	        // Giảm thời gian đỏ
	        if (red_time > 0) {
	            display_lcd_r1(red_time);
	            red_time--;
	        }
	        // Giảm thời gian xanh
	        if (green_time > 0) {
	            display_lcd_r2(green_time);
	            green_time--;
	        // Chỉ chuyển trạng thái khi xanh hết time
	        if (green_time == 0) {
	        	green_time = GREEN_TIME;
	            status = RED_YELLOW;
	        }
	    }	        // Đặt lại bộ đếm
	     sch_counter = 1;
	}
		if(isButton1Pressed() == 1){
			//clear_all_traffic_light();
			traffic_light_1_run(RED);
			traffic_light_2_run(RED);
			traffic_light_3_run(RED);
			traffic_light_4_run(RED);
		    //lcd_send_string("MODE 2:SET RED");
			lcd_init();
			lcd_send_string("MODE 2:SET RED");
			status = MODE_2;
			sch_counter = 2;
		}
	    break;
	case RED_YELLOW:
	    if (sch_counter > 0) {
	        sch_counter--;
	    }
	    if (sch_counter == 0) {
	        traffic_light_1_run(RED);
	        traffic_light_2_run(RED);
	        traffic_light_3_run(YELLOW);
	        traffic_light_4_run(YELLOW);

	        // Giảm thời gian đỏ
	        if (red_time > 0) {
	            display_lcd_r1(red_time);
	            red_time--;
	        }
	        // Giảm thời gian xanh
	        if (yellow_time > 0) {
	            display_lcd_r2(yellow_time);
	            yellow_time--;
	        // Chỉ chuyển trạng thái khi xanh hết time
	        if (red_time == 0 && yellow_time == 0) {
	        	red_time = RED_TIME;
	        	yellow_time = YELLOW_TIME;
	            status = GREEN_RED;
	        }
	    }	        // Đặt lại bộ đếm
	     sch_counter = 1;
	}
		if(isButton1Pressed() == 1){
			//clear_all_traffic_light();
			traffic_light_1_run(RED);
			traffic_light_2_run(RED);
			traffic_light_3_run(RED);
			traffic_light_4_run(RED);
		    //lcd_send_string("MODE 2:SET RED");
			lcd_init();
			lcd_send_string("MODE 2:SET RED");
			status = MODE_2;
			sch_counter = 2;
		}
	    break;
	case GREEN_RED:
	    if (sch_counter > 0) {
	        sch_counter--;
	    }
	    if (sch_counter == 0) {
	        traffic_light_1_run(GREEN);
	        traffic_light_2_run(GREEN);
	        traffic_light_3_run(RED);
	        traffic_light_4_run(RED);

	        // Giảm thời gian đỏ
	        if (green_time > 0) {
	            display_lcd_r1(green_time);
	            green_time--;
	        }
	        // Giảm thời gian xanh
	        if (red_time > 0) {
	            display_lcd_r2(red_time);
	            red_time--;
	        // Chỉ chuyển trạng thái khi xanh hết time
	        if (green_time == 0) {
	        	green_time = GREEN_TIME;
	            status = YELLOW_RED;
	        }
	    }	        // Đặt lại bộ đếm
	     sch_counter = 1;
	}
		if(isButton1Pressed() == 1){
			//clear_all_traffic_light();
			traffic_light_1_run(RED);
			traffic_light_2_run(RED);
			traffic_light_3_run(RED);
			traffic_light_4_run(RED);
		    //lcd_send_string("MODE 2:SET RED");
			lcd_init();
			lcd_send_string("MODE 2:SET RED");
			status = MODE_2;
			sch_counter = 2;
		}
	    break;
	case YELLOW_RED:
	    if (sch_counter > 0) {
	        sch_counter--;
	    }
	    if (sch_counter == 0) {
	        traffic_light_1_run(YELLOW);
	        traffic_light_2_run(YELLOW);
	        traffic_light_3_run(RED);
	        traffic_light_4_run(RED);

	        // Giảm thời gian đỏ
	        if (yellow_time > 0) {
	            display_lcd_r1(yellow_time);
	            yellow_time--;
	        }
	        // Giảm thời gian xanh
	        if (red_time > 0) {
	            display_lcd_r2(red_time);
	            red_time--;
	        // Chỉ chuyển trạng thái khi xanh hết time
	        if (yellow_time == 0 && red_time == 0) {
	        	yellow_time = YELLOW_TIME;
	        	red_time = RED_TIME;
	            status = RED_GREEN;
	        }
	    }	        // Đặt lại bộ đếm
	     sch_counter = 1;
	}
		if(isButton1Pressed() == 1){
			//clear_all_traffic_light();
			traffic_light_1_run(RED);
			traffic_light_2_run(RED);
			traffic_light_3_run(RED);
			traffic_light_4_run(RED);
		    //lcd_send_string("MODE 2:SET RED");
			lcd_init();
			lcd_send_string("MODE 2:SET RED");
			status = MODE_2;
			sch_counter = 2;
		}
	    break;
  }
}



