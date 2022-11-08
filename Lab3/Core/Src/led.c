/*
 * led.c
 *
 *  Created on: Oct 26, 2022
 *      Author: USER
 */

#include "led.h"

void display7SEG1(int num){
	switch(num){
	case 0:{
		HAL_GPIO_WritePin(CA_GPIO_Port, CA_Pin, 0);
		HAL_GPIO_WritePin(CB_GPIO_Port, CB_Pin, 0);
		HAL_GPIO_WritePin(CC_GPIO_Port, CC_Pin, 0);
		HAL_GPIO_WritePin(CD_GPIO_Port, CD_Pin, 0);
		HAL_GPIO_WritePin(CE_GPIO_Port, CE_Pin, 0);
		HAL_GPIO_WritePin(CF_GPIO_Port, CF_Pin, 0);
		HAL_GPIO_WritePin(CG_GPIO_Port, CG_Pin, 1);
		break;
	}
	case 1:{
		HAL_GPIO_WritePin(CA_GPIO_Port, CA_Pin, 1);
		HAL_GPIO_WritePin(CB_GPIO_Port, CB_Pin, 0);
		HAL_GPIO_WritePin(CC_GPIO_Port, CC_Pin, 0);
		HAL_GPIO_WritePin(CD_GPIO_Port, CD_Pin, 1);
		HAL_GPIO_WritePin(CE_GPIO_Port, CE_Pin, 1);
		HAL_GPIO_WritePin(CF_GPIO_Port, CF_Pin, 1);
		HAL_GPIO_WritePin(CG_GPIO_Port, CG_Pin, 1);
		break;
	}
	case 2:{
		HAL_GPIO_WritePin(CA_GPIO_Port, CA_Pin, 0);
		HAL_GPIO_WritePin(CB_GPIO_Port, CB_Pin, 0);
		HAL_GPIO_WritePin(CC_GPIO_Port, CC_Pin, 1);
		HAL_GPIO_WritePin(CG_GPIO_Port, CG_Pin, 0);
		HAL_GPIO_WritePin(CD_GPIO_Port, CD_Pin, 0);
		HAL_GPIO_WritePin(CE_GPIO_Port, CE_Pin, 0);
		HAL_GPIO_WritePin(CF_GPIO_Port, CF_Pin, 1);
		break;
	}
	case 3:{
		HAL_GPIO_WritePin(CA_GPIO_Port, CA_Pin, 0);
		HAL_GPIO_WritePin(CB_GPIO_Port, CB_Pin, 0);
		HAL_GPIO_WritePin(CC_GPIO_Port, CC_Pin, 0);
		HAL_GPIO_WritePin(CD_GPIO_Port, CD_Pin, 0);
		HAL_GPIO_WritePin(CE_GPIO_Port, CE_Pin, 1);
		HAL_GPIO_WritePin(CF_GPIO_Port, CF_Pin, 1);
		HAL_GPIO_WritePin(CG_GPIO_Port, CG_Pin, 0);
		break;
	}
	case 4:{
		HAL_GPIO_WritePin(CA_GPIO_Port, CA_Pin, 1);
		HAL_GPIO_WritePin(CB_GPIO_Port, CB_Pin, 0);
		HAL_GPIO_WritePin(CC_GPIO_Port, CC_Pin, 0);
		HAL_GPIO_WritePin(CD_GPIO_Port, CD_Pin, 1);
		HAL_GPIO_WritePin(CE_GPIO_Port, CE_Pin, 1);
		HAL_GPIO_WritePin(CG_GPIO_Port, CG_Pin, 0);
		HAL_GPIO_WritePin(CF_GPIO_Port, CF_Pin, 0);
		break;
	}
	case 5:{
		HAL_GPIO_WritePin(CA_GPIO_Port, CA_Pin, 0);
		HAL_GPIO_WritePin(CB_GPIO_Port, CB_Pin, 1);
		HAL_GPIO_WritePin(CC_GPIO_Port, CC_Pin, 0);
		HAL_GPIO_WritePin(CD_GPIO_Port, CD_Pin, 0);
		HAL_GPIO_WritePin(CE_GPIO_Port, CE_Pin, 1);
		HAL_GPIO_WritePin(CG_GPIO_Port, CG_Pin, 0);
		HAL_GPIO_WritePin(CF_GPIO_Port, CF_Pin, 0);
		break;
	}
	case 6:{
		HAL_GPIO_WritePin(CA_GPIO_Port, CA_Pin, 0);
		HAL_GPIO_WritePin(CB_GPIO_Port, CB_Pin, 1);
		HAL_GPIO_WritePin(CG_GPIO_Port, CG_Pin, 0);
		HAL_GPIO_WritePin(CC_GPIO_Port, CC_Pin, 0);
		HAL_GPIO_WritePin(CD_GPIO_Port, CD_Pin, 0);
		HAL_GPIO_WritePin(CE_GPIO_Port, CE_Pin, 0);
		HAL_GPIO_WritePin(CF_GPIO_Port, CF_Pin, 0);
		break;
	}
	case 7:{
		HAL_GPIO_WritePin(CA_GPIO_Port, CA_Pin, 0);
		HAL_GPIO_WritePin(CB_GPIO_Port, CB_Pin, 0);
		HAL_GPIO_WritePin(CC_GPIO_Port, CC_Pin, 0);
		HAL_GPIO_WritePin(CD_GPIO_Port, CD_Pin, 1);
		HAL_GPIO_WritePin(CE_GPIO_Port, CE_Pin, 1);
		HAL_GPIO_WritePin(CF_GPIO_Port, CF_Pin, 1);
		HAL_GPIO_WritePin(CG_GPIO_Port, CG_Pin, 1);
		break;
	}
	case 8:{
		HAL_GPIO_WritePin(CA_GPIO_Port, CA_Pin, 0);
		HAL_GPIO_WritePin(CB_GPIO_Port, CB_Pin, 0);
		HAL_GPIO_WritePin(CC_GPIO_Port, CC_Pin, 0);
		HAL_GPIO_WritePin(CD_GPIO_Port, CD_Pin, 0);
		HAL_GPIO_WritePin(CE_GPIO_Port, CE_Pin, 0);
		HAL_GPIO_WritePin(CF_GPIO_Port, CF_Pin, 0);
		HAL_GPIO_WritePin(CG_GPIO_Port, CG_Pin, 0);
		break;
	}
	case 9:{
		HAL_GPIO_WritePin(CA_GPIO_Port, CA_Pin, 0);
		HAL_GPIO_WritePin(CB_GPIO_Port, CB_Pin, 0);
		HAL_GPIO_WritePin(CC_GPIO_Port, CC_Pin, 0);
		HAL_GPIO_WritePin(CD_GPIO_Port, CD_Pin, 0);
		HAL_GPIO_WritePin(CE_GPIO_Port, CE_Pin, 1);
		HAL_GPIO_WritePin(CF_GPIO_Port, CF_Pin, 0);
		HAL_GPIO_WritePin(CG_GPIO_Port, CG_Pin, 0);
		break;
	}
	default: break;
	}
}
void display7SEG2(int num){
	switch(num){
	case 0:{
		HAL_GPIO_WritePin(BA_GPIO_Port, BA_Pin, 0);
		HAL_GPIO_WritePin(BB_GPIO_Port, BB_Pin, 0);
		HAL_GPIO_WritePin(BC_GPIO_Port, BC_Pin, 0);
		HAL_GPIO_WritePin(BD_GPIO_Port, BD_Pin, 0);
		HAL_GPIO_WritePin(BE_GPIO_Port, BE_Pin, 0);
		HAL_GPIO_WritePin(BF_GPIO_Port, BF_Pin, 0);
		HAL_GPIO_WritePin(BG_GPIO_Port, BG_Pin, 1);
		break;
	}
	case 1:{
		HAL_GPIO_WritePin(BA_GPIO_Port, BA_Pin, 1);
		HAL_GPIO_WritePin(BB_GPIO_Port, BB_Pin, 0);
		HAL_GPIO_WritePin(BC_GPIO_Port, BC_Pin, 0);
		HAL_GPIO_WritePin(BD_GPIO_Port, BD_Pin, 1);
		HAL_GPIO_WritePin(BE_GPIO_Port, BE_Pin, 1);
		HAL_GPIO_WritePin(BF_GPIO_Port, BF_Pin, 1);
		HAL_GPIO_WritePin(BG_GPIO_Port, BG_Pin, 1);
		break;
	}
	case 2:{

		HAL_GPIO_WritePin(BA_GPIO_Port, BA_Pin, 0);
		HAL_GPIO_WritePin(BB_GPIO_Port, BB_Pin, 0);
		HAL_GPIO_WritePin(BC_GPIO_Port, BC_Pin, 1);
		HAL_GPIO_WritePin(BD_GPIO_Port, BD_Pin, 0);
		HAL_GPIO_WritePin(BE_GPIO_Port, BE_Pin, 0);
		HAL_GPIO_WritePin(BF_GPIO_Port, BF_Pin, 1);
		HAL_GPIO_WritePin(BG_GPIO_Port, BG_Pin, 0);
		break;
	}
	case 3:{

		HAL_GPIO_WritePin(BA_GPIO_Port, BA_Pin, 0);
		HAL_GPIO_WritePin(BB_GPIO_Port, BB_Pin, 0);
		HAL_GPIO_WritePin(BC_GPIO_Port, BC_Pin, 0);
		HAL_GPIO_WritePin(BD_GPIO_Port, BD_Pin, 0);
		HAL_GPIO_WritePin(BE_GPIO_Port, BE_Pin, 1);
		HAL_GPIO_WritePin(BF_GPIO_Port, BF_Pin, 1);
		HAL_GPIO_WritePin(BG_GPIO_Port, BG_Pin, 0);
		break;
	}
	case 4:{

		HAL_GPIO_WritePin(BA_GPIO_Port, BA_Pin, 1);
		HAL_GPIO_WritePin(BB_GPIO_Port, BB_Pin, 0);
		HAL_GPIO_WritePin(BC_GPIO_Port, BC_Pin, 0);
		HAL_GPIO_WritePin(BD_GPIO_Port, BD_Pin, 1);
		HAL_GPIO_WritePin(BE_GPIO_Port, BE_Pin, 1);
		HAL_GPIO_WritePin(BF_GPIO_Port, BF_Pin, 0);
		HAL_GPIO_WritePin(BG_GPIO_Port, BG_Pin, 0);
		break;
	}
	case 5:{

		HAL_GPIO_WritePin(BA_GPIO_Port, BA_Pin, 0);
		HAL_GPIO_WritePin(BB_GPIO_Port, BB_Pin, 1);
		HAL_GPIO_WritePin(BC_GPIO_Port, BC_Pin, 0);
		HAL_GPIO_WritePin(BD_GPIO_Port, BD_Pin, 0);
		HAL_GPIO_WritePin(BE_GPIO_Port, BE_Pin, 1);
		HAL_GPIO_WritePin(BF_GPIO_Port, BF_Pin, 0);
		HAL_GPIO_WritePin(BG_GPIO_Port, BG_Pin, 0);
		break;
	}
	case 6:{

		HAL_GPIO_WritePin(BA_GPIO_Port, BA_Pin, 0);
		HAL_GPIO_WritePin(BB_GPIO_Port, BB_Pin, 1);
		HAL_GPIO_WritePin(BC_GPIO_Port, BC_Pin, 0);
		HAL_GPIO_WritePin(BD_GPIO_Port, BD_Pin, 0);
		HAL_GPIO_WritePin(BE_GPIO_Port, BE_Pin, 0);
		HAL_GPIO_WritePin(BF_GPIO_Port, BF_Pin, 0);
		HAL_GPIO_WritePin(BG_GPIO_Port, BG_Pin, 0);
		break;
	}
	case 7:{
		HAL_GPIO_WritePin(BA_GPIO_Port, BA_Pin, 0);
		HAL_GPIO_WritePin(BB_GPIO_Port, BB_Pin, 0);
		HAL_GPIO_WritePin(BC_GPIO_Port, BC_Pin, 0);
		HAL_GPIO_WritePin(BD_GPIO_Port, BD_Pin, 1);
		HAL_GPIO_WritePin(BE_GPIO_Port, BE_Pin, 1);
		HAL_GPIO_WritePin(BF_GPIO_Port, BF_Pin, 1);
		HAL_GPIO_WritePin(BG_GPIO_Port, BG_Pin, 1);
		break;
	}
	case 8:{

		HAL_GPIO_WritePin(BA_GPIO_Port, BA_Pin, 0);
		HAL_GPIO_WritePin(BB_GPIO_Port, BB_Pin, 0);
		HAL_GPIO_WritePin(BC_GPIO_Port, BC_Pin, 0);
		HAL_GPIO_WritePin(BD_GPIO_Port, BD_Pin, 0);
		HAL_GPIO_WritePin(BE_GPIO_Port, BE_Pin, 0);
		HAL_GPIO_WritePin(BF_GPIO_Port, BF_Pin, 0);
		HAL_GPIO_WritePin(BG_GPIO_Port, BG_Pin, 0);
		break;
	}
	case 9:{

		HAL_GPIO_WritePin(BA_GPIO_Port, BA_Pin, 0);
		HAL_GPIO_WritePin(BB_GPIO_Port, BB_Pin, 0);
		HAL_GPIO_WritePin(BC_GPIO_Port, BC_Pin, 0);
		HAL_GPIO_WritePin(BD_GPIO_Port, BD_Pin, 0);
		HAL_GPIO_WritePin(BE_GPIO_Port, BE_Pin, 1);
		HAL_GPIO_WritePin(BF_GPIO_Port, BF_Pin, 0);
		HAL_GPIO_WritePin(BG_GPIO_Port, BG_Pin, 0);
		break;
	}
	default: break;
	}
}
void update7SEG ( int index ){
	int dau = index / 10;
	int cuoi = index % 10;
	switch ( dem ) {
		case 0:{
			HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, 0);
			HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, 1);
			HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, 0);
			HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, 1);
			display7SEG1(dau);
			display7SEG2(dau);
			dem = 1;
			break;
		}
		case 1:{
			HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, 1);
			HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, 0);
			HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, 1);
			HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, 0);
			display7SEG1(cuoi);
			display7SEG2(cuoi);
			dem = 0;
			break;
		}
		default :
			break ;
	}
 }
void update7SEG1 ( int index ){
	int dau = index / 10;
	int cuoi = index % 10;
	switch ( dem ) {
		case 0:{
			HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, 0);
			HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, 1);
			display7SEG1(dau);
			dem = 1;
			break;
		}
		case 1:{
			HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, 1);
			HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, 0);
			display7SEG1(cuoi);
			dem = 0;
			break;
		}
		default :
			break ;
	}
 }
void update7SEG2 ( int index ){
	int dau = index / 10;
	int cuoi = index % 10;
	switch ( dem ) {
		case 0:{
			HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, 0);
			HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, 1);
			display7SEG2(dau);
			dem = 1;
			break;
		}
		case 1:{
			HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, 1);
			HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, 0);
			display7SEG2(cuoi);
			dem = 0;
			break;
		}
		default :
			break ;
	}
 }
