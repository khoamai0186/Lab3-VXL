/*
 * software_timer.c
 *
 *  Created on: Oct 26, 2022
 *      Author: USER
 */


#include "software_timer.h"

int timer1_counter = 0;
int timer1_flag = 0;

int timer2_counter = 0;
int timer2_flag = 0;

int timer3_counter = 0;
int timer3_flag = 0;

int timer4_counter = 0;
int timer4_flag = 0;

int time_cycle =10;
void setTimer1(int duration){
	timer1_counter = duration/time_cycle;
	timer1_flag = 0;
}

void setTimer2(int duration){
	timer2_counter = duration/time_cycle;
	timer2_flag = 0;
}
void setTimer3(int duration){
	timer3_counter = duration/time_cycle;
	timer3_flag = 0;
}
void setTimer4(int duration){
	timer4_counter = duration/time_cycle;
	timer4_flag = 0;
}
void timerRun(){
	if(timer1_counter > 0 ){
		timer1_counter--;
		if(timer1_counter <= 0 ){
			timer1_flag = 1;
		}
	}
	if(timer2_counter > 0 ){
		timer2_counter--;
		if(timer2_counter <= 0 ){
			timer2_flag = 1;
		}
	}
	if(timer3_counter > 0 ){
		timer3_counter--;
		if(timer3_counter <= 0 ){
			timer3_flag = 1;
		}
	}
	if(timer4_counter > 0 ){
		timer4_counter--;
		if(timer4_counter <= 0 ){
			timer4_flag = 1;
		}
	}
}


