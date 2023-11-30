/*
 * timer.c
 *
 *  Created on: Nov 30, 2023
 *      Author: Dell
 */


#include "timer.h"

int timer0_counter;
unsigned char timer0_flag;

void setTimer0(int duration) {
	timer0_counter = duration / TIMER_CYCLE;
	timer0_flag = 0;
}

void timer_run() {
	timer0_counter--;
	if (timer0_counter <= 0) {
		timer0_flag = 1;
	}
}