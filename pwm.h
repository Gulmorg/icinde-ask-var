/*
 * File:   pwm.h
 * Author: Utku
 *
 * Created on December 15, 2022, 9:27 AM
 */

#ifndef PWM_H
#define	PWM_H

#define PWM_MAX_DUTY 1023

#define pwm1_enable() CCP1CONbits.CCP1M3 = 1; CCP1CONbits.CCP1M2 = 1
#define pwm1_disable() CCP1CONbits.CCP1M = 0

inline void pwm1_set_volume(unsigned int duty) {
    duty = (4 * (PR2 + 1) * duty) / PWM_MAX_DUTY;
    if (duty == 0) duty = 1;
    CCP1CONbits.DC1B1 = duty & 2;
    CCP1CONbits.DC1B0 = duty & 1;
    CCPR1L = (unsigned char) (duty >> 2);
}

#endif
