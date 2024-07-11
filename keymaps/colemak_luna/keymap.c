/*
Copyright 2019 @foostan
Copyright 2021 @HellSingCoder
Copyright 2023 @asdfire1

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/


// cache perc, astr, unds
#include QMK_KEYBOARD_H
// #include <stdio.h>
// #include "sendstring_colemak.h"

// Media
#define MPALY KC_MEDIA_PLAY_PAUSE
#define MPRV KC_MEDIA_PREV_TRACK
#define MNXT KC_MEDIA_NEXT_TRACK
#define MUTE KC_KB_MUTE
#define VOLD KC_KB_VOLUME_DOWN
#define VOLU KC_KB_VOLUME_UP


// Symbols
#define ASTR KC_ASTR
#define PERC KC_PERC
#define PLUS KC_PLUS
#define EQUAL KC_EQUAL
#define MINUS KC_MINS
#define UNDSC KC_UNDS
#define TILD KC_TILD // ~
#define PIPE KC_PIPE
#define GRV KC_GRV // `
#define HASH A(KC_3) // #
#define AT KC_AT // @
#define BSLS KC_BSLS //
#define FSLS KC_SLSH // /
#define POW KC_CIRC // ^
#define DQUO KC_DQUO // "
#define EXLM KC_EXLM // !
#define DLR KC_DLR // $
#define SQOT KC_QUOT // '
#define AND KC_AMPR // &
#define QMRK KC_QUES // ?
#define GRTR KC_GT // >
#define LESS KC_LT // <
#define CLN KC_COLN // :


// Screen utils
#define BDWN KC_BRIGHTNESS_DOWN // brightness down
#define BUP KC_BRIGHTNESS_UP // brightness up
#define SCLHF LCA(KC_LEFT) // screen left half
#define SCRHF LCA(KC_RIGHT) // screen right half
#define MINIM LGUI(KC_M) // minimize
#define UNTAB LSFT(KC_TAB) // untab
#define FIND LGUI(KC_F) // find
#define FINDN LGUI(KC_G) // find next

// Move windows
#define MAGL  LCTL(A(KC_LEFT)) // window left half
#define MAGR  LCTL(A(KC_RIGHT)) // window right half
#define MAG3L LCTL(A(KC_MINUS)) // window left third
#define MAG3R LCTL(A(KC_EQUAL)) // window right third
#define MAGMX LCTL(A(KC_ENT)) // maximize window
#define MAGT1 LCTL(A(KC_1)) // window position 1
#define MAGT2 LCTL(A(KC_2)) // window position 2
#define MAGT3 LCTL(A(KC_3)) // window position 3
#define MAGT4 LCTL(A(KC_4)) // window position 4
#define MAGT5 LCTL(A(KC_5)) // window position 5
#define MAGT6 LCTL(A(KC_6)) // window position 6
#define MAGT7 LCTL(A(KC_7)) // window position 7
#define MAGT8 LCTL(A(KC_8)) // window position 8
#define MAGT9 LCTL(A(KC_9)) // window position 9


// Window utils
#define NTAB LGUI(KC_T) // new tab
#define CTAB LGUI(KC_W) // close tab

#define NWIN LGUI(KC_N) // new window
#define CLOSW LGUI(LSFT(KC_W)) // close window

#define ZMAX LGUI(KC_EQUAL) // zoom in
#define ZMIN LGUI(KC_MINUS) // zoom out
#define UNDO LGUI(KC_Z) // undo
#define REDO SCMD(KC_Z) // redo
#define SAVE LGUI(KC_S) // save
#define SALL LGUI(KC_A) // select all
#define OPEN LGUI(KC_O) // open

// Other
#define ACOR QK_AUTOCORRECT_ON // autocorrect
#define MIDI MI_TOGG // midi toggle
#define EMOJI C(G(KC_SPC)) // emoji
#define CRUN G(KC_ENT) // run de.
#define CEDIT RSG(KC_DOT) // edit command.
#define SCSHT SCMD(LCTL(KC_4)) // screenshot and copy.
#define SCSHTF SCMD(KC_4) // screenshot and save.
#define LOCK LGUI(LCTL(KC_Q)) // lock screen.
#define MSNCT LGUI(KC_SPC) // mission control.


// Tying
#define DEL LCTL_T(KC_BSPC) // delete
#define WDEL A(KC_BSPC) // word deletion // delete word
#define LDEL LGUI(KC_BSPC) // line deletion // delete line
#define FLCDEL LCTL(KC_K) // clear deletion after cursor. clear everything after cursor.
#define FCDEL LCTL(KC_D) // forward cursor char deletion. delete char after cursor.
#define LNIN LSFT(KC_ENTER) // line insertion
#define CUT LGUI(KC_X) // cut
#define CPY LGUI(KC_C) // copy
#define PST LGUI(KC_V) // paste
#define WLFT A(KC_LEFT) // word left
#define WRGT A(KC_RIGHT) // word right
#define INDNT LGUI(KC_LBRC) // indent
#define OUTDNT LGUI(KC_RBRC) // outdent
#define CAPS KC_CAPS // caps lock

// Need arrows
#define SELWD LALT(KC_LSFT) // select word
#define CTLOPT LCTL(KC_LALT) // control + option // TAB nav in iterm.
#define CMDOPT LGUI(KC_LALT) // command + option// window nav in iterm.


// Keys
#define SCOLON KC_SCLN // semicolon
#define QUOT KC_QUOT // quote
#define COMMA KC_COMM // comma
#define DOT KC_DOT // dot
#define SLASH KC_SLSH // slash
#define CAPTG CW_TOGG // caps lock toggle

//Iterm
#define SPLTV LGUI(KC_D) // split vertical
#define SPLTH LGUI(LSFT(KC_D)) // split horizontal
#define EDCMD LGUI(LSFT(KC_DOT)) // edit command/ iterm thing.

#define ITLCLR LCTL(KC_U) // clear line in iterm.
#define SCLR LCTL(KC_L) // clear screen
#define EXSH LCTL(KC_D) // exit shell
#define SHDEL LCTL(KC_U) // shell delete/clear

#define MVST LCTL(KC_A) // move to start
#define MVEN LCTL(KC_E) // move to end


// Other
#define EXPSE KC_F3 // expose
#define FRPLCE LGUI(A(KC_F)) // find and replace. mainly in vscode and sumblime.
#define CMNT LGUI(KC_SLSH) // comment
#define FNDRGO LGUI(LSFT(KC_G)) // finder go to.

#define QUIT LGUI(KC_Q) // quit
#define LOCK LGUI(LCTL(KC_Q)) // lock screen

#define DMREC DM_REC1 // record macro
#define DMSTP DM_RSTP // stop macro
#define DMPLY DM_PLY1 // play macro

// Mouse utils
#define MSEUP KC_MS_UP // mouse up
#define MSEDN KC_MS_DOWN // mouse down
#define MSELT KC_MS_LEFT // mouse left
#define MSERT KC_MS_RIGHT // mouse right
#define MSERCLK KC_MS_BTN2 // mouse right click
#define MSELCLK KC_MS_BTN1 // mouse left click
#define MSESUP KC_MS_WH_UP // mouse scroll up
#define MSESDN KC_MS_WH_DOWN // mouse scroll down

// new fixes. add colons, verticla split not workign, terminal clear not working.

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // COLEMAK
    [0] = LAYOUT_split_3x6_3(
        //,-----------------------------------------------------.                    ,-----------------------------------------------------.
            KC_ESC,   KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,                         KC_J,    KC_L,    KC_U,    KC_Y,   KC_SCLN, WDEL,
        //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
            DEL,      KC_A,    KC_R,    KC_S,    KC_T,    KC_G,                         KC_M,    KC_N,    KC_E,    KC_I,   KC_O,    KC_QUOT,
        //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
            KC_LSFT,  KC_Z,    KC_X,    KC_C,    KC_D,    KC_V,                         KC_K,    KC_H,    KC_COMM, KC_DOT, KC_SLSH, KC_TAB,
        //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                                KC_LGUI,  MO(2),  KC_ENT,     KC_SPC,   MO(3), KC_RALT
                                            //`--------------------------'  `--------------------------'

        ),
    // QWERTY
    [1] = LAYOUT_split_3x6_3(
        //,-----------------------------------------------------.                    ,-----------------------------------------------------.
            KC_ESC,   KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,   KC_I,    KC_O,    KC_P,    WDEL,
        //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
            DEL,      KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                         KC_H,    KC_J,   KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
            KC_LSFT,  KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M,   KC_COMM, KC_DOT,  KC_SLSH, KC_TAB,
        //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                                KC_LALT,  MO(2),  KC_ENT,     KC_SPC,  MO(3),  KC_RALT
                                            //`--------------------------'  `--------------------------'
        ),
    // CONTROLS
    [4] = LAYOUT_split_3x6_3(
        //,-----------------------------------------------------.                    ,-----------------------------------------------------.
            KC_ESC,  DMREC,  MSELCLK,  MSEUP,   MSERCLK, MSESDN,                         AT,      ASTR,    POW,     PERC  ,   DLR,   WDEL ,
        //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
            DMPLY,   DMSTP,   MSELT,   MSEDN,   MSERT,   MSESUP,                         HASH,    DQUO,    CLN,     QUOT  ,   GRV,   AND,   
        //|--------+--------+- ------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
            LOCK,    EMOJI,   MVST   , MVEN   , _______ , MSELCLK,                       TILD,  _______,   LESS,    GRTR,     QMRK,  EXLM,
        //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                                KC_LGUI, _______,   CRUN,       LNIN,   _______,   KC_RALT
                                            //`--------------------------'  `--------------------------'
        ),
    // LOWER
    [2] = LAYOUT_split_3x6_3(
        //,-----------------------------------------------------.                    ,-----------------------------------------------------.
            MPALY,   MPRV,     MNXT,   MUTE,     VOLD,   VOLU,                          MINUS,   KC_1,    KC_2,    KC_3,    CLN,    FLCDEL,
        //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
            CAPS,    EXPSE,   CTLOPT,  BDWN,     BUP,    MSNCT,                         EQUAL,   KC_4,    KC_5,    KC_6,    KC_0,   PIPE,
        //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
            KC_LSFT, SPLTH,   SPLTV,   FNDRGO ,  MO(4),  FRPLCE,                        PLUS,    KC_7,    KC_8,    KC_9,    BSLS,   KC_ENT,
        //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                                KC_LGUI, _______, KC_ENT,     UNDSC,  MO(5),  KC_LALT
                                            //`--------------------------'  `--------------------------'
        ),
    // RAISE
    [3] = LAYOUT_split_3x6_3(
        //,-----------------------------------------------------.                    ,-----------------------------------------------------.
            KC_TAB,   UNTAB,   KC_LALT, KC_LCTL,SELWD,   CTLOPT,                         PST,    WLFT,   KC_UP,    WRGT,   KC_HOME, LDEL,
        //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
            FCDEL,    HASH,    KC_AT,  KC_LBRC, KC_LPRN, KC_LCBR,                        CPY,   KC_LEFT, KC_DOWN, KC_RIGHT, KC_END, SALL,
        //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
            KC_LSFT,  POW,     CMDOPT, KC_RBRC, KC_RPRN, KC_RCBR,                        CUT,    MO(4),   UNDO,    REDO,    OPEN,   SAVE,
        //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                                KC_LGUI, MO(5),   KC_ENT,     KC_SPC, _______, KC_LALT
                                            //`--------------------------'  `--------------------------'
        ),
    // ADJUST
    [5] = LAYOUT_split_3x6_3(
        //,-------------------------  ----------------------------.                    ,-----------------------------------------------------.
            QK_BOOT,  TG(1),   LOCK,   QUIT,     ACOR,   MAGMX,                         FIND,   FINDN,    NTAB,    CTAB,   NWIN,    CLOSW,
        //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
            RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, SCRHF,    ZMAX,                        ITLCLR,  CMNT,    INDNT,   KC_PGUP,  SCSHT,  CEDIT,
        //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
            RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, SCLHF,    ZMIN,                        EXSH,    CAPTG,   OUTDNT,  KC_PGDN,  SCSHTF, MINIM,
        //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                                KC_LGUI, _______, _______,    _______, _______, KC_LALT
                                            //`--------------------------'  `--------------------------'
        )};

// clang-format on
layer_state_t layer_state_set_user(layer_state_t state) {
    switch (get_highest_layer(state)) {
        case 0:
            rgb_matrix_reload_from_eeprom();
            break;
        case 1:
            rgb_matrix_mode_noeeprom(RGB_MATRIX_ALPHAS_MODS);
            rgb_matrix_sethsv_noeeprom(HSV_TEAL);
            break;
        case 2:
            rgb_matrix_mode_noeeprom(RGB_MATRIX_ALPHAS_MODS);
            rgb_matrix_sethsv_noeeprom(HSV_MAGENTA);
            break;
        case 3:
            rgb_matrix_mode_noeeprom(RGB_MATRIX_ALPHAS_MODS);
            rgb_matrix_sethsv_noeeprom(HSV_TEAL);
            break;
        case 4:
            rgb_matrix_mode_noeeprom(RGB_MATRIX_ALPHAS_MODS);
            rgb_matrix_sethsv_noeeprom(HSV_BLUE);
            break;
        case 5:
            rgb_matrix_mode_noeeprom(RGB_MATRIX_ALPHAS_MODS);
            rgb_matrix_sethsv_noeeprom(HSV_RED);
            break;
    }
    return state;
}

#ifdef OLED_ENABLE

/* 32 * 32 logo */
static void render_logo(void) {
    static const char PROGMEM hexagram_logo[] = {0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xc0, 0x70, 0x18, 0x06, 0x06, 0x18, 0x70, 0xc0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x01, 0x07, 0x1f, 0x32, 0x66, 0xc4, 0x6c, 0x38, 0x1e, 0x37, 0x61, 0xc0, 0x80, 0x80, 0x80, 0x80, 0xc0, 0x61, 0x37, 0x1e, 0x38, 0x6c, 0xc4, 0x66, 0x32, 0x1f, 0x07, 0x01, 0x00, 0x00, 0x00, 0x00, 0x80, 0xe0, 0xf8, 0x4c, 0x66, 0x23, 0x36, 0x1c, 0x78, 0xec, 0x86, 0x03, 0x01, 0x01, 0x01, 0x01, 0x03, 0x86, 0xec, 0x78, 0x1c, 0x36, 0x23, 0x66, 0x4c, 0xf8, 0xe0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x0e, 0x18, 0x60, 0x60, 0x18, 0x0e, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00};
    oled_write_raw_P(hexagram_logo, sizeof(hexagram_logo));
}

/* KEYBOARD PET START */

/* settings */
#    define MIN_WALK_SPEED 10
#    define MIN_RUN_SPEED 40

/* advanced settings */
#    define ANIM_FRAME_DURATION 200 // how long each frame lasts in ms
#    define ANIM_SIZE 96            // number of bytes in array. If you change sprites, minimize for adequate firmware size. max is 1024

/* timers */
uint32_t anim_timer = 0;
uint32_t anim_sleep = 0;

/* current frame */
uint8_t current_frame = 0;

/* status variables */
int   current_wpm = 0;
led_t led_usb_state;

bool isSneaking = false;
bool isJumping  = false;
bool showedJump = true;
bool isBarking  = false;

/* logic */
static void render_luna(int LUNA_X, int LUNA_Y) {
    /* Sit */
    static const char PROGMEM sit[2][ANIM_SIZE] = {/* 'sit1', 32x22px */
                                                {
                                                    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x1c, 0x02, 0x05, 0x02, 0x24, 0x04, 0x04, 0x02, 0xa9, 0x1e, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x10, 0x08, 0x68, 0x10, 0x08, 0x04, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x06, 0x82, 0x7c, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x04, 0x0c, 0x10, 0x10, 0x20, 0x20, 0x20, 0x28, 0x3e, 0x1c, 0x20, 0x20, 0x3e, 0x0f, 0x11, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                                                },

                                                   /* 'sit2', 32x22px */
                                                {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x1c, 0x02, 0x05, 0x02, 0x24, 0x04, 0x04, 0x02, 0xa9, 0x1e, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x90, 0x08, 0x18, 0x60, 0x10, 0x08, 0x04, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x0e, 0x82, 0x7c, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x04, 0x0c, 0x10, 0x10, 0x20, 0x20, 0x20, 0x28, 0x3e, 0x1c, 0x20, 0x20, 0x3e, 0x0f, 0x11, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}};

    /* Walk */
    static const char PROGMEM walk[2][ANIM_SIZE] = {/* 'walk1', 32x22px */
                                                    {
                                                        0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x40, 0x20, 0x10, 0x90, 0x90, 0x90, 0xa0, 0xc0, 0x80, 0x80, 0x80, 0x70, 0x08, 0x14, 0x08, 0x90, 0x10, 0x10, 0x08, 0xa4, 0x78, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x08, 0xfc, 0x01, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x18, 0xea, 0x10, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x1c, 0x20, 0x20, 0x3c, 0x0f, 0x11, 0x1f, 0x03, 0x06, 0x18, 0x20, 0x20, 0x3c, 0x0c, 0x12, 0x1e, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                                                    },

                                                    /* 'walk2', 32x22px */
                                                    {
                                                        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x40, 0x20, 0x20, 0x20, 0x40, 0x80, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x10, 0x28, 0x10, 0x20, 0x20, 0x20, 0x10, 0x48, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x20, 0xf8, 0x02, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x03, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x10, 0x30, 0xd5, 0x20, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x20, 0x30, 0x0c, 0x02, 0x05, 0x09, 0x12, 0x1e, 0x02, 0x1c, 0x14, 0x08, 0x10, 0x20, 0x2c, 0x32, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                                                    }};

    /* Run */
    static const char PROGMEM run[2][ANIM_SIZE] = {/* 'run1', 32x22px */
                                                {
                                                    0x00, 0x00, 0x00, 0x00, 0xe0, 0x10, 0x08, 0x08, 0xc8, 0xb0, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x40, 0x40, 0x3c, 0x14, 0x04, 0x08, 0x90, 0x18, 0x04, 0x08, 0xb0, 0x40, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0xc4, 0xa4, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xc8, 0x58, 0x28, 0x2a, 0x10, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x09, 0x04, 0x04, 0x04, 0x04, 0x02, 0x03, 0x02, 0x01, 0x01, 0x02, 0x02, 0x04, 0x08, 0x10, 0x26, 0x2b, 0x32, 0x04, 0x05, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00,
                                                },

                                                   /* 'run2', 32x22px */
                                                {
                                                    0x00, 0x00, 0x00, 0xe0, 0x10, 0x10, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x78, 0x28, 0x08, 0x10, 0x20, 0x30, 0x08, 0x10, 0x20, 0x40, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x04, 0x08, 0x10, 0x11, 0xf9, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x10, 0xb0, 0x50, 0x55, 0x20, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x0c, 0x10, 0x20, 0x28, 0x37, 0x02, 0x1e, 0x20, 0x20, 0x18, 0x0c, 0x14, 0x1e, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                                                }};

    /* Bark */
    static const char PROGMEM bark[2][ANIM_SIZE] = {/* 'bark1', 32x22px */
                                                    {
                                                        0x00, 0xc0, 0x20, 0x10, 0xd0, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x40, 0x3c, 0x14, 0x04, 0x08, 0x90, 0x18, 0x04, 0x08, 0xb0, 0x40, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x04, 0x08, 0x10, 0x11, 0xf9, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xc8, 0x48, 0x28, 0x2a, 0x10, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x0c, 0x10, 0x20, 0x28, 0x37, 0x02, 0x02, 0x04, 0x08, 0x10, 0x26, 0x2b, 0x32, 0x04, 0x05, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                                                    },

                                                    /* 'bark2', 32x22px */
                                                    {
                                                        0x00, 0xe0, 0x10, 0x10, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x40, 0x40, 0x2c, 0x14, 0x04, 0x08, 0x90, 0x18, 0x04, 0x08, 0xb0, 0x40, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x04, 0x08, 0x10, 0x11, 0xf9, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xc0, 0x48, 0x28, 0x2a, 0x10, 0x0f, 0x20, 0x4a, 0x09, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x0c, 0x10, 0x20, 0x28, 0x37, 0x02, 0x02, 0x04, 0x08, 0x10, 0x26, 0x2b, 0x32, 0x04, 0x05, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                                                    }};

    /* Sneak */
    static const char PROGMEM sneak[2][ANIM_SIZE] = {/* 'sneak1', 32x22px */
                                                    {
                                                        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x40, 0x40, 0x40, 0x40, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x40, 0x40, 0x80, 0x00, 0x80, 0x40, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 0x21, 0xf0, 0x04, 0x02, 0x02, 0x02, 0x02, 0x03, 0x02, 0x02, 0x04, 0x04, 0x04, 0x03, 0x01, 0x00, 0x00, 0x09, 0x01, 0x80, 0x80, 0xab, 0x04, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x1c, 0x20, 0x20, 0x3c, 0x0f, 0x11, 0x1f, 0x02, 0x06, 0x18, 0x20, 0x20, 0x38, 0x08, 0x10, 0x18, 0x04, 0x04, 0x02, 0x02, 0x01, 0x00, 0x00, 0x00, 0x00,
                                                    },

                                                     /* 'sneak2', 32x22px */
                                                    {
                                                        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x40, 0x40, 0x40, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0xa0, 0x20, 0x40, 0x80, 0xc0, 0x20, 0x40, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3e, 0x41, 0xf0, 0x04, 0x02, 0x02, 0x02, 0x03, 0x02, 0x02, 0x02, 0x04, 0x04, 0x02, 0x01, 0x00, 0x00, 0x00, 0x04, 0x00, 0x40, 0x40, 0x55, 0x82, 0x7c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x20, 0x30, 0x0c, 0x02, 0x05, 0x09, 0x12, 0x1e, 0x04, 0x18, 0x10, 0x08, 0x10, 0x20, 0x28, 0x34, 0x06, 0x02, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
                                                    }};

    /* animation */
    void animate_luna(void) {
        /* jump */
        if (isJumping || !showedJump) {
            /* clear */
            oled_set_cursor(LUNA_X, LUNA_Y + 2);
            oled_write("     ", false);

            oled_set_cursor(LUNA_X, LUNA_Y - 1);

            showedJump = true;
        } else {
            /* clear */
            oled_set_cursor(LUNA_X, LUNA_Y - 1);
            oled_write("     ", false);

            oled_set_cursor(LUNA_X, LUNA_Y);
        }

        /* switch frame */
        current_frame = (current_frame + 1) % 2;

        /* current status */
        if (led_usb_state.caps_lock) {
            oled_write_raw_P(bark[abs(1 - current_frame)], ANIM_SIZE);

        } else if (isSneaking) {
            oled_write_raw_P(sneak[abs(1 - current_frame)], ANIM_SIZE);

        } else if (current_wpm <= MIN_WALK_SPEED) {
            oled_write_raw_P(sit[abs(1 - current_frame)], ANIM_SIZE);

        } else if (current_wpm <= MIN_RUN_SPEED) {
            oled_write_raw_P(walk[abs(1 - current_frame)], ANIM_SIZE);

        } else {
            oled_write_raw_P(run[abs(1 - current_frame)], ANIM_SIZE);
        }
    }

    /* animation timer */
    if (timer_elapsed32(anim_timer) > ANIM_FRAME_DURATION) {
        anim_timer = timer_read32();
        animate_luna();
    }

    /* this fixes the screen on and off bug */
    if (current_wpm > 0) {
        oled_on();
        anim_sleep = timer_read32();
    } else if (timer_elapsed32(anim_sleep) > OLED_TIMEOUT) {
        /* clear */
        oled_set_cursor(0, 0);
        oled_write("                                                                                                    ", false);
        oled_off();
        oled_set_cursor(LUNA_X, LUNA_Y);
    }
}

/* KEYBOARD PET END */

static void print_logo_narrow(void) {
    render_logo();
    if (current_wpm > 0) {
        anim_sleep = timer_read32();
        /* wpm counter */
        oled_set_cursor(0, 14);
        oled_write(get_u8_str(get_current_wpm(), '0'), false);

        oled_set_cursor(0, 15);
        oled_write(" wpm", false);

        /* this fixes the screen on and off bug */

    } else if (timer_elapsed32(anim_sleep) > OLED_TIMEOUT) {
        /* clear */
        oled_set_cursor(0, 0);
        oled_write("                                                                                                                        ", false);
        oled_off();
    }
}

static void print_status_narrow(void) {
    /* Print current layer */
    oled_write("LAYER", false);

    oled_set_cursor(0, 6);

    switch (get_highest_layer(layer_state)) {
        case 0:
            oled_write("Base ", false);
            break;
        case 1:
            oled_write("Qwerty ", false);
            break;
        case 2:
            oled_write("Midi", false);
            break;
        case 3:
            oled_write("Lower", false);
            break;
        case 4:
            oled_write("Raise", false);
            break;
        case 5:
            oled_write("Adj  ", false);
            break;
        default:
            oled_write("Undef", false);
    }

    /* KEYBOARD PET RENDER START */

    render_luna(0, 13);

    /* KEYBOARD PET RENDER END */
}

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    return OLED_ROTATION_270;
}

bool oled_task_user(void) {
    /* KEYBOARD PET VARIABLES START */

    current_wpm   = get_current_wpm();
    led_usb_state = host_keyboard_led_state();

    /* KEYBOARD PET VARIABLES END */

    if (is_keyboard_master()) {
        print_status_narrow();
    } else {
        print_logo_narrow();
    }
    return false;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
            /* KEYBOARD PET STATUS START */

        case KC_LCTL:
            isSneaking = record->event.pressed;
            break;
        case KC_SPC:
            isJumping = record->event.pressed;
            if (isJumping) {
                showedJump = false;
            }
            break;
        case KC_CAPS:
            isBarking = record->event.pressed;
            break;

            /* KEYBOARD PET STATUS END */
    }

    return true;
}

#endif
