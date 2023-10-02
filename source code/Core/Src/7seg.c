/*
 * 7seg.c
 *
 *  Created on: Oct 2, 2023
 *      Author: DELL
 */
#include "7seg.h"
#include "main.h"


void Display7Seg(int num){
	switch (num) {
	case 0:
		HAL_GPIO_WritePin(SEGA_GPIO_Port, SEGA_Pin, RESET);
		HAL_GPIO_WritePin(SEGB_GPIO_Port, SEGB_Pin, RESET);
		HAL_GPIO_WritePin(SEGC_GPIO_Port, SEGC_Pin, RESET);
		HAL_GPIO_WritePin(SEGD_GPIO_Port, SEGD_Pin, RESET);
		HAL_GPIO_WritePin(SEGE_GPIO_Port, SEGE_Pin, RESET);
		HAL_GPIO_WritePin(SEGF_GPIO_Port, SEGF_Pin, RESET);
		HAL_GPIO_WritePin(SEGG_GPIO_Port, SEGG_Pin, SET);
		break;
	case 1:
		HAL_GPIO_WritePin(SEGA_GPIO_Port, SEGA_Pin, SET);
		HAL_GPIO_WritePin(SEGB_GPIO_Port, SEGB_Pin, RESET);
		HAL_GPIO_WritePin(SEGC_GPIO_Port, SEGC_Pin, RESET);
		HAL_GPIO_WritePin(SEGD_GPIO_Port, SEGD_Pin, SET);
		HAL_GPIO_WritePin(SEGE_GPIO_Port, SEGE_Pin, SET);
		HAL_GPIO_WritePin(SEGF_GPIO_Port, SEGF_Pin, SET);
		HAL_GPIO_WritePin(SEGG_GPIO_Port, SEGG_Pin, SET);
		break;
	case 2:
		HAL_GPIO_WritePin(SEGA_GPIO_Port, SEGA_Pin, RESET);
		HAL_GPIO_WritePin(SEGB_GPIO_Port, SEGB_Pin, RESET);
		HAL_GPIO_WritePin(SEGC_GPIO_Port, SEGC_Pin, SET);
		HAL_GPIO_WritePin(SEGD_GPIO_Port, SEGD_Pin, RESET);
		HAL_GPIO_WritePin(SEGE_GPIO_Port, SEGE_Pin, RESET);
		HAL_GPIO_WritePin(SEGF_GPIO_Port, SEGF_Pin, SET);
		HAL_GPIO_WritePin(SEGG_GPIO_Port, SEGG_Pin, RESET);
		break;
	case 3:
		HAL_GPIO_WritePin(SEGA_GPIO_Port, SEGA_Pin, RESET);
		HAL_GPIO_WritePin(SEGB_GPIO_Port, SEGB_Pin, RESET);
		HAL_GPIO_WritePin(SEGC_GPIO_Port, SEGC_Pin, RESET);
		HAL_GPIO_WritePin(SEGD_GPIO_Port, SEGD_Pin, RESET);
		HAL_GPIO_WritePin(SEGE_GPIO_Port, SEGE_Pin, SET);
		HAL_GPIO_WritePin(SEGF_GPIO_Port, SEGF_Pin, SET);
		HAL_GPIO_WritePin(SEGG_GPIO_Port, SEGG_Pin, RESET);
		break;
	case 4:
		HAL_GPIO_WritePin(SEGA_GPIO_Port, SEGA_Pin, SET);
		HAL_GPIO_WritePin(SEGB_GPIO_Port, SEGB_Pin, RESET);
		HAL_GPIO_WritePin(SEGC_GPIO_Port, SEGC_Pin, RESET);
		HAL_GPIO_WritePin(SEGD_GPIO_Port, SEGD_Pin, SET);
		HAL_GPIO_WritePin(SEGE_GPIO_Port, SEGE_Pin, SET);
		HAL_GPIO_WritePin(SEGF_GPIO_Port, SEGF_Pin, RESET);
		HAL_GPIO_WritePin(SEGG_GPIO_Port, SEGG_Pin, RESET);
		break;
	case 5:
		HAL_GPIO_WritePin(SEGA_GPIO_Port, SEGA_Pin, RESET);
		HAL_GPIO_WritePin(SEGB_GPIO_Port, SEGB_Pin, SET);
		HAL_GPIO_WritePin(SEGC_GPIO_Port, SEGC_Pin, RESET);
		HAL_GPIO_WritePin(SEGD_GPIO_Port, SEGD_Pin, RESET);
		HAL_GPIO_WritePin(SEGE_GPIO_Port, SEGE_Pin, SET);
		HAL_GPIO_WritePin(SEGF_GPIO_Port, SEGF_Pin, RESET);
		HAL_GPIO_WritePin(SEGG_GPIO_Port, SEGG_Pin, RESET);
		break;
	case 6:
		HAL_GPIO_WritePin(SEGA_GPIO_Port, SEGA_Pin, RESET);
		HAL_GPIO_WritePin(SEGB_GPIO_Port, SEGB_Pin, SET);
		HAL_GPIO_WritePin(SEGC_GPIO_Port, SEGC_Pin, RESET);
		HAL_GPIO_WritePin(SEGD_GPIO_Port, SEGD_Pin, RESET);
		HAL_GPIO_WritePin(SEGE_GPIO_Port, SEGE_Pin, RESET);
		HAL_GPIO_WritePin(SEGF_GPIO_Port, SEGF_Pin, RESET);
		HAL_GPIO_WritePin(SEGG_GPIO_Port, SEGG_Pin, RESET);
		break;
	case 7:
		HAL_GPIO_WritePin(SEGA_GPIO_Port, SEGA_Pin, RESET);
		HAL_GPIO_WritePin(SEGB_GPIO_Port, SEGB_Pin, RESET);
		HAL_GPIO_WritePin(SEGC_GPIO_Port, SEGC_Pin, RESET);
		HAL_GPIO_WritePin(SEGD_GPIO_Port, SEGD_Pin, SET);
		HAL_GPIO_WritePin(SEGE_GPIO_Port, SEGE_Pin, SET);
		HAL_GPIO_WritePin(SEGF_GPIO_Port, SEGF_Pin, SET);
		HAL_GPIO_WritePin(SEGG_GPIO_Port, SEGG_Pin, SET);
		break;
	case 8:
		HAL_GPIO_WritePin(SEGA_GPIO_Port, SEGA_Pin, RESET);
		HAL_GPIO_WritePin(SEGB_GPIO_Port, SEGB_Pin, RESET);
		HAL_GPIO_WritePin(SEGC_GPIO_Port, SEGC_Pin, RESET);
		HAL_GPIO_WritePin(SEGD_GPIO_Port, SEGD_Pin, RESET);
		HAL_GPIO_WritePin(SEGE_GPIO_Port, SEGE_Pin, RESET);
		HAL_GPIO_WritePin(SEGF_GPIO_Port, SEGF_Pin, RESET);
		HAL_GPIO_WritePin(SEGG_GPIO_Port, SEGG_Pin, RESET);
		break;
	case 9:
		HAL_GPIO_WritePin(SEGA_GPIO_Port, SEGA_Pin, RESET);
		HAL_GPIO_WritePin(SEGB_GPIO_Port, SEGB_Pin, RESET);
		HAL_GPIO_WritePin(SEGC_GPIO_Port, SEGC_Pin, RESET);
		HAL_GPIO_WritePin(SEGD_GPIO_Port, SEGD_Pin, RESET);
		HAL_GPIO_WritePin(SEGE_GPIO_Port, SEGE_Pin, SET);
		HAL_GPIO_WritePin(SEGF_GPIO_Port, SEGF_Pin, RESET);
		HAL_GPIO_WritePin(SEGG_GPIO_Port, SEGG_Pin, RESET);
		break;
	default:
		break;
	}
}

