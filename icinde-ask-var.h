/*
 * File:   icinde-ask-var.h
 * Author: Utku
 *
 * Created on December 12, 2022, 14:12 AM
 */

#include "music.h"
#include "f-minor-scale.h"

void intro(void) {
    // Bar 0
    play_silence(BEAT_LENGTH * 5);
    play_note(Fm2, BEAT_LENGTH); // Ca-
    // Bar 1
    play_note(Fm3, BEAT_LENGTH); // -nım
    play_silence(BEAT_LENGTH * 5);
    // Bar 2
    play_silence(BEAT_LENGTH * 3);
    play_note(Fm3, BEAT_LENGTH); // Ders
    play_note(Fm4, BEAT_LENGTH); // al
    play_note_cut(Fm4, BEAT_LENGTH / 2);
    play_note_cut(Fm3, BEAT_LENGTH / 2); // ma
    // Bar 3
    play_note_cut(Fm3, BEAT_LENGTH / 2); // dık
    play_silence(BEAT_LENGTH / 2);
    play_note(Fm3, BEAT_LENGTH); // mı?
    play_silence(BEAT_LENGTH * 4);
    // Bar 4
    play_silence(BEAT_LENGTH * 3);
    // 4:3 polyrhytm...
    play_note(Fm3, BEAT_LENGTH / 2); // A
    play_note(Fm3, BEAT_LENGTH / 4);
    play_note_cut(Fm3, BEAT_LENGTH / 4); // cı
    play_note_cut(Fm4, BEAT_LENGTH / 2); // la
    play_note_cut(Fm3, BEAT_LENGTH / 2); // rı
    // Bar 5
    play_note_cut(Fm3, BEAT_LENGTH); // mız
    play_note_cut(Fm2, BEAT_LENGTH); // dan
    play_silence(BEAT_LENGTH * 4);
    // Bar 6
    play_note_cut(Fm1, BEAT_LENGTH * 2); // Hep
    play_silence(BEAT_LENGTH);
    play_note_cut(Fm5, BEAT_LENGTH * 2); // kaç
    play_note_cut(Fm4, BEAT_LENGTH / 2); // ma
    play_note_cut(Fm4, BEAT_LENGTH / 2); // dık
    // Bar 7
    play_silence(BEAT_LENGTH / 2);
    play_note(Fm3, BEAT_LENGTH / 2); // mı?
    play_note_cut(Fm3, BEAT_LENGTH);
    play_silence(BEAT_LENGTH * 3);
    // Bar 8
    play_silence(BEAT_LENGTH * 4);
    play_note_cut(Fm1, BEAT_LENGTH / 2); // De
    play_note_cut(Fm2, BEAT_LENGTH / 2); // lik
    play_silence(BEAT_LENGTH);
    // Bar 9
    play_note_cut(Fm3, BEAT_LENGTH * 2); // siz
    play_silence(BEAT_LENGTH * 4);
    // Bar 10
    play_silence(BEAT_LENGTH * 3);
    play_note(Fm3, BEAT_LENGTH * 2); // Uy
    play_note_cut(Fm4, BEAT_LENGTH / 2); // ku
    play_note_cut(Fm3, BEAT_LENGTH / 2); // la
    // Bar 11
    play_note_cut(Fm3, BEAT_LENGTH); // rın
    play_note_cut(Fm2, BEAT_LENGTH); // dan
    play_silence(BEAT_LENGTH * 4);
    // Bar 12
    play_silence(BEAT_LENGTH * 3);
    play_note_cut(Fm2, BEAT_LENGTH); // U
    play_note_cut(Fm5, BEAT_LENGTH * 2); // yan
    // Bar 13
    play_note_cut(Fm4, BEAT_LENGTH / 2); // ma
    play_note_cut(Fm4, BEAT_LENGTH); // dın
    play_note_cut(Fm3, BEAT_LENGTH); // mı?
    play_silence(BEAT_LENGTH * 3);
    play_silence(BEAT_LENGTH / 2);
    // Bars (14, 15)
    play_silence(BEAT_LENGTH * 12);
}

void verse(void) {
    // Bar 16
    play_silence(BEAT_LENGTH * 5);
    play_note(Fm2, BEAT_LENGTH); // Ya-
    // Bar 17
    play_note(Fm3, BEAT_LENGTH); // -nım
    play_silence(BEAT_LENGTH * 5);
    // Bar 18
    play_silence(BEAT_LENGTH * 3);
    play_note(Fm3, BEAT_LENGTH); // Ders
    play_note(Fm4, BEAT_LENGTH); // al
    play_note_cut(Fm4, BEAT_LENGTH / 2);
    play_note_cut(Fm3, BEAT_LENGTH / 2); // ma
    // Bar 19
    play_note_cut(Fm3, BEAT_LENGTH / 2); // dık
    play_silence(BEAT_LENGTH / 2);
    play_note(Fm3, BEAT_LENGTH); // mı?
    play_silence(BEAT_LENGTH * 4);
    // Bar 20
    play_silence(BEAT_LENGTH * 3);
    // 4:3 polyrhytm...
    play_note(Fm3, BEAT_LENGTH / 2); // A
    play_note(Fm3, BEAT_LENGTH / 4);
    play_note_cut(Fm3, BEAT_LENGTH / 4); // cı
    play_note_cut(Fm4, BEAT_LENGTH / 2); // la
    play_note_cut(Fm3, BEAT_LENGTH / 2); // rı
    // Bar 21
    play_note_cut(Fm3, BEAT_LENGTH); // mız
    play_note_cut(Fm2, BEAT_LENGTH); // dan
    play_silence(BEAT_LENGTH * 4);
    // Bar 22
    play_note_cut(Fm1, BEAT_LENGTH * 2); // Hep
    play_silence(BEAT_LENGTH);
    play_note_cut(Fm5, BEAT_LENGTH * 2); // kaç
    play_note_cut(Fm4, BEAT_LENGTH / 2); // ma
    play_note_cut(Fm4, BEAT_LENGTH / 2); // dık
    // Bar 23
    play_silence(BEAT_LENGTH / 2);
    play_note(Fm3, BEAT_LENGTH / 2); // mı?
    play_note_cut(Fm3, BEAT_LENGTH);
    play_silence(BEAT_LENGTH * 3);
    // Bar 24
    play_silence(BEAT_LENGTH * 4);
    play_note_cut(Fm1, BEAT_LENGTH); // De
    play_note_cut(Fm2, BEAT_LENGTH / 2); // lik
    play_silence(BEAT_LENGTH / 2);
    // Bar 25
    play_note_cut(Fm3, BEAT_LENGTH * 2); // siz
    play_silence(BEAT_LENGTH * 4);
    // Bar 26
    play_silence(BEAT_LENGTH * 3);
    play_note(Fm3, BEAT_LENGTH * 2); // Uy
    play_note_cut(Fm4, BEAT_LENGTH / 2); // ku
    play_note_cut(Fm3, BEAT_LENGTH / 2); // la
    // Bar 27
    play_note_cut(Fm3, BEAT_LENGTH); // rım
    play_note_cut(Fm2, BEAT_LENGTH); // dan
    play_silence(BEAT_LENGTH * 4);
    // Bar 28
    play_silence(BEAT_LENGTH * 3);
    play_note_cut(Fm2, BEAT_LENGTH); // U
    play_note_cut(Fm5, BEAT_LENGTH * 2); // yan
    // Bar 29
    play_note_cut(Fm4, BEAT_LENGTH / 2); // ma
    play_note_cut(Fm4, BEAT_LENGTH); // dın
    play_note_cut(Fm3, BEAT_LENGTH); // mı?
    play_silence(BEAT_LENGTH * 3);
    play_silence(BEAT_LENGTH / 2);
}

void pre_chorus(void) {
    // Bar 30
    play_silence(BEAT_LENGTH * 3);
    play_note_cut(Fm4, BEAT_LENGTH * 2); // Öz
    play_note_cut(Fm5, BEAT_LENGTH); // lü
    // Bar 31
    play_note_cut(Fm6, BEAT_LENGTH * 2); // yor
    play_note(Fm9, BEAT_LENGTH); // sa-
    play_note(Fm10, BEAT_LENGTH * 3); // -aaaaan
    // Bar 32
    play_note(Fm10, BEAT_LENGTH * 3); // -aaaaan
    play_note_cut(Fm6, BEAT_LENGTH * 2); // Dön
    play_note_cut(Fm5, BEAT_LENGTH); // mü
    // Bar 33
    play_note_cut(Fm5, BEAT_LENGTH * 2); // yor
    play_note(Fm11, BEAT_LENGTH * 2); // sa-
    play_note(Fm10, BEAT_LENGTH * 2); // -aaaaan
    // Bar 34
    play_note_cut(Fm10, BEAT_LENGTH * 5);
    play_note_cut(Fm9, BEAT_LENGTH); // Ya
    // Bar 35
    play_note_cut(Fm10, BEAT_LENGTH * 6); // zık
    // Bar 36
    play_silence(BEAT_LENGTH * 6);
    // Bar 37
    play_note(Fm10, BEAT_LENGTH * 5); // Huuu
    play_note(Fm9, BEAT_LENGTH); // ğu
    // Bar 38
    play_note(Fm8, BEAT_LENGTH); // hu
    play_silence(BEAT_LENGTH * 2);
    play_note_cut(Fm4, BEAT_LENGTH * 2); // Bil
    play_note_cut(Fm5, BEAT_LENGTH); // mi
    // Bar 39
    play_note_cut(Fm6, BEAT_LENGTH * 2); // yor
    play_note(Fm9, BEAT_LENGTH); // sa-
    play_note(Fm10, BEAT_LENGTH * 3); // -aaaaan
    // Bar 40
    play_note(Fm10, BEAT_LENGTH * 3); // -aaaaan
    play_silence(BEAT_LENGTH * 2);
    play_note_cut(Fm5, BEAT_LENGTH); // İ
    // Bar 41
    play_note_cut(Fm5, BEAT_LENGTH); // çim
    play_silence(BEAT_LENGTH * 2);
    play_note(Fm11, BEAT_LENGTH * 3); // haa-
    // Bar 42
    play_note_cut(Fm10, BEAT_LENGTH * 3); // laa
    play_silence(BEAT_LENGTH * 2);
    play_note_cut(Fm9, BEAT_LENGTH); // Ya
    // Bar 43
    play_note_cut(Fm10, BEAT_LENGTH * 6); // nık
    // Bar 44
    play_silence(BEAT_LENGTH * 4);
    play_note(Fm11, BEAT_LENGTH); // Hu
    play_note(Fm10, BEAT_LENGTH); // ğu
    // Bar 45
    play_note_cut(Fm12, BEAT_LENGTH * 5); // Huuu
    play_note_cut(Fm11, BEAT_LENGTH); // ğu
    // Bar 46
    play_note_cut(Fm10, BEAT_LENGTH); // hu + Strings
    play_note_cut(Fm10, BEAT_LENGTH); // Strings
    play_note_cut(Fm10, BEAT_LENGTH); // Strings
    play_note_cut(Fm10, BEAT_LENGTH); // Strings
    play_silence(BEAT_LENGTH * 2);
}

void chorus(void) {
    // Chorus (Half time, written as 12/8 bars)
    for (int i = 0; i < 2; i++) {
        // Bar 1
        play_note_cut(Fm3, BEAT_LENGTH); // İ-
        play_note_cut(Fm3, BEAT_LENGTH); // çin-
        play_note_cut(Fm3, BEAT_LENGTH); // de
        play_note_cut(Fm4, BEAT_LENGTH * 2); // Aşk
        play_note_cut(Fm4, BEAT_LENGTH); // var
        play_note_cut(Fm3, BEAT_LENGTH); // Yü-
        play_note_cut(Fm3, BEAT_LENGTH); // zün-
        play_note_cut(Fm3, BEAT_LENGTH); // de
        play_note_cut(Fm4, BEAT_LENGTH); // kin
        play_silence(BEAT_LENGTH * 2);
        // Bar 2
        play_note_cut(Fm2, BEAT_LENGTH); // Yü-
        play_note_cut(Fm2, BEAT_LENGTH); // re-
        play_note_cut(Fm2, BEAT_LENGTH); // ği-
        play_note_cut(Fm3, BEAT_LENGTH * 2); // ne
        play_note_cut(Fm2, BEAT_LENGTH); // Sor
        play_silence(BEAT_LENGTH);
        play_note_cut(Fm4, BEAT_LENGTH); // Bu
        play_note_cut(Fm2, BEAT_LENGTH); // da
        play_note(Fm3, BEAT_LENGTH / 2); // Ki-
        play_note_cut(Fm2, BEAT_LENGTH / 2); // im
        play_silence(BEAT_LENGTH * 2);
        // Bar 3
        play_note(Fm2, BEAT_LENGTH); // He-
        play_note_cut(Fm2, BEAT_LENGTH / 2); // er
        play_note_cut(Fm3, BEAT_LENGTH / 2); // Sa-
        play_note_cut(Fm2, BEAT_LENGTH); // bah
        play_note_cut(Fm2, BEAT_LENGTH); // Bak-
        play_note_cut(Fm3, BEAT_LENGTH); // tı-
        play_note_cut(Fm2, BEAT_LENGTH); // ğın
        play_note_cut(Fm2, BEAT_LENGTH); // Ay-
        play_note_cut(Fm3, BEAT_LENGTH); // na-
        play_note_cut(Fm2, BEAT_LENGTH); // da-
        play_note(Fm3, BEAT_LENGTH / 2); // ki-
        play_note_cut(Fm2, BEAT_LENGTH / 2); // ği
        play_silence(BEAT_LENGTH * 2);
        // Bar 4
        play_note_cut(Fm1, BEAT_LENGTH); // Ba-
        play_note_cut(Fm2, BEAT_LENGTH); // na
        play_note_cut(Fm1, BEAT_LENGTH); // De-
        play_note_cut(Fm3, BEAT_LENGTH); // li-
        play_note_cut(Fm2, BEAT_LENGTH); // ri-
        play_note_cut(Fm1, BEAT_LENGTH); // yor
        play_note(Fm4, BEAT_LENGTH); // Ha-
        play_note(Fm3, BEAT_LENGTH / 2); // a-
        play_note(Fm4, BEAT_LENGTH / 2); // A-
        play_note(Fm3, BEAT_LENGTH / 2); // a-
        play_note_cut(Fm4, BEAT_LENGTH / 2); // A
        play_note_cut(Fm3, BEAT_LENGTH * 2); // la
        play_silence(BEAT_LENGTH);
    }
}

void outro(void) {
    // Bar 1
    play_note_cut(Fm3, BEAT_LENGTH); // İ-
    play_note_cut(Fm3, BEAT_LENGTH); // çin-
    play_note_cut(Fm3, BEAT_LENGTH); // de
    play_note_cut(Fm4, BEAT_LENGTH * 2); // Aşk
    play_note_cut(Fm4, BEAT_LENGTH); // var
    play_note_cut(Fm3, BEAT_LENGTH); // Yü-
    play_note_cut(Fm3, BEAT_LENGTH); // zün-
    play_note_cut(Fm3, BEAT_LENGTH); // de
    play_note_cut(Fm4, BEAT_LENGTH); // kin
    play_silence(BEAT_LENGTH * 2);
    // Bar 2
    play_note_cut(Fm2, BEAT_LENGTH); // Yü-
    play_note_cut(Fm2, BEAT_LENGTH); // re-
    play_note_cut(Fm2, BEAT_LENGTH); // ği-
    play_note_cut(Fm3, BEAT_LENGTH * 2); // ne
    play_note_cut(Fm2, BEAT_LENGTH); // Sor
    play_silence(BEAT_LENGTH);
    play_note_cut(Fm4, BEAT_LENGTH); // Bu
    play_note_cut(Fm2, BEAT_LENGTH); // da
    play_note(Fm3, BEAT_LENGTH / 2); // Ki-
    play_note_cut(Fm2, BEAT_LENGTH / 2); // im
    play_silence(BEAT_LENGTH * 2);
    // Bar 3
    play_note(Fm2, BEAT_LENGTH); // He-
    play_note_cut(Fm2, BEAT_LENGTH / 2); // er
    play_note_cut(Fm3, BEAT_LENGTH / 2); // Sa-
    play_note_cut(Fm2, BEAT_LENGTH); // bah
    play_note_cut(Fm2, BEAT_LENGTH); // Bak-
    play_note_cut(Fm3, BEAT_LENGTH); // tı-
    play_note_cut(Fm2, BEAT_LENGTH); // ğın
    play_note_cut(Fm2, BEAT_LENGTH); // Ay-
    play_note_cut(Fm3, BEAT_LENGTH); // na-
    play_note_cut(Fm2, BEAT_LENGTH); // da-
    play_note(Fm3, BEAT_LENGTH / 2); // ki-
    play_note_cut(Fm2, BEAT_LENGTH / 2); // ği
    play_silence(BEAT_LENGTH * 2);
    // Bar 4
    play_note_cut(Fm1, BEAT_LENGTH); // Ba-
    play_note_cut(Fm2, BEAT_LENGTH); // na
    play_note_cut(Fm1, BEAT_LENGTH); // De-
    play_note_cut(Fm3, BEAT_LENGTH); // li-
    play_note_cut(Fm2, BEAT_LENGTH); // ri-
    play_note_cut(Fm1, BEAT_LENGTH); // yor
    play_note_cut(Fm1, BEAT_LENGTH); // Ba-
    play_note_cut(Fm2, BEAT_LENGTH); // na
    play_note_cut(Fm1, BEAT_LENGTH); // De-
    play_note_cut(Fm3, BEAT_LENGTH); // li
    play_silence(BEAT_LENGTH * 2);
}

void play_song(void) {
    intro();
    verse();
    pre_chorus();
    chorus();
    verse();
    pre_chorus();
    chorus();
    outro();
}

