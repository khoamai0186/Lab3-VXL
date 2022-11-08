/*
 * button.c
 *
 *  Created on: Oct 26, 2022
 *      Author: USER
 */

#include "button.h"

int button1_flag = 0;
int button2_flag = 0;
int button3_flag = 0;

int Key1Reg0 = NORMAL_STATE;
int Key1Reg1 = NORMAL_STATE;
int Key1Reg2 = NORMAL_STATE;
int Key1Reg3 = NORMAL_STATE;

int Key2Reg0 = NORMAL_STATE;
int Key2Reg1 = NORMAL_STATE;
int Key2Reg2 = NORMAL_STATE;
int Key2Reg3 = NORMAL_STATE;

int Key3Reg0 = NORMAL_STATE;
int Key3Reg1 = NORMAL_STATE;
int Key3Reg2 = NORMAL_STATE;
int Key3Reg3 = NORMAL_STATE;

int TimerForKey1Press = 300;
int TimerForKey2Press = 300;
int TimerForKey3Press = 300;

int isButton1Pressed(){
	if(button1_flag == 1){
		button1_flag = 0;
		return 1;
	}
	return 0;
}
int isButton2Pressed(){
	if(button2_flag == 1){
		button2_flag = 0;
		return 1;
	}
	return 0;
}
int isButton3Pressed(){
	if(button3_flag == 1){
		button3_flag = 0;
		return 1;
	}
	return 0;
}

void subKey1Process(){
	button1_flag = 1;
}
void subKey2Process(){
	button2_flag = 1;
}
void subKey3Process(){
	button3_flag = 1;
}
void getKey1Input(){
	Key1Reg0 = Key1Reg1;
	Key1Reg1 = Key1Reg2;
	Key1Reg2 = HAL_GPIO_ReadPin(Button1_GPIO_Port, Button1_Pin);
	if((Key1Reg0 == Key1Reg1) && (Key1Reg1 == Key1Reg2)){
		if(Key1Reg3 != Key1Reg2){
			Key1Reg3 = Key1Reg2;
			if(Key1Reg2 == PRESSED_STATE){
				TimerForKey1Press = 300;
				subKey1Process();
			}
		}else {
			TimerForKey1Press--;
			if(TimerForKey1Press == 0){
				Key1Reg3 = NORMAL_STATE;
			}
		}
	}
}
void getKey2Input(){
	Key2Reg0 = Key2Reg1;
	Key2Reg1 = Key2Reg2;
	Key2Reg2 = HAL_GPIO_ReadPin(Button2_GPIO_Port, Button2_Pin);
	if((Key2Reg0 == Key2Reg1) && (Key2Reg1 == Key2Reg2)){
		if(Key2Reg3 != Key2Reg2){
			Key2Reg3 = Key2Reg2;
			if(Key2Reg2 == PRESSED_STATE){
				TimerForKey2Press = 300;
				subKey2Process();
			}
		}else {
			TimerForKey2Press--;
			if(TimerForKey2Press == 0){
				Key2Reg3 = NORMAL_STATE;
			}
		}
	}
}
void getKey3Input(){
	Key3Reg0 = Key3Reg1;
	Key3Reg1 = Key3Reg2;
	Key3Reg2 = HAL_GPIO_ReadPin(Button3_GPIO_Port, Button3_Pin);
	if((Key3Reg0 == Key3Reg1) && (Key3Reg1 == Key3Reg2)){
		if(Key3Reg3 != Key3Reg2){
			Key3Reg3 = Key3Reg2;
			if(Key3Reg2 == PRESSED_STATE){
				TimerForKey3Press = 300;
				subKey3Process();
			}
		}else {
			TimerForKey3Press--;
			if(TimerForKey3Press == 0){
				Key3Reg3 = NORMAL_STATE;
			}
		}
	}
}

void changeMode(){
	switch(mode){
	case MODE_1:
		fsm_automatic_run();
		if(isButton1Pressed()==1){
			mode = MODE_2;
			setTimer2(500);
		}
		break;
	case MODE_2:
		if(timer2_flag==1){
			HAL_GPIO_TogglePin(RED1_GPIO_Port, RED1_Pin);
			HAL_GPIO_TogglePin(RED2_GPIO_Port, RED2_Pin);

			HAL_GPIO_WritePin(YELLOW1_GPIO_Port, YELLOW1_Pin, SET);
			HAL_GPIO_WritePin(GREEN1_GPIO_Port, GREEN1_Pin, SET);
			HAL_GPIO_WritePin(YELLOW2_GPIO_Port, YELLOW2_Pin, SET);
			HAL_GPIO_WritePin(GREEN2_GPIO_Port, GREEN2_Pin, SET);
			setTimer2(500);
		}
		HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, RESET);
		HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
		display7SEG1(2);
		if(isButton2Pressed()==1){
			red_count++;
		}
		if(timer4_flag==1){
			update7SEG2(red_count);
			setTimer4(500);
		}
		if(isButton1Pressed()==1){
			setTimer2(500);
			mode = MODE_3;
		}
		break;
	case MODE_3:
		if(timer2_flag==1){
			HAL_GPIO_TogglePin(YELLOW1_GPIO_Port, YELLOW1_Pin);
			HAL_GPIO_TogglePin(YELLOW2_GPIO_Port, YELLOW2_Pin);

			HAL_GPIO_WritePin(RED1_GPIO_Port, RED1_Pin, SET);
			HAL_GPIO_WritePin(GREEN1_GPIO_Port, GREEN1_Pin, SET);
			HAL_GPIO_WritePin(RED2_GPIO_Port, RED2_Pin, SET);
			HAL_GPIO_WritePin(GREEN2_GPIO_Port, GREEN2_Pin, SET);
			setTimer2(500);
		}
		HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, RESET);
		HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
		display7SEG1(3);
		if(isButton2Pressed()==1){
			yellow_count++;
		}
		if(timer4_flag==1){
			update7SEG2(yellow_count);
			setTimer4(500);
		}
		if(isButton1Pressed()==1){
			setTimer2(500);
			mode = MODE_4;
		}
		break;
	case MODE_4:
		if(timer2_flag==1){
			HAL_GPIO_TogglePin(GREEN1_GPIO_Port, GREEN1_Pin);
			HAL_GPIO_TogglePin(GREEN2_GPIO_Port, GREEN2_Pin);

			HAL_GPIO_WritePin(RED1_GPIO_Port, RED1_Pin, SET);
			HAL_GPIO_WritePin(YELLOW1_GPIO_Port, YELLOW1_Pin, SET);
			HAL_GPIO_WritePin(RED2_GPIO_Port, RED2_Pin, SET);
			HAL_GPIO_WritePin(YELLOW2_GPIO_Port, YELLOW2_Pin, SET);
			setTimer2(500);
		}
		HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, RESET);
		HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, SET);
		display7SEG1(4);
		if(isButton2Pressed()==1){
			green_count++;
		}
		if(timer4_flag==1){
			update7SEG2(green_count);
			setTimer4(500);
		}
		if(isButton1Pressed()==1){
			mode = MODE_1;
		}
		break;
	default:
		break;
	}
}

