/*
 * File:   main.c
 * Author: Utku
 *
 * Created on December 14, 2022, 15:27 AM
 */

#ifndef MUSIC_H
#define	MUSIC_H

void play_silence(double duration) {
    pwm1_set_volume(0);
    _buzzerCounter = 0;
    while (_buzzerCounter < (int) duration);

}

void play_note(double freq, double duration) {
    pwm_set_freq(freq);
    pwm1_set_volume(_volume);
    _buzzerCounter = 0;
    while (_buzzerCounter < (int) duration);
    pwm1_set_volume(0);
}

void play_note_cut(double freq, double duration) {
    pwm_set_freq(freq);
    pwm1_set_volume(_volume);
    _buzzerCounter = 0;
    while (_buzzerCounter < (int) duration - 50);
    pwm1_set_volume(0);
    _buzzerCounter = 0;
    while (_buzzerCounter < 50);
}

void play_note_volume(double freq, double duration, unsigned char volume) {
    pwm_set_freq(freq);
    pwm1_set_volume(volume);
    _buzzerCounter = 0;
    while (_buzzerCounter < duration);
    pwm1_set_volume(0);
}

#endif
