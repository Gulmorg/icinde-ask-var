/*
 * File:   tmr2.h
 * Author: Utku
 *
 * Created on December 2, 2022, 9:36 AM
 */

#ifndef TMR2_H
#define	TMR2_H

#define tmr2_enable() T2CONbits.TMR2ON = 1; TMR2 = 0
#define tmr2_disable() T2CONbits.TMR2ON = 0;

#endif
