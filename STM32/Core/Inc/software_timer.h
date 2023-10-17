/*
 * software_timer.h
 *
 *  Created on: Oct 17, 2023
 *      Author: Dell
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

extern int timer0_flag;
extern int timer1_flag;
extern int timer2_flag;

void setTimer0(int duration);
void timerRun0();

void setTimer1(int duration);
void timerRun1();


void setTimer2(int duration);
void timerRun2();

#endif /* INC_SOFTWARE_TIMER_H_ */
