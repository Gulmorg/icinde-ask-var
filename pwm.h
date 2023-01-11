/*
 * File:   pwm.h
 * Author: Utku
 *
 * Created on December 15, 2022, 9:27 AM
 */

#ifndef PWM_H
#define	PWM_H

#define PWM_MAX_DUTY 1023

unsigned int pwm_calculate_duty(unsigned int duty) {
    return (unsigned int) ((duty * 4 * (PR2 + 1)) / PWM_MAX_DUTY);
}

#endif
