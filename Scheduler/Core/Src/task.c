/*
 * task.c
 *
 *  Created on: Nov 30, 2023
 *      Author: Dell
 */


#include "task.h"

void LED_0_Display() {
	HAL_GPIO_TogglePin(LED_0_GPIO_Port, LED_0_Pin);
}

void LED_1_Display() {
	HAL_GPIO_TogglePin(LED_1_GPIO_Port, LED_1_Pin);
	//HAL_UART_Transmit(&huart2, (uint8_t *)data, sprintf(data, "Task 1 is dispatched at %d\r\n", time_stamp), 1000);
}

void LED_2_Display() {
	HAL_GPIO_TogglePin(LED_2_GPIO_Port, LED_2_Pin);
	//HAL_UART_Transmit(&huart2, (uint8_t *)data, sprintf(data, "Task 2 is dispatched at %d\r\n", time_stamp), 1000);
}

void LED_3_Display() {
	HAL_GPIO_TogglePin(LED_3_GPIO_Port, LED_3_Pin);
	//HAL_UART_Transmit(&huart2, (uint8_t *)data, sprintf(data, "Task 3 is dispatched at %d\r\n", time_stamp), 1000);
}

void LED_4_Display() {
	HAL_GPIO_TogglePin(LED_4_GPIO_Port, LED_4_Pin);
	//HAL_UART_Transmit(&huart2, (uint8_t *)data, sprintf(data, "Task 4 is dispatched at %d\r\n", time_stamp), 1000);
}

void LED_5_Display() {
	HAL_GPIO_TogglePin(LED_5_GPIO_Port, LED_5_Pin);
	//HAL_UART_Transmit(&huart2, (uint8_t *)data, sprintf(data, "Task 5 is dispatched at %d\r\n", time_stamp), 1000);
}