/*
 * Ex4.h
 *
 *  Created on: Sep 15, 2025
 *      Author: laptopaz
 */
#include "main.h"
#ifndef SRC_EX4_H_
#define SRC_EX4_H_

void display7SEG(int num){
	if (num < 0 || num > 9) {
		return;
	}

	HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, GPIO_PIN_SET);


	if (num == 0){
		HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, GPIO_PIN_SET);
	} else if (num == 1){
		HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, GPIO_PIN_SET);
	} else if (num == 2){
		HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, GPIO_PIN_RESET);
	} else if (num == 3){
		HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, GPIO_PIN_RESET);
	} else if (num == 4){
		HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, GPIO_PIN_RESET);
	} else if (num == 5){
		HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, GPIO_PIN_RESET);
	} else if (num == 6){
		HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, GPIO_PIN_RESET);
	} else if (num == 7){
		HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, GPIO_PIN_SET);
	} else if (num == 8){
		HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, GPIO_PIN_RESET);
	} else if (num == 9){
		HAL_GPIO_WritePin(a_GPIO_Port, a_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(b_GPIO_Port, b_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(c_GPIO_Port, c_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(d_GPIO_Port, d_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(e_GPIO_Port, e_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(f_GPIO_Port, f_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(g_GPIO_Port, g_Pin, GPIO_PIN_RESET);
	}




}

#endif /* SRC_EX4_H_ */
