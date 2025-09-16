/*
 * Ex10.h
 *
 *  Created on: Sep 17, 2025
 *      Author: laptopaz
 */
#include "main.h"
#ifndef SRC_EX10_H_
#define SRC_EX10_H_

void setNumberOnClock(int num){
	if (num == 1){
		HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, GPIO_PIN_SET);
	} else if (num == 2){
		HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, GPIO_PIN_SET);
	} else if (num == 3){
		HAL_GPIO_WritePin(LED5_GPIO_Port, LED5_Pin, GPIO_PIN_SET);
	} else if (num == 4){
		HAL_GPIO_WritePin(LED6_GPIO_Port, LED6_Pin, GPIO_PIN_SET);
	} else if (num == 5){
		HAL_GPIO_WritePin(LED7_GPIO_Port, LED7_Pin, GPIO_PIN_SET);
	} else if (num == 6){
		HAL_GPIO_WritePin(LED8_GPIO_Port, LED8_Pin, GPIO_PIN_SET);
	} else if (num == 7){
		HAL_GPIO_WritePin(LED9_GPIO_Port, LED9_Pin, GPIO_PIN_SET);
	} else if (num == 8){
		HAL_GPIO_WritePin(LED10_GPIO_Port, LED10_Pin, GPIO_PIN_SET);
	} else if (num == 9){
		HAL_GPIO_WritePin(LED11_GPIO_Port, LED11_Pin, GPIO_PIN_SET);
	} else if (num == 10){
		HAL_GPIO_WritePin(LED12_GPIO_Port, LED12_Pin, GPIO_PIN_SET);
	} else if (num == 11){
		HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, GPIO_PIN_SET);
	} else if (num == 0){
		HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, GPIO_PIN_SET);
	}
}

void clearAllClock(void){
	HAL_GPIO_WritePin(LED1_GPIO_Port, LED1_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED2_GPIO_Port, LED2_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED3_GPIO_Port, LED3_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED4_GPIO_Port, LED4_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED5_GPIO_Port, LED5_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED6_GPIO_Port, LED6_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED7_GPIO_Port, LED7_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED8_GPIO_Port, LED8_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED9_GPIO_Port, LED9_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED10_GPIO_Port, LED10_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED11_GPIO_Port, LED11_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED12_GPIO_Port, LED12_Pin, GPIO_PIN_RESET);
}

void clockSystem(void){
	int hour = 0;
	int minute = 0;
	int second = 0;

	while (1){
		clearAllClock();

		int hourPosition    = hour % 12;
		int minutePosition  = minute/5;
		int secondPosition  = second/5;


		//Turn on LEDs
		setNumberOnClock(hourPosition);
		setNumberOnClock(minutePosition);
		setNumberOnClock(secondPosition);

		HAL_Delay(1000);

		//Update time
		second++;
		if (second >= 60){
			second = 0;
			minute++;
		}

		if (minute >= 60){
			minute = 0;
			hour++;
		}

		if (hour >= 24){
			hour = 0;
		}
	}
}

#endif /* SRC_EX10_H_ */
