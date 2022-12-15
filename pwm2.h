/*
 * File:   pwm2.h
 * Author: Utku
 *
 * Created on December 15, 2022, 9:26 AM
 */

#ifndef PWM2_H
#define	PWM2_H

void pwm2_enable(void) {
    CCP2CONbits.CCP2M3 = 1;
    CCP2CONbits.CCP2M2 = 1;

    TRISCbits.TRISC1 = 0;
}

void pwm2_disable(void) {
    CCP2CONbits.CCP2M3 = 0;
    CCP2CONbits.CCP2M2 = 0;
}

void pwm2_set_duty(unsigned int duty) {
    if (duty < 1024) {
        duty = (unsigned int) (duty * (4 * (PR2))); //broken, fix later
        CCP2CONbits.DC2B1 = duty & 2;
        CCP2CONbits.DC2B0 = duty & 1;
        CCPR2L = (unsigned char) (duty >> 2);
    }
}

#endif

