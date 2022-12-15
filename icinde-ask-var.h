/*
 * File:   icinde-ask-var.h
 * Author: Utku Do?anay
 *
 * Created on December 12, 2022, 14:12 AM
 */

// Song Metronome
#define ICINDE_ASK_VAR_METRONOME       190
// Time Signature
#define ICINDE_ASK_VAR_BEATS_PER_BAR   6

#include "music.h"
#include "f-minor-scale.h"

void icinde_ask_var_init(void) {
    _metronome = ICINDE_ASK_VAR_METRONOME;
    _beatsPerBar = ICINDE_ASK_VAR_BEATS_PER_BAR;
    _beatLength = 60000 / _metronome;
    _ledOnDuration = (unsigned int) (_beatLength / 8);
    _ledOffDuration = (unsigned int) (_beatLength - _ledOnDuration);
}

void intro(void) {
    // Bar 0
    play_note_volume(1200, _ledOnDuration, _volume);
    play_silence(_ledOffDuration);
    for (unsigned char i = 0; i < (_beatsPerBar - 2); i++) {
        play_note_volume(900, _ledOnDuration, _volume);
        play_silence(_ledOffDuration);
    }
    play_note(Fm2, _beatLength); // Ca-
    // Bar 1
    play_note(Fm3, _beatLength); // -nım
    play_silence(_beatLength * 5);
    // Bar 2
    play_silence(_beatLength * 3);
    play_note(Fm3, _beatLength); // Ders
    play_note(Fm4, _beatLength); // al
    play_note_cut(Fm4, _beatLength / 2);
    play_note_cut(Fm3, _beatLength / 2); // ma
    // Bar 3
    play_note_cut(Fm3, _beatLength / 2); // dık
    play_silence(_beatLength / 2);
    play_note(Fm3, _beatLength); // mı?
    play_silence(_beatLength * 4);
    // Bar 4
    play_silence(_beatLength * 3);
    // 4:3 polyrhytm...
    play_note(Fm3, _beatLength / 2); // A
    play_note(Fm3, _beatLength / 4);
    play_note_cut(Fm3, _beatLength / 4); // cı
    play_note_cut(Fm4, _beatLength / 2); // la
    play_note_cut(Fm3, _beatLength / 2); // rı
    // Bar 5
    play_note_cut(Fm3, _beatLength); // mız
    play_note_cut(Fm2, _beatLength); // dan
    play_silence(_beatLength * 4);
    // Bar 6
    play_note_cut(Fm1, _beatLength * 2); // Hep
    play_silence(_beatLength);
    play_note_cut(Fm5, _beatLength * 2); // kaç
    play_note_cut(Fm4, _beatLength / 2); // ma
    play_note_cut(Fm4, _beatLength / 2); // dık
    // Bar 7
    play_silence(_beatLength / 2);
    play_note(Fm3, _beatLength / 2); // mı?
    play_note_cut(Fm3, _beatLength);
    play_silence(_beatLength * 3);
    // Bar 8
    play_silence(_beatLength * 4);
    play_note_cut(Fm1, _beatLength); // De
    play_note_cut(Fm2, _beatLength / 2); // lik
    play_silence(_beatLength / 2);
    // Bar 9
    play_note_cut(Fm3, _beatLength * 2); // siz
    play_silence(_beatLength * 4);
    // Bar 10
    play_silence(_beatLength * 3);
    play_note(Fm3, _beatLength * 2); // Uy
    play_note_cut(Fm4, _beatLength / 2); // ku
    play_note_cut(Fm3, _beatLength / 2); // la
    // Bar 11
    play_note_cut(Fm3, _beatLength); // rım
    play_note_cut(Fm2, _beatLength); // dan
    play_silence(_beatLength * 4);
    // Bar 12
    play_silence(_beatLength * 3);
    play_note_cut(Fm2, _beatLength); // U
    play_note_cut(Fm5, _beatLength * 2); // yan
    // Bar 13
    play_note_cut(Fm4, _beatLength / 2); // ma
    play_note_cut(Fm4, _beatLength); // dın
    play_note_cut(Fm3, _beatLength); // mı?
    play_silence(_beatLength * 3);
    play_silence(_beatLength / 2);
    // Bars (14, 15)
    play_silence(_beatLength * 12);
}

void verse(void) {//TOD: Fix
    // Bar 16
    play_silence(_beatLength * 5);
    play_note(Fm2, _beatLength); // Ya-
    // Bar 17
    play_note(Fm3, _beatLength); // -nım
    play_silence(_beatLength * 5);
    // Bar 18
    play_silence(_beatLength * 3);
    play_note(Fm3, _beatLength); // Ders
    play_note(Fm4, _beatLength); // al
    play_note_cut(Fm4, _beatLength / 2);
    play_note_cut(Fm3, _beatLength / 2); // ma
    // Bar 19
    play_note_cut(Fm3, _beatLength / 2); // dık
    play_silence(_beatLength / 2);
    play_note(Fm3, _beatLength); // mı?
    play_silence(_beatLength * 4);
    // Bar 20
    play_silence(_beatLength * 3);
    // 4:3 polyrhytm...
    play_note(Fm3, _beatLength / 2); // A
    play_note(Fm3, _beatLength / 4);
    play_note_cut(Fm3, _beatLength / 4); // cı
    play_note_cut(Fm4, _beatLength / 2); // la
    play_note_cut(Fm3, _beatLength / 2); // rı
    // Bar 21
    play_note_cut(Fm3, _beatLength); // mız
    play_note_cut(Fm2, _beatLength); // dan
    play_silence(_beatLength * 4);
    // Bar 22
    play_note_cut(Fm1, _beatLength * 2); // Hep
    play_silence(_beatLength);
    play_note_cut(Fm5, _beatLength * 2); // kaç
    play_note_cut(Fm4, _beatLength / 2); // ma
    play_note_cut(Fm4, _beatLength / 2); // dık
    // Bar 23
    play_silence(_beatLength / 2);
    play_note(Fm3, _beatLength / 2); // mı?
    play_note_cut(Fm3, _beatLength);
    play_silence(_beatLength * 3);
    // Bar 24
    play_silence(_beatLength * 4);
    play_note_cut(Fm1, _beatLength); // De
    play_note_cut(Fm2, _beatLength / 2); // lik
    play_silence(_beatLength / 2);
    // Bar 25
    play_note_cut(Fm3, _beatLength * 2); // siz
    play_silence(_beatLength * 4);
    // Bar 26
    play_silence(_beatLength * 3);
    play_note(Fm3, _beatLength * 2); // Uy
    play_note_cut(Fm4, _beatLength / 2); // ku
    play_note_cut(Fm3, _beatLength / 2); // la
    // Bar 27
    play_note_cut(Fm3, _beatLength); // rım
    play_note_cut(Fm2, _beatLength); // dan
    play_silence(_beatLength * 4);
    // Bar 28
    play_silence(_beatLength * 3);
    play_note_cut(Fm2, _beatLength); // U
    play_note_cut(Fm5, _beatLength * 2); // yan
    // Bar 29
    play_note_cut(Fm4, _beatLength / 2); // ma
    play_note_cut(Fm4, _beatLength); // dın
    play_note_cut(Fm3, _beatLength); // mı?
    play_silence(_beatLength * 3);
    play_silence(_beatLength / 2);
}

void pre_chorus(void) {
    // Bar 30
    play_silence(_beatLength * 3);
    play_note_cut(Fm4, _beatLength * 2); // Öz
    play_note_cut(Fm5, _beatLength); // lü
    // Bar 31
    play_note_cut(Fm6, _beatLength * 2); // yor
    play_note(Fm9, _beatLength); // sa-
    play_note(Fm10, _beatLength * 3); // -aaaaan
    // Bar 32
    play_note(Fm10, _beatLength * 3); // -aaaaan
    play_note_cut(Fm6, _beatLength * 2); // Dön
    play_note_cut(Fm5, _beatLength); // mü
    // Bar 33
    play_note_cut(Fm5, _beatLength * 2); // yor
    play_note(Fm11, _beatLength * 2); // sa-
    play_note(Fm10, _beatLength * 2); // -aaaaan
    // Bar 34
    play_note_cut(Fm10, _beatLength * 5);
    play_note_cut(Fm9, _beatLength); // Ya
    // Bar 35
    play_note_cut(Fm10, _beatLength * 6); // zık
    // Bar 36
    play_silence(_beatLength * 6);
    // Bar 37
    play_note(Fm10, _beatLength * 5); // Huuu
    play_note(Fm9, _beatLength); // ğu
    // Bar 38
    play_note(Fm8, _beatLength); // hu
    play_silence(_beatLength * 2);
    play_note_cut(Fm4, _beatLength * 2); // Bil
    play_note_cut(Fm5, _beatLength); // mi
    // Bar 39
    play_note_cut(Fm6, _beatLength * 2); // yor
    play_note(Fm9, _beatLength); // sa-
    play_note(Fm10, _beatLength * 3); // -aaaaan
    // Bar 40
    play_note(Fm10, _beatLength * 3); // -aaaaan
    play_silence(_beatLength * 2);
    play_note_cut(Fm5, _beatLength); // İ
    // Bar 41
    play_note_cut(Fm5, _beatLength); // çim
    play_silence(_beatLength * 2);
    play_note(Fm11, _beatLength * 3); // haa-
    // Bar 42
    play_note_cut(Fm10, _beatLength * 3); // laa
    play_silence(_beatLength * 2);
    play_note_cut(Fm9, _beatLength); // Ya
    // Bar 43
    play_note_cut(Fm10, _beatLength * 6); // nık
    // Bar 44
    play_silence(_beatLength * 4);
    play_note(Fm11, _beatLength); // Hu
    play_note(Fm10, _beatLength); // ğu
    // Bar 45
    play_note_cut(Fm12, _beatLength * 5); // Huuu
    play_note_cut(Fm11, _beatLength); // ğu
    // Bar 46
    play_note_cut(Fm10, _beatLength); // hu + Strings
    play_note_cut(Fm10, _beatLength); // Strings
    play_note_cut(Fm10, _beatLength); // Strings
    play_note_cut(Fm10, _beatLength); // Strings
    play_silence(_beatLength * 2);
}

void chorus(void) {
    // Chorus (Half time, written as 12/8 bars)
    for (int i = 0; i < 2; i++) {
        // Bar 1
        play_note_cut(Fm3, _beatLength); // İ-
        play_note_cut(Fm3, _beatLength); // çin-
        play_note_cut(Fm3, _beatLength); // de
        play_note_cut(Fm4, _beatLength * 2); // Aşk
        play_note_cut(Fm4, _beatLength); // var
        play_note_cut(Fm3, _beatLength); // Yü-
        play_note_cut(Fm3, _beatLength); // zün-
        play_note_cut(Fm3, _beatLength); // de
        play_note_cut(Fm4, _beatLength); // kin
        play_silence(_beatLength * 2);
        // Bar 2
        play_note_cut(Fm2, _beatLength); // Yü-
        play_note_cut(Fm2, _beatLength); // re-
        play_note_cut(Fm2, _beatLength); // ği-
        play_note_cut(Fm3, _beatLength * 2); // ne
        play_note_cut(Fm2, _beatLength); // Sor
        play_silence(_beatLength);
        play_note_cut(Fm4, _beatLength); // Bu
        play_note_cut(Fm2, _beatLength); // da
        play_note(Fm3, _beatLength / 2); // Ki-
        play_note_cut(Fm2, _beatLength / 2); // im
        play_silence(_beatLength * 2);
        // Bar 3
        play_note(Fm2, _beatLength); // He-
        play_note_cut(Fm2, _beatLength / 2); // er
        play_note_cut(Fm3, _beatLength / 2); // Sa-
        play_note_cut(Fm2, _beatLength); // bah
        play_note_cut(Fm2, _beatLength); // Bak-
        play_note_cut(Fm3, _beatLength); // tı-
        play_note_cut(Fm2, _beatLength); // ğın
        play_note_cut(Fm2, _beatLength); // Ay-
        play_note_cut(Fm3, _beatLength); // na-
        play_note_cut(Fm2, _beatLength); // da-
        play_note(Fm3, _beatLength / 2); // ki-
        play_note_cut(Fm2, _beatLength / 2); // ği
        play_silence(_beatLength * 2);
        // Bar 4
        play_note_cut(Fm1, _beatLength); // Ba-
        play_note_cut(Fm2, _beatLength); // na
        play_note_cut(Fm1, _beatLength); // De-
        play_note_cut(Fm3, _beatLength); // li-
        play_note_cut(Fm2, _beatLength); // ri-
        play_note_cut(Fm1, _beatLength); // yor
        play_note(Fm4, _beatLength); // Ha-
        play_note(Fm3, _beatLength / 2); // a-
        play_note(Fm4, _beatLength / 2); // A-
        play_note(Fm3, _beatLength / 2); // a-
        play_note_cut(Fm4, _beatLength / 2); // A
        play_note_cut(Fm3, _beatLength * 2); // la
        play_silence(_beatLength);
    }
}

void outro(void) {
    // Bar 1
    play_note_cut(Fm3, _beatLength); // İ-
    play_note_cut(Fm3, _beatLength); // çin-
    play_note_cut(Fm3, _beatLength); // de
    play_note_cut(Fm4, _beatLength * 2); // Aşk
    play_note_cut(Fm4, _beatLength); // var
    play_note_cut(Fm3, _beatLength); // Yü-
    play_note_cut(Fm3, _beatLength); // zün-
    play_note_cut(Fm3, _beatLength); // de
    play_note_cut(Fm4, _beatLength); // kin
    play_silence(_beatLength * 2);
    // Bar 2
    play_note_cut(Fm2, _beatLength); // Yü-
    play_note_cut(Fm2, _beatLength); // re-
    play_note_cut(Fm2, _beatLength); // ği-
    play_note_cut(Fm3, _beatLength * 2); // ne
    play_note_cut(Fm2, _beatLength); // Sor
    play_silence(_beatLength);
    play_note_cut(Fm4, _beatLength); // Bu
    play_note_cut(Fm2, _beatLength); // da
    play_note(Fm3, _beatLength / 2); // Ki-
    play_note_cut(Fm2, _beatLength / 2); // im
    play_silence(_beatLength * 2);
    // Bar 3
    play_note(Fm2, _beatLength); // He-
    play_note_cut(Fm2, _beatLength / 2); // er
    play_note_cut(Fm3, _beatLength / 2); // Sa-
    play_note_cut(Fm2, _beatLength); // bah
    play_note_cut(Fm2, _beatLength); // Bak-
    play_note_cut(Fm3, _beatLength); // tı-
    play_note_cut(Fm2, _beatLength); // ğın
    play_note_cut(Fm2, _beatLength); // Ay-
    play_note_cut(Fm3, _beatLength); // na-
    play_note_cut(Fm2, _beatLength); // da-
    play_note(Fm3, _beatLength / 2); // ki-
    play_note_cut(Fm2, _beatLength / 2); // ği
    play_silence(_beatLength * 2);
    // Bar 4
    play_note_cut(Fm1, _beatLength); // Ba-
    play_note_cut(Fm2, _beatLength); // na
    play_note_cut(Fm1, _beatLength); // De-
    play_note_cut(Fm3, _beatLength); // li-
    play_note_cut(Fm2, _beatLength); // ri-
    play_note_cut(Fm1, _beatLength); // yor
    play_note_cut(Fm1, _beatLength); // Ba-
    play_note_cut(Fm2, _beatLength); // na
    play_note_cut(Fm1, _beatLength); // De-
    play_note_cut(Fm3, _beatLength); // li
    play_silence(_beatLength * 2);
}

void icinde_ask_var_play(void) {
    intro();
    verse();
    pre_chorus();
    chorus();
    verse();
    pre_chorus();
    chorus();
    outro();
}

