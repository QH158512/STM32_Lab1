/*
 * Ex5.h
 *
 *  Created on: Sep 15, 2025
 *      Author: laptopaz
 */
#include "main.h"
#ifndef SRC_EX5_H_
#define SRC_EX5_H_

void display7SEG_Lane1(int num){
	if (num < 0 || num > 9) {
		return;
	}

	HAL_GPIO_WritePin(a_1_GPIO_Port, a_1_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(b_1_GPIO_Port, b_1_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(c_1_GPIO_Port, c_1_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(d_1_GPIO_Port, d_1_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(e_1_GPIO_Port, e_1_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(f_1_GPIO_Port, f_1_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(g_1_GPIO_Port, g_1_Pin, GPIO_PIN_SET);


	if (num == 0){
		HAL_GPIO_WritePin(a_1_GPIO_Port, a_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(b_1_GPIO_Port, b_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(c_1_GPIO_Port, c_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(d_1_GPIO_Port, d_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(e_1_GPIO_Port, e_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(f_1_GPIO_Port, f_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(g_1_GPIO_Port, g_1_Pin, GPIO_PIN_SET);
	} else if (num == 1){
		HAL_GPIO_WritePin(a_1_GPIO_Port, a_1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(b_1_GPIO_Port, b_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(c_1_GPIO_Port, c_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(d_1_GPIO_Port, d_1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(e_1_GPIO_Port, e_1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(f_1_GPIO_Port, f_1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(g_1_GPIO_Port, g_1_Pin, GPIO_PIN_SET);
	} else if (num == 2){
		HAL_GPIO_WritePin(a_1_GPIO_Port, a_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(b_1_GPIO_Port, b_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(c_1_GPIO_Port, c_1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(d_1_GPIO_Port, d_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(e_1_GPIO_Port, e_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(f_1_GPIO_Port, f_1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(g_1_GPIO_Port, g_1_Pin, GPIO_PIN_RESET);
	} else if (num == 3){
		HAL_GPIO_WritePin(a_1_GPIO_Port, a_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(b_1_GPIO_Port, b_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(c_1_GPIO_Port, c_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(d_1_GPIO_Port, d_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(e_1_GPIO_Port, e_1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(f_1_GPIO_Port, f_1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(g_1_GPIO_Port, g_1_Pin, GPIO_PIN_RESET);
	} else if (num == 4){
		HAL_GPIO_WritePin(a_1_GPIO_Port, a_1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(b_1_GPIO_Port, b_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(c_1_GPIO_Port, c_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(d_1_GPIO_Port, d_1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(e_1_GPIO_Port, e_1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(f_1_GPIO_Port, f_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(g_1_GPIO_Port, g_1_Pin, GPIO_PIN_RESET);
	} else if (num == 5){
		HAL_GPIO_WritePin(a_1_GPIO_Port, a_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(b_1_GPIO_Port, b_1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(c_1_GPIO_Port, c_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(d_1_GPIO_Port, d_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(e_1_GPIO_Port, e_1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(f_1_GPIO_Port, f_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(g_1_GPIO_Port, g_1_Pin, GPIO_PIN_RESET);
	} else if (num == 6){
		HAL_GPIO_WritePin(a_1_GPIO_Port, a_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(b_1_GPIO_Port, b_1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(c_1_GPIO_Port, c_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(d_1_GPIO_Port, d_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(e_1_GPIO_Port, e_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(f_1_GPIO_Port, f_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(g_1_GPIO_Port, g_1_Pin, GPIO_PIN_RESET);
	} else if (num == 7){
		HAL_GPIO_WritePin(a_1_GPIO_Port, a_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(b_1_GPIO_Port, b_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(c_1_GPIO_Port, c_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(d_1_GPIO_Port, d_1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(e_1_GPIO_Port, e_1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(f_1_GPIO_Port, f_1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(g_1_GPIO_Port, g_1_Pin, GPIO_PIN_SET);
	} else if (num == 8){
		HAL_GPIO_WritePin(a_1_GPIO_Port, a_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(b_1_GPIO_Port, b_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(c_1_GPIO_Port, c_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(d_1_GPIO_Port, d_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(e_1_GPIO_Port, e_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(f_1_GPIO_Port, f_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(g_1_GPIO_Port, g_1_Pin, GPIO_PIN_RESET);
	} else if (num == 9){
		HAL_GPIO_WritePin(a_1_GPIO_Port, a_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(b_1_GPIO_Port, b_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(c_1_GPIO_Port, c_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(d_1_GPIO_Port, d_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(e_1_GPIO_Port, e_1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(f_1_GPIO_Port, f_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(g_1_GPIO_Port, g_1_Pin, GPIO_PIN_RESET);
	}
}

void display7SEG_Lane2(int num){
	if (num < 0 || num > 9) {
		return;
	}

	HAL_GPIO_WritePin(a_2_GPIO_Port, a_2_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(b_2_GPIO_Port, b_2_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(c_2_GPIO_Port, c_2_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(d_2_GPIO_Port, d_2_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(e_2_GPIO_Port, e_2_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(f_2_GPIO_Port, f_2_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(g_2_GPIO_Port, g_2_Pin, GPIO_PIN_SET);


	if (num == 0){
	    HAL_GPIO_WritePin(a_2_GPIO_Port, a_2_Pin, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(b_2_GPIO_Port, b_2_Pin, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(c_2_GPIO_Port, c_2_Pin, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(d_2_GPIO_Port, d_2_Pin, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(e_2_GPIO_Port, e_2_Pin, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(f_2_GPIO_Port, f_2_Pin, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(g_2_GPIO_Port, g_2_Pin, GPIO_PIN_SET);
	} else if (num == 1){
	    HAL_GPIO_WritePin(a_2_GPIO_Port, a_2_Pin, GPIO_PIN_SET);
	    HAL_GPIO_WritePin(b_2_GPIO_Port, b_2_Pin, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(c_2_GPIO_Port, c_2_Pin, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(d_2_GPIO_Port, d_2_Pin, GPIO_PIN_SET);
	    HAL_GPIO_WritePin(e_2_GPIO_Port, e_2_Pin, GPIO_PIN_SET);
	    HAL_GPIO_WritePin(f_2_GPIO_Port, f_2_Pin, GPIO_PIN_SET);
	    HAL_GPIO_WritePin(g_2_GPIO_Port, g_2_Pin, GPIO_PIN_SET);
	} else if (num == 2){
	    HAL_GPIO_WritePin(a_2_GPIO_Port, a_2_Pin, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(b_2_GPIO_Port, b_2_Pin, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(c_2_GPIO_Port, c_2_Pin, GPIO_PIN_SET);
	    HAL_GPIO_WritePin(d_2_GPIO_Port, d_2_Pin, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(e_2_GPIO_Port, e_2_Pin, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(f_2_GPIO_Port, f_2_Pin, GPIO_PIN_SET);
	    HAL_GPIO_WritePin(g_2_GPIO_Port, g_2_Pin, GPIO_PIN_RESET);
	} else if (num == 3){
	    HAL_GPIO_WritePin(a_2_GPIO_Port, a_2_Pin, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(b_2_GPIO_Port, b_2_Pin, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(c_2_GPIO_Port, c_2_Pin, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(d_2_GPIO_Port, d_2_Pin, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(e_2_GPIO_Port, e_2_Pin, GPIO_PIN_SET);
	    HAL_GPIO_WritePin(f_2_GPIO_Port, f_2_Pin, GPIO_PIN_SET);
	    HAL_GPIO_WritePin(g_2_GPIO_Port, g_2_Pin, GPIO_PIN_RESET);
	} else if (num == 4){
	    HAL_GPIO_WritePin(a_2_GPIO_Port, a_2_Pin, GPIO_PIN_SET);
	    HAL_GPIO_WritePin(b_2_GPIO_Port, b_2_Pin, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(c_2_GPIO_Port, c_2_Pin, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(d_2_GPIO_Port, d_2_Pin, GPIO_PIN_SET);
	    HAL_GPIO_WritePin(e_2_GPIO_Port, e_2_Pin, GPIO_PIN_SET);
	    HAL_GPIO_WritePin(f_2_GPIO_Port, f_2_Pin, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(g_2_GPIO_Port, g_2_Pin, GPIO_PIN_RESET);
	} else if (num == 5){
	    HAL_GPIO_WritePin(a_2_GPIO_Port, a_2_Pin, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(b_2_GPIO_Port, b_2_Pin, GPIO_PIN_SET);
	    HAL_GPIO_WritePin(c_2_GPIO_Port, c_2_Pin, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(d_2_GPIO_Port, d_2_Pin, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(e_2_GPIO_Port, e_2_Pin, GPIO_PIN_SET);
	    HAL_GPIO_WritePin(f_2_GPIO_Port, f_2_Pin, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(g_2_GPIO_Port, g_2_Pin, GPIO_PIN_RESET);
	} else if (num == 6){
	    HAL_GPIO_WritePin(a_2_GPIO_Port, a_2_Pin, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(b_2_GPIO_Port, b_2_Pin, GPIO_PIN_SET);
	    HAL_GPIO_WritePin(c_2_GPIO_Port, c_2_Pin, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(d_2_GPIO_Port, d_2_Pin, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(e_2_GPIO_Port, e_2_Pin, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(f_2_GPIO_Port, f_2_Pin, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(g_2_GPIO_Port, g_2_Pin, GPIO_PIN_RESET);
	} else if (num == 7){
	    HAL_GPIO_WritePin(a_2_GPIO_Port, a_2_Pin, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(b_2_GPIO_Port, b_2_Pin, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(c_2_GPIO_Port, c_2_Pin, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(d_2_GPIO_Port, d_2_Pin, GPIO_PIN_SET);
	    HAL_GPIO_WritePin(e_2_GPIO_Port, e_2_Pin, GPIO_PIN_SET);
	    HAL_GPIO_WritePin(f_2_GPIO_Port, f_2_Pin, GPIO_PIN_SET);
	    HAL_GPIO_WritePin(g_2_GPIO_Port, g_2_Pin, GPIO_PIN_SET);
	} else if (num == 8){
	    HAL_GPIO_WritePin(a_2_GPIO_Port, a_2_Pin, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(b_2_GPIO_Port, b_2_Pin, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(c_2_GPIO_Port, c_2_Pin, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(d_2_GPIO_Port, d_2_Pin, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(e_2_GPIO_Port, e_2_Pin, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(f_2_GPIO_Port, f_2_Pin, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(g_2_GPIO_Port, g_2_Pin, GPIO_PIN_RESET);
	} else if (num == 9){
	    HAL_GPIO_WritePin(a_2_GPIO_Port, a_2_Pin, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(b_2_GPIO_Port, b_2_Pin, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(c_2_GPIO_Port, c_2_Pin, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(d_2_GPIO_Port, d_2_Pin, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(e_2_GPIO_Port, e_2_Pin, GPIO_PIN_SET);
	    HAL_GPIO_WritePin(f_2_GPIO_Port, f_2_Pin, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(g_2_GPIO_Port, g_2_Pin, GPIO_PIN_RESET);
	}
}

// 				Red: 5s,     Yellow: 2s,     Green: 3s
void Trafficlight_with7SEG(void){
	// ===== Phase 1: Lane1 GREEN, Lane2 RED =====
	    HAL_GPIO_WritePin(RED_LED_Lane1_GPIO_Port, RED_LED_Lane1_Pin, GPIO_PIN_RESET);   // Lane1 RED OFF
	    HAL_GPIO_WritePin(YELLOW_LED_Lane1_GPIO_Port, YELLOW_LED_Lane1_Pin, GPIO_PIN_RESET); // Lane1 YELLOW OFF
	    HAL_GPIO_WritePin(GREEN_LED_Lane1_GPIO_Port, GREEN_LED_Lane1_Pin, GPIO_PIN_SET);     // Lane1 GREEN ON

	    HAL_GPIO_WritePin(RED_LED_Lane2_GPIO_Port, RED_LED_Lane2_Pin, GPIO_PIN_SET);     // Lane2 RED ON
	    HAL_GPIO_WritePin(YELLOW_LED_Lane2_GPIO_Port, YELLOW_LED_Lane2_Pin, GPIO_PIN_RESET); // Lane2 YELLOW OFF
	    HAL_GPIO_WritePin(GREEN_LED_Lane2_GPIO_Port, GREEN_LED_Lane2_Pin, GPIO_PIN_RESET);   // Lane2 GREEN OFF

	    for (int i = 3; i > 0; i--){
	    	display7SEG_Lane1(i);				//Lane1: Green 3s
	    	display7SEG_Lane2(i + 2);
	    	HAL_Delay(1000);
	    }


	    // ===== Phase 2: Lane1 YELLOW, Lane2 RED =====
	    HAL_GPIO_WritePin(GREEN_LED_Lane1_GPIO_Port, GREEN_LED_Lane1_Pin, GPIO_PIN_RESET);   // Lane1 GREEN OFF
	    HAL_GPIO_WritePin(YELLOW_LED_Lane1_GPIO_Port, YELLOW_LED_Lane1_Pin, GPIO_PIN_SET);   // Lane1 YELLOW ON

	    for (int i = 2; i > 0; i--){
	    	display7SEG_Lane1(i);
	    	display7SEG_Lane2(i);			//Count from previous last 2 second RED
	    	HAL_Delay(1000);
	    }

	    // ===== Phase 3: Lane1 RED, Lane2 GREEN =====
	    HAL_GPIO_WritePin(YELLOW_LED_Lane1_GPIO_Port, YELLOW_LED_Lane1_Pin, GPIO_PIN_RESET); // Lane1 YELLOW OFF
	    HAL_GPIO_WritePin(RED_LED_Lane1_GPIO_Port, RED_LED_Lane1_Pin, GPIO_PIN_SET);         // Lane1 RED ON

	    HAL_GPIO_WritePin(RED_LED_Lane2_GPIO_Port, RED_LED_Lane2_Pin, GPIO_PIN_RESET);       // Lane2 RED OFF
	    HAL_GPIO_WritePin(GREEN_LED_Lane2_GPIO_Port, GREEN_LED_Lane2_Pin, GPIO_PIN_SET);     // Lane2 GREEN ON

	    for (int i = 3; i > 0; i--){
	    	display7SEG_Lane1(i+2);
	    	display7SEG_Lane2(i);
	    	HAL_Delay(1000);
	    }


	    // ===== Phase 4: Lane1 RED, Lane2 YELLOW =====
	    HAL_GPIO_WritePin(GREEN_LED_Lane2_GPIO_Port, GREEN_LED_Lane2_Pin, GPIO_PIN_RESET);   // Lane2 GREEN OFF
	    HAL_GPIO_WritePin(YELLOW_LED_Lane2_GPIO_Port, YELLOW_LED_Lane2_Pin, GPIO_PIN_SET);   // Lane2 YELLOW ON

	    for(int i = 2; i > 0; i--){
	    	display7SEG_Lane1(i);
	    	display7SEG_Lane2(i);
	    	HAL_Delay(1000);
	    }


	    // ===== Reset YELLOWs =====
	    HAL_GPIO_WritePin(YELLOW_LED_Lane1_GPIO_Port, YELLOW_LED_Lane1_Pin, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(YELLOW_LED_Lane2_GPIO_Port, YELLOW_LED_Lane2_Pin, GPIO_PIN_RESET);

}

#endif /* SRC_EX5_H_ */
