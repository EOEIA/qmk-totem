/* 
                                             ▀▀▀▀▀     ▀▀▀▀▀          ▀▀█▀▀
                                             ▄▀▀▀▄  ▄  ▄▀▀▀▄  ▄  ▄▀▀▀▄  █  ▄▀▀▀▄
                                             █   █  █  █   █  █  █   █  █  █   █
                                              ▀▀▀   █   ▀▀▀   █   ▀▀▀   ▀   ▀▀▀
                                                    █      ▄▄▄█▄▄▄    █   █  
                                                    ▀      █  █  █     █▄█
                                                  ▀▀▀▀▀    █  █  █      ▀   ┌─┐┌─╴╷┌──┬─
                                                           ▀  ▀  ▀          │ ┐├─╴│└─┐│
                                                                            └─┘└─╴╵╶─┘╵                                                          
▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄
*/

#include QMK_KEYBOARD_H
#include <stdio.h>
#include "totem.h"

// ┌────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐
// │ D E F I N I T I O N S                                                                                                  │
// └────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘
// ▝▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▘

// ┌─────────────────────────────────────────────────┐
// │ d e f i n e   l a y e r s                       │
// └─────────────────────────────────────────────────┘ 

#define TAPPING_TERM 300

enum totem_layers {
    _CANARY,
    _NAV,
    _NUM,
    _SYM,
};
// ┌─────────────────────────────────────────────────┐
// │ d e f i n e   k e y c o d e s                   │
// └─────────────────────────────────────────────────┘
enum custom_keycodes {
    NAV_SPC = SAFE_RANGE, //
};



// ┌─────────────────────────────────────────────────┐
// │ d e f i n e   m a c r o n a m e s               │
// └─────────────────────────────────────────────────┘

// LEFT HAND HOME ROW MODS ├───────────────────────────────────┐

// LEFT HAND HOME ROW MODS COLEMAK ├─────────────────┐


#define ALT_C MT(MOD_LALT, KC_C)
#define SHT_R MT(MOD_LSFT, KC_R)
#define CTL_S MT(MOD_LCTL, KC_S)
#define GUI_T MT(MOD_LGUI, KC_T)

// RIGHT HAND HOME ROW MODS CANARY ├────────────────┐

#define GUI_N MT(MOD_LGUI, KC_N)
#define CTL_E MT(MOD_LCTL, KC_E)
#define SHT_I MT(MOD_LSFT, KC_I)
#define ALT_A MT(MOD_LALT, KC_A)

//
#define NAV_SPC LT(_NAV, KC_SPC)




// ┌─────────────────────────────────────────────────┐
// │ d e f i n e   c o m b o s                       │
// └─────────────────────────────────────────────────┘





// ┌────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐
// │ K E Y M A P S                                                                                                          │
// └────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘
// ▝▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▘

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  
  [_CANARY] = LAYOUT(
              KC_Q,     KC_L,     KC_Y,     KC_P,     KC_B,            KC_Z,     KC_F,     KC_O,     KC_U,     KC_SCLN,  
              ALT_C,    SHT_R,    CTL_S,    GUI_T,    KC_G,            KC_M,     GUI_N,    CTL_E,    SHT_I,    ALT_A,  
    KC_E,     KC_W,     KC_J,     KC_V,     KC_D,     KC_K,            KC_X,     KC_H,     KC_DOT,   KC_COMM,  KC_COLN,  KC_E,
                                  KC_ESC,   KC_TRNS,  KC_BSPC,          KC_TAB,   NAV_SPC,  KC_ENTER
),

    [_NAV] = LAYOUT(
        KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,        KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
        KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,        KC_TRNS,  KC_LEFT,  KC_DOWN,  KC_UP,    KC_RIGHT,
 KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,        KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
                                KC_TRNS,  KC_TRNS,  KC_TRNS,        KC_TRNS,  KC_TRNS,  KC_TRNS
    ),

   [_NUM] = LAYOUT(
             KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_TRNS,          KC_TRNS,  KC_7,  KC_8,  KC_9,   KC_COMM,  
              KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_TRNS,          KC_TRNS,  KC_4,  KC_5,  KC_6,   KC_0,
    KC_TRNS,  KC_F11,  KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_TRNS,          KC_TRNS,  KC_1,  KC_2,  KC_3,   KC_DOT, KC_TRNS,
                                  KC_TRNS,  KC_TRNS,   KC_TRNS,          KC_TRNS,  KC_TRNS,  KC_TRNS

 ),

  [_SYM] = LAYOUT(
KC_QUESTION, KC_EXCLAIM, KC_CIRC, KC_PIPE, KC_TRNS,             KC_TILDE, KC_DLR, KC_LT, KC_GT, KC_TRNS,  
    KC_QUOT, KC_LBRC, KC_LPRN, KC_LBRC, KC_PERC,                KC_AT, KC_SLSH, KC_ASTR, KC_HASH, KC_EQUAL,
  KC_TRNS, KC_QUOTE, KC_RBRC, KC_RPRN, KC_LCBR, KC_RCBR,      KC_AMPR, KC_BSLS, KC_PLUS, KC_MINUS, KC_TRNS, KC_TRNS,
                              KC_TRNS,  KC_TRNS,   KC_TRNS,     KC_TRNS,  KC_TRNS,  KC_TRNS

 ),



 /*
   [_TEMPLATE] = LAYOUT(
 //╷         ╷         ╷         ╷         ╷         ╷         ╷        ╷         ╷         ╷         ╷         ╷         ╷         ╷
              _______,  _______,  _______,  _______,   _______,          _______,  _______,  _______,  _______,   _______,  
              _______,  _______,  _______,  _______,   _______,          _______,  _______,  _______,  _______,   _______,
    _______,  _______,  _______,  _______,  _______,   _______,          _______,  _______,  _______,  _______,   _______, _______,
                                  _______,  _______,   _______,          _______,  _______,  _______,
 ),
*/
};