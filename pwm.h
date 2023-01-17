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
    return (duty * 4 * (PR2 + 1)) / PWM_MAX_DUTY;
}

#define pwm1_enable() CCP1CONbits.CCP1M3 = 1; CCP1CONbits.CCP1M2 = 1; TRISCbits.TRISC2 = 0
#define pwm1_disable() CCP1CONbits.CCP1M = 0

void pwm1_set_volume(unsigned int duty) {
    duty = pwm_calculate_duty(duty);
    if (duty == 0) duty = 1;
    CCP1CONbits.DC1B1 = duty & 2;
    CCP1CONbits.DC1B0 = duty & 1;
    CCPR1L = (unsigned char) (duty >> 2);
}

#endif
