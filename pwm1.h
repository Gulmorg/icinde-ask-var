/*
 * File:   pwm.h
 * Author: Utku Do?anay
 *
 * Created on December 1, 2022, 11:18 AM
 */

#ifndef PWM1_H
#define PWM1_H

#define MAX_VOLUME 32
#define MAX_VOLUME_DIVIDER 16

void pwm1_enable(void) {
    CCP1CONbits.CCP1M3 = 1;
    CCP1CONbits.CCP1M2 = 1;

    TRISCbits.TRISC2 = 0;
}

void pwm1_disable(void) {
    CCP1CONbits.CCP1M3 = 0;
    CCP1CONbits.CCP1M2 = 0;
}

void pwm1_set_volume(unsigned int volume) {
    if (volume < MAX_VOLUME) {
        unsigned int duty = (unsigned int) ((double) (volume * (PR2)) / (double) MAX_VOLUME_DIVIDER);
        if (duty == 0 && volume != 0) duty = 1;
        CCP1CONbits.DC1B1 = duty & 2;
        CCP1CONbits.DC1B0 = duty & 1;
        CCPR1L = (unsigned char) (duty >> 2); // Right shift twice to remove the offset created by 2 LSBs being in a different register
    } else {
        unsigned int duty = PR2 * 2;

        CCP1CONbits.DC1B1 = duty & 2;
        CCP1CONbits.DC1B0 = duty & 1;
        CCPR1L = (unsigned char) (duty >> 2);
    }
}

#endif
