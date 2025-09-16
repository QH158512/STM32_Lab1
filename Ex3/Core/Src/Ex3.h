/*
 * Ex4.h
 *
 *  Created on: Sep 15, 2025
 *      Author: laptopaz
 */
#include "main.h"
#ifndef SRC_EX4_H_
#define SRC_EX4_H_

void Trafficlight(void){
	// ===== Phase 1: Lane1 GREEN, Lane2 RED =====
	    HAL_GPIO_WritePin(RED_LED_Lane1_GPIO_Port, RED_LED_Lane1_Pin, GPIO_PIN_RESET);   // Lane1 RED OFF
	    HAL_GPIO_WritePin(YELLOW_LED_Lane1_GPIO_Port, YELLOW_LED_Lane1_Pin, GPIO_PIN_RESET); // Lane1 YELLOW OFF
	    HAL_GPIO_WritePin(GREEN_LED_Lane1_GPIO_Port, GREEN_LED_Lane1_Pin, GPIO_PIN_SET);     // Lane1 GREEN ON

	    HAL_GPIO_WritePin(RED_LED_Lane2_GPIO_Port, RED_LED_Lane2_Pin, GPIO_PIN_SET);     // Lane2 RED ON
	    HAL_GPIO_WritePin(YELLOW_LED_Lane2_GPIO_Port, YELLOW_LED_Lane2_Pin, GPIO_PIN_RESET); // Lane2 YELLOW OFF
	    HAL_GPIO_WritePin(GREEN_LED_Lane2_GPIO_Port, GREEN_LED_Lane2_Pin, GPIO_PIN_RESET);   // Lane2 GREEN OFF

	    HAL_Delay(3000); // GREEN 3s

	    // ===== Phase 2: Lane1 YELLOW, Lane2 RED =====
	    HAL_GPIO_WritePin(GREEN_LED_Lane1_GPIO_Port, GREEN_LED_Lane1_Pin, GPIO_PIN_RESET);   // Lane1 GREEN OFF
	    HAL_GPIO_WritePin(YELLOW_LED_Lane1_GPIO_Port, YELLOW_LED_Lane1_Pin, GPIO_PIN_SET);   // Lane1 YELLOW ON
	    HAL_Delay(2000); // YELLOW 2s

	    // ===== Phase 3: Lane1 RED, Lane2 GREEN =====
	    HAL_GPIO_WritePin(YELLOW_LED_Lane1_GPIO_Port, YELLOW_LED_Lane1_Pin, GPIO_PIN_RESET); // Lane1 YELLOW OFF
	    HAL_GPIO_WritePin(RED_LED_Lane1_GPIO_Port, RED_LED_Lane1_Pin, GPIO_PIN_SET);         // Lane1 RED ON

	    HAL_GPIO_WritePin(RED_LED_Lane2_GPIO_Port, RED_LED_Lane2_Pin, GPIO_PIN_RESET);       // Lane2 RED OFF
	    HAL_GPIO_WritePin(GREEN_LED_Lane2_GPIO_Port, GREEN_LED_Lane2_Pin, GPIO_PIN_SET);     // Lane2 GREEN ON
	    HAL_Delay(3000); // GREEN 3s

	    // ===== Phase 4: Lane1 RED, Lane2 YELLOW =====
	    HAL_GPIO_WritePin(GREEN_LED_Lane2_GPIO_Port, GREEN_LED_Lane2_Pin, GPIO_PIN_RESET);   // Lane2 GREEN OFF
	    HAL_GPIO_WritePin(YELLOW_LED_Lane2_GPIO_Port, YELLOW_LED_Lane2_Pin, GPIO_PIN_SET);   // Lane2 YELLOW ON
	    HAL_Delay(2000); // YELLOW 2s

	    // ===== Reset YELLOWs =====
	    HAL_GPIO_WritePin(YELLOW_LED_Lane1_GPIO_Port, YELLOW_LED_Lane1_Pin, GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(YELLOW_LED_Lane2_GPIO_Port, YELLOW_LED_Lane2_Pin, GPIO_PIN_RESET);

}

#endif /* SRC_EX4_H_ */
