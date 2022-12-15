/*
 * File:   pwm.h
 * Author: Utku
 *
 * Created on December 15, 2022, 9:27 AM
 */

#ifndef PWM_H
#define	PWM_H

void pwm_set_freq(double freq) {
    unsigned char prescale = 16;
    if (freq < 988) {
        prescale = 64;
    }

    if (prescale == 16)
        T2CONbits.T2CKPS = 0b10;
    else if (prescale == 64)
        T2CONbits.T2CKPS = 0b11;

    PR2 = (unsigned char) ((_XTAL_FREQ / (freq * 4 * prescale)) - 1);
}

#endif

