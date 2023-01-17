/*
 * File:   main.c
 * Author: Utku
 *
 * Created on December 14, 2022, 15:27 AM
 */

#ifndef MUSIC_H
#define	MUSIC_H

inline void play_silence(unsigned int duration) {
    pwm1_set_volume(0);
    _buzzerCounter = 0;
    while (_buzzerCounter != duration);
}

inline void play_note(unsigned char notePeriod, unsigned char TMR2ON_T2CKPS, unsigned int duration) {
    T2CON = TMR2ON_T2CKPS;
    PR2 = notePeriod;
    pwm1_set_volume(VOLUME);
    pwm1_enable();
    _buzzerCounter = 0;
    while (_buzzerCounter != duration);
    pwm1_disable();
}

inline void play_note_cut(unsigned char notePeriod, unsigned char TMR2ON_T2CKPS, unsigned int duration) {
    T2CON = TMR2ON_T2CKPS;
    PR2 = notePeriod;
    pwm1_set_volume(VOLUME);
    pwm1_enable();
    _buzzerCounter = 0;
    while (_buzzerCounter != duration - 50);
    pwm1_disable();
    _buzzerCounter = 0;
    while (_buzzerCounter != 50);
}

#endif
