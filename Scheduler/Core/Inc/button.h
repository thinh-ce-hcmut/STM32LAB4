/*
 * button.h
 *
 *  Created on: Nov 30, 2023
 *      Author: Dell
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_


#include "main.h"
#include "scheduler.h"
#include "task.h"

#define BUTTON_PRESSED		GPIO_PIN_RESET
#define BUTTON_RELEASED		GPIO_PIN_SET

enum flagButton {
	PRESSED_FLAG,
	RELEASED_FLAG
};

void button_reading();
void fsm_button();



#endif /* INC_BUTTON_H_ */
