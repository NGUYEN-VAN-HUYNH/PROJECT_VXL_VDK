/*
 * light_traffic.h
 *
 *  Created on: Oct 25, 2024
 *      Author: Admin
 */

#ifndef INC_LIGHT_TRAFFIC_H_
#define INC_LIGHT_TRAFFIC_H_
#include "main.h"
#include "global.h"
void traffic_light_1_run(int color);
void traffic_light_2_run(int color);
void traffic_light_3_run(int color);
void traffic_light_4_run(int color);
void clear_all_traffic_light();
void init_traffic_light_time(int red,int yellow, int green);


#endif /* INC_LIGHT_TRAFFIC_H_ */
