/*
                                             ▀▀▀▀▀     ▀▀▀▀▀          ▀▀█▀▀
                                             ▄▀▀▀▄  ▄  ▄▀▀▀▄  ▄  ▄▀▀▀▄  █  ▄▀▀▀▄
                                             █   █  █  █   █  █  █   █  █  █   █
                                              ▀▀▀   █   ▀▀▀   █   ▀▀▀   ▀   ▀▀▀
                                                    █      ▄▄▄█▄▄▄    █   █  
                                                    ▀      █  █  █     █▄█
                                                  ▀▀▀▀▀    █  █  █      ▀   
                                                           ▀  ▀  ▀  D E F A U L T  
                                                                                                                                  
▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄
*/

#include QMK_KEYBOARD_H
#include <stdio.h>
#include "totem.h"

#define TAPPING_TERM 300


// ┌─────────────────────────────────────────────────┐
// │ d e f i n e   l a y e r s                       │
// └─────────────────────────────────────────────────┘ 

enum totem_layers {
    _CANARY,
    _NUMBERS,
    
};

// ┌─────────────────────────────────────────────────┐
// │ d e f i n e   k e y c o d e s                   │
// └─────────────────────────────────────────────────┘

enum custom_keycodes {
    COLEMAK = SAFE_RANGE,
    QWERTY,
    LOWER,
    RAISE,
    ADJUST,
    OS_SWAP,
    GIPHY,
    MAKE_H,
    SNAP
};

// ┌─────────────────────────────────────────────────┐
// │ d e f i n e   m a c r o n a m e s               │
// └─────────────────────────────────────────────────┘

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



// ┌────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐
// │ K E Y M A P S                                                                                                          │
// └────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {


[_CANARY] = LAYOUT(
  //╷         ╷         ╷         ╷         ╷         ╷         ╷╷         ╷         ╷         ╷         ╷         ╷         ╷
              KC_Q,     KC_L,     KC_Y,     KC_P,     KC_B,      KC_Z,     KC_F,     KC_O,     KC_U,     KC_SCLN,  
              ALT_C,    SHT_R,    CTL_S,    GUI_T,    KC_G,      KC_M,     GUI_N,    CTL_E,    SHT_I,    ALT_A,  
    KC_E,     KC_W,     KC_J,     KC_V,     KC_D,     KC_K,      KC_X,     KC_H,     KC_DOT,   KC_COMM,  KC_COLN,  KC_E,
                                  KC_ESC,   KC_TRNS,  KC_BSPC,    KC_TAB,   KC_SPC,  KC_ENTER
),

};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {


[_CANARY] = LAYOUT(
  //╷         ╷         ╷         ╷         ╷         ╷         ╷╷         ╷         ╷         ╷         ╷         ╷         ╷
              KC_Q,     KC_L,     KC_Y,     KC_P,     KC_B,      KC_Z,     KC_F,     KC_O,     KC_U,     KC_SCLN,  
              KC_C,     KC_R,     KC_S,     KC_T,     KC_G,      KC_M,     KC_N,     KC_E,     KC_I,     KC_A,  
    KC_E,     KC_W,     KC_J,     KC_V,     KC_D,     KC_K,      KC_X,     KC_H,     KC_DOT,   KC_COMM,  KC_COLN,  KC_E,
                                  KC_ESC,   KC_TRNS,  KC_BSPC,    KC_TAB,   KC_SPC,  KC_ENTER
),

};

// ┌────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐
// │ M A C R O S                                                                                                            │
// └────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘




 /*
   ┌─────────────────────────────────────────────────┐
   │ c a n a r y                                     │      ╭╮╭╮╭╮╭╮
   └─────────────────────────────────────────────────┘      │╰╯╰╯╰╯│
             ┌─────────┬─────────┬─────────┬─────────┬──────╨──┐┌──╨──────┬─────────┬─────────┬─────────┬─────────┐
     ╌┄┈┈───═╡    Q    │    L    │    Y    │    P    │    B    ││    Z    │    F    │    O    │    U    │    ;    │   
             ├─────────┼─────────┼─────────┼─────────┼─────────┤├─────────┼─────────┼─────────┼─────────┼─────────┤
             │    C    │    R    │    S    │    T    │    G    ││    M    │    N    │    E    │    I    │    A    │    
   ┌─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┐
   │    E    │    W    │    J    │    V    │    D    │    K    ││    X    │    H    │    .    │    ,    │    :    │    E    │
   └─────────┴─────────┴─────────┼─────────┼─────────┼─────────┤├─────────┼─────────┼─────────┼─────────┴─────────┴─────────┘
                                 │   ESC   │  TRNS   │  BSBC   ││  TAB  │  SPACE  │  ENT    │  
                                 └─────────┴─────────┴─────────┘└─────────┴─────────┴─────────┘*/ 