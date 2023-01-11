/*
 * File:   main.c
 * Author: Utku
 *
 * Created on December 1, 2022, 11:12 AM
 */

#define TMR0RESET 6 // Interrupt every 1ms

#define TMR2PRESCALE 64

#define _XTAL_FREQ 4000000

#define VOLUME 1

// Configuration
#include "config.h"
#include <xc.h>

#define TRIS_LED TRISC1
#define LED RC1

// Counters
unsigned int _buzzerCounter = 0;
unsigned int _ledCounter = 0;

// Song Specs
#define BEAT_LENGTH 320 // 187.5bpm (smallest possible notes without de-sync are 64th )
#define LED_ON_DURATION 40

// Modules
#include "pwm.h"
#include "pwm1.h"

// Song Files
#include "icinde-ask-var.h"

void __interrupt() led_isr() {
    if (INTCONbits.T0IF) {  // Not needed?
        // Reset Timer0
        INTCONbits.T0IF = 0;
        TMR0 = TMR0RESET;

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
    OSCCONbits.IRCF = 0b1101; // 4MHz

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
    INTCONbits.T0IF = 0; // Clear Timer0 flag
    TMR0 = TMR0RESET; // Reset Timer0 to the preset reset value (6 for 1ms interrupts)

    // Timer2 Config
    T2CONbits.T2CKPS = 0b11; // Prescaler is 64
    TMR2 = 0; // Clear Timer2 register

    // Enables
    INTCONbits.GIE = 1; // Global interrupt enable
    INTCONbits.T0IE = 1; // Timer0 interrupt enable
    T2CONbits.TMR2ON = 1; // Timer2 enable
    pwm1_enable();

    play_song();

    // Disables
    INTCONbits.T0IE = 0; // Timer0 interrupt disable
    T2CONbits.TMR2ON = 0; // Timer2 disable
    pwm1_disable();

    while (1);
}
