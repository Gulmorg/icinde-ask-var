/*
 * File:   main.c
 * Author: Utku
 *
 * Created on December 1, 2022, 11:12 AM
 */

#define TMR0RESET 6 // Interrupt every 1ms

#define TMR2PRESCALE 64

#define _XTAL_FREQ 16000000

#define VOLUME 1

// Configuration
#include "config.h"
#include <xc.h>

#define TRIS_LED TRISC1
#define LED RC1

// Counters
unsigned int _buzzerCounter = 0;
unsigned int _ledCounter = 0;

// Variables
unsigned int _pwmFreq = 0;
#define BEAT_LENGTH  320 // 187.5bpm (smallest possible notes without de-sync are 64th )
#define LED_ON_DURATION 40

// Modules
#include "tmr2.h"
#include "pwm.h"
#include "pwm1.h"
#include "tmr0.h"

// Song Files
#include "icinde-ask-var.h"

void __interrupt() led_isr() {
    if (INTCONbits.T0IF) {  // Not needed?
        tmr0_reset();

        _buzzerCounter++;
        _ledCounter++;

        if (_ledCounter == LED_ON_DURATION) {
            LED = 0;
        } else if (_ledCounter == BEAT_LENGTH) {
            LED = 1;
            _ledCounter = 0;
        }
    }
}

void main(void) {
    // Set IOSC Frequency
    OSCCONbits.IRCF = 0b1111; // 16MHz

    // Analog unit and analog ports are off
    ADCON0bits.ADON = 0;
    ANSELA = 0x00;
    ANSELB = 0x00;
    ANSELC = 0x00;

    // Set input/output pins
    TRIS_LED = 0;
    LED = 0;

    // Timer0 Config
    OPTION_REGbits.PS = 0b011; // Prescaler is 16
    OPTION_REGbits.T0SE = 0; // Interrupt on rising edge
    OPTION_REGbits.T0CS = 0; // Clock source is internal oscillator

    // Timer2 Config
    T2CONbits.T2CKPS = 0b11; // Prescaler is 64

    INTCONbits.GIE = 1; // Global interrupt enable
    tmr0_enable();
    tmr2_enable();
    pwm1_enable();

    play_song();

    tmr0_disable();
    tmr2_disable();
    pwm1_disable();

    while (1);
}
