/*
 * File:   main.c
 * Author: Utku Do?anay
 *
 * Created on December 1, 2022, 11:12 AM
 */

// Valid prescaler values are: 1, 2, 4, 8, 16, 32, 64, 128, and 256
#define TMR0PRESCALE 16
// Timer0 start value for tmr0_init() and tmr0_reset(),
// Timer0 register can be set to a different value with the tmr0_reset_to(startValue)
#define TMR0RESET 6
// Frequency of the oscillator
#define _XTAL_FREQ 16000000

// Configuration
#include "config.h"
#include <xc.h>


// Pins
#define SONG_SELECT_1 RB0
#define VOLUME_4 RB1
#define VOLUME_3 RB2
#define VOLUME_2 RB3
#define VOLUME_1 RB4
#define VOLUME_0 RB5

#define TRIS_LED TRISC1
#define LED RC1

// Counters
unsigned int _buzzerCounter = 0;
unsigned int _ledCounter = 0;

// Variables
unsigned char _volume = 0;
unsigned int _ledDuty = 0;
unsigned int _metronome = 130;
unsigned int _period = 0;
unsigned long _pwmFreq = 0;
double _beatsPerBar = 4;
double _beatValue = 4;
double _beatLength = 0;
unsigned int _ledOnDuration = 0;
unsigned int _ledOffDuration = 0;
__bit ledOn = 0;

// Modules
#include "tmr2.h"
#include "pwm.h"
#include "pwm1.h"
#include "pwm2.h"
#include "tmr0.h"

// Song Files
#include "icinde-ask-var.h"

void __interrupt() led_isr() {
    if (INTCONbits.T0IF) {
        tmr0_reset();

        _buzzerCounter++;
        _ledCounter++;

        if (LED == 1 && _ledCounter >= _ledOnDuration) {
            LED = 0;
            _ledCounter = 0;
        } else if (LED == 0 && _ledCounter >= _ledOffDuration) {
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
    TRISB = 0xFF;
    TRIS_LED = 0;
    LED = 0;

    // Set volume
    _volume = (unsigned char) (((int) VOLUME_4 << 4) + ((int) VOLUME_3 << 3) + ((int) VOLUME_2 << 2) + ((int) VOLUME_1 << 1) + ((int) VOLUME_0)) + 1;

    tmr0_init();
    tmr2_init();

    tmr0_enable();
    tmr2_enable();
    pwm1_enable();

    icinde_ask_var_init();
    icinde_ask_var_play();

    tmr0_disable();
    tmr2_disable();
    pwm1_disable();

    while (1);
}
