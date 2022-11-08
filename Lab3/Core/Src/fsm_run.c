/*
 * fsm_automatic.c
 *
 *  Created on: Oct 26, 2022
 *      Author: USER
 */


#include "fsm_run.h"

int temp = 0;
int temp_red = 0;
int temp_yellow = 0;
int temp_green = 0;
void fsm_automatic_run(){
	switch(status){
	case INIT:
		HAL_GPIO_WritePin(RED1_GPIO_Port, RED1_Pin, SET);
		HAL_GPIO_WritePin(YELLOW1_GPIO_Port, YELLOW1_Pin, SET);
		HAL_GPIO_WritePin(GREEN1_GPIO_Port, GREEN1_Pin, SET);

		HAL_GPIO_WritePin(RED2_GPIO_Port, RED2_Pin, SET);
		HAL_GPIO_WritePin(YELLOW2_GPIO_Port, YELLOW2_Pin, SET);
		HAL_GPIO_WritePin(GREEN2_GPIO_Port, GREEN2_Pin, SET);


		status = AUTO_RED;
		temp_red = red_count;
		setTimer1(red_count*1000);
		break;
	case AUTO_RED:
		HAL_GPIO_WritePin(RED1_GPIO_Port, RED1_Pin, RESET);
		HAL_GPIO_WritePin(YELLOW1_GPIO_Port, YELLOW1_Pin, SET);
		HAL_GPIO_WritePin(GREEN1_GPIO_Port, GREEN1_Pin, SET);

		HAL_GPIO_WritePin(RED2_GPIO_Port, RED2_Pin, SET);
		HAL_GPIO_WritePin(YELLOW2_GPIO_Port, YELLOW2_Pin, SET);
		HAL_GPIO_WritePin(GREEN2_GPIO_Port, GREEN2_Pin, RESET);
		if(timer4_flag==1){
			update7SEG(temp_red);
			if(timer3_flag==1){
				temp_red--;
				setTimer3(1000);
			}
			setTimer4(500);
		}
		if(timer1_flag == 1){
			status = AUTO_YELLOW;
			temp = AUTO_RED;
			temp_yellow = yellow_count;
			setTimer1(yellow_count*1000);
		}
		break;
	case AUTO_YELLOW:
		HAL_GPIO_WritePin(RED1_GPIO_Port, RED1_Pin, SET);
		HAL_GPIO_WritePin(YELLOW1_GPIO_Port, YELLOW1_Pin, RESET);
		HAL_GPIO_WritePin(GREEN1_GPIO_Port, GREEN1_Pin, SET);

		HAL_GPIO_WritePin(RED2_GPIO_Port, RED2_Pin, SET);
		HAL_GPIO_WritePin(YELLOW2_GPIO_Port, YELLOW2_Pin, RESET);
		HAL_GPIO_WritePin(GREEN2_GPIO_Port, GREEN2_Pin, SET);

		if(timer4_flag==1){
			update7SEG(temp_yellow);

			if(timer3_flag==1){
				temp_yellow--;
				setTimer3(1000);
			}
			setTimer4(500);
		}
		if(timer1_flag == 1 && temp == AUTO_RED){
			status = AUTO_GREEN;
			temp_green = green_count;
			setTimer1(green_count*1000);
		}
		if(timer1_flag == 1 && temp == AUTO_GREEN){
			status = AUTO_RED;
			temp_red = red_count;
			setTimer1(red_count*1000);
		}
		break;
	case AUTO_GREEN:
		HAL_GPIO_WritePin(RED1_GPIO_Port, RED1_Pin, SET);
		HAL_GPIO_WritePin(YELLOW1_GPIO_Port, YELLOW1_Pin, SET);
		HAL_GPIO_WritePin(GREEN1_GPIO_Port, GREEN1_Pin, RESET);

		HAL_GPIO_WritePin(RED2_GPIO_Port, RED2_Pin, RESET);
		HAL_GPIO_WritePin(YELLOW2_GPIO_Port, YELLOW2_Pin, SET);
		HAL_GPIO_WritePin(GREEN2_GPIO_Port, GREEN2_Pin, SET);

		if(timer4_flag==1){
			update7SEG(temp_green);

			if(timer3_flag==1){
				temp_green--;
				setTimer3(1000);
			}
			setTimer4(500);
		}
		if(timer1_flag == 1){
			status = AUTO_YELLOW;
			temp = AUTO_GREEN;
			temp_yellow = yellow_count;
			setTimer1(yellow_count*1000);
		}
		break;
	default:
		break;
	}
}
