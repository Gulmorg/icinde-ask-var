/*
 * File:   tmr2.h
 * Author: Utku Do?anay
 *
 * Created on December 2, 2022, 9:36 AM
 */

#ifndef TMR2_H
#define	TMR2_H

void tmr2_init(void) {
// Check if defines are valid
#ifndef TMR2PRESCALE
#define TMR2PRESCALE 16
#endif
#if (TMR2PRESCALE != 1 && TMR2PRESCALE != 4 && TMR2PRESCALE != 16 && TMR2PRESCALE != 64)
#error TMR2PRESCALE can only take values 1, 4, 16, and 64
#endif
#ifdef TMR2POSTSCALE
#if (TMR2POSTSCALE > 16 || TMR2POSTSCALE < 1)
#error TMR2PRESCALE can only take values 1 through 16
#endif
#endif

// Set Timer2 Prescaler and Postscaler
#if TMR2PRESCALE == 1
    T2CONbits.T2CKPS = 0b00;
#elif TMR2PRESCALE == 4
    T2CONbits.T2CKPS = 0b01;
#elif TMR2PRESCALE == 16
    T2CONbits.T2CKPS = 0b10;
#elif TMR2PRESCALE == 64
    T2CONbits.T2CKPS = 0b11;
#endif
#ifdef TMR2POSTSCALE
    T2CONbits.T2OUTPS = TMR2POSTSCALE - 1; // -1 Because 0b0000 is DIV_BY_1
#else
    T2CONbits.T2OUTPS = 0;
#endif
}

void tmr2_enable(void) {
    TMR2 = 0;
    T2CONbits.TMR2ON = 1;
}

void tmr2_disable(void) {
    T2CONbits.TMR2ON = 0;
}

#endif
