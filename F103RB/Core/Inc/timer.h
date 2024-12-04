/*
 * timer.h
 *
 *  Created on: Sep 21, 2024
 *      Author: Admin
 */

#ifndef INC_TIMER_H_
#define INC_TIMER_H_
#include "main.h"
extern int timer1_flag;
extern int timer1_counter;
extern int led_status;
void timerRun();
void setTimer1(int duration);


#endif /* INC_TIMER_H_ */
