/*
 * display_time.c
 *
 *  Created on: Dec 3, 2024
 *      Author: Admin
 */
#include "display_time.h"

#include <stdio.h>

void init_display(){
	   lcd_goto_XY(1, 0);
	   lcd_send_string("Time 1 : ");
	   lcd_goto_XY(2, 0);
	   lcd_send_string("Time 2 :");
	  // display_lcd_r1(0);
	  // display_lcd_r2(0);
}
void display_lcd_r1(int num){
    char buffer[3];
    sprintf(buffer, "%02d", num);
    lcd_goto_XY(1, 10);
    lcd_send_string(buffer);
}

void display_lcd_r2(int num){
    char buffer[3];
    sprintf(buffer, "%02d", num);
    lcd_goto_XY(2, 10);
    lcd_send_string(buffer);
}


