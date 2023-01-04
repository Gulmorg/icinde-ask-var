/*
 * File: dgko.h
 * Author: Utku
 * Comments:
 * Revision history:
 */

#ifndef DGKO_H
#define	DGKO_H

#include "music.h"
#include "chromatic-scale.h"

void dgko_init(void) {
    _metronome = 110;
    _beatsPerBar = 6;
    _beatLength = 60000 / _metronome;
    _ledOnDuration = (unsigned int) (_beatLength / 8);
    _ledOffDuration = (unsigned int) (_beatLength - _ledOnDuration);
}

void dgko_play() {
    while (1) {
        // bar 0
        play_silence(_beatLength * 6);
        // bar 1
        play_note_cut(C5, _beatLength * 2 / 3);
        play_note_cut(C5, _beatLength / 3);
        play_note_cut(D5, _beatLength);
        play_note_cut(C5, _beatLength);
        play_note_cut(F5, _beatLength);
        play_note_cut(E5, _beatLength * 2);
        // bar 2
        play_note_cut(C5, _beatLength * 2 / 3);
        play_note_cut(C5, _beatLength / 3);
        play_note_cut(D5, _beatLength);
        play_note_cut(C5, _beatLength);
        play_note_cut(G5, _beatLength);
        play_note_cut(F5, _beatLength * 2);
        // bar 3
        play_note_cut(C5, _beatLength * 2 / 3);
        play_note_cut(C5, _beatLength / 3);
        play_note_cut(C6, _beatLength);
        play_note_cut(A5, _beatLength);
        play_note_cut(F5, _beatLength);
        play_note_cut(E5, _beatLength);
        play_note_cut(D5, _beatLength * 2);
        // bar 4
        play_note_cut(As5, _beatLength * 2 / 3);
        play_note_cut(As5, _beatLength / 3);
        play_note_cut(A5, _beatLength);
        play_note_cut(F5, _beatLength);
        play_note_cut(G5, _beatLength);
        play_note_cut(F5, _beatLength * 2);
    }
}

#endif

