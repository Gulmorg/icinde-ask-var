/*
 * File:   tmr0.h
 * Author: Utku
 *
 * Created on December 2, 2022, 9:32 AM
 */

#ifndef TMR0_H
#define TMR0_H

#define tmr0_enable() INTCONbits.T0IE = 1; INTCONbits.T0IF = 0; TMR0 = TMR0RESET
#define tmr0_disable() INTCONbits.T0IE = 0
#define tmr0_reset() INTCONbits.T0IF = 0; TMR0 = TMR0RESET

#endif
