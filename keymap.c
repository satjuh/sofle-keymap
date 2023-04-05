#include QMK_KEYBOARD_H

#include "keymap_finnish.h"


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/*
 * QWERTY
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | ESC  |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  ?/+ |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | TAB  |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  |  `   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |LCTRL |   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |* / ' |enter |
 * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
 * |LShift|   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |  ,/; |  ./: |  -/_ |RShift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            |ALTGR | SUPER| LALT | LA1 | /  BSPC  /       \Space\  |   LA1 | LA2  |Super | ALTGR|
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */
	[0] = LAYOUT(KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, 							KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, 
				 KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, 							KC_Y, KC_U, KC_I, KC_O, KC_P, FI_ACUT, 
				 KC_LCTL, KC_A, KC_S, KC_D, KC_F, KC_G, 						KC_H, KC_J, KC_K, KC_L, KC_NUHS, KC_ENT, 
				 KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_NO, 		KC_NO,		KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_RALT, 
								KC_LGUI, KC_LALT, MO(1), KC_BSPC, 			KC_SPC, MO(1), MO(2), KC_RGUI, KC_RALT),

/*
 * First layer 
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | §/½  |  F1  |  F2  |  F3  |  F4  |  F5  |                    |  F6  |  F7  |  F8  |  F9  | F10  |  F11 |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |   @  |   £  |   $  |   €  |                    |      |   {  |   [  |   ]  |   }  |  F12 |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |   Ä  |   <  |   (  |   )  |   >  |-------.    ,-------| LEFT |  UP  | DOWN |RIGHT |   Ö  |  ~   |
 * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
 * |      | pipe |      |      |      |      |-------|    |-------| HOME |PGDOWN| PGUP |  END |      |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            |      |      |      | TRNS | /  DEL  /       \      \  | TRNS |      |      |      |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */
	[1] = LAYOUT(KC_GRV, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, 			KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, 
				 KC_NO, KC_NO, FI_AT, FI_PND, FI_DLR, FI_EURO, 			KC_NO, FI_LCBR, FI_LBRC, FI_RBRC, FI_RCBR, KC_F12, 
				 KC_NO, FI_ADIA, FI_LABK, FI_LPRN, FI_RPRN, FI_RABK, 	KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, FI_ODIA, FI_TILD, 
				 KC_NO, FI_PIPE, KC_NO, KC_NO, KC_NO, KC_NO, 
				 										KC_NO, KC_NO,  // Encoder buttons 
																															KC_HOME, KC_PGDN, KC_PGUP, KC_END, KC_NO, KC_NO, 
				KC_NO, KC_NO, KC_NO, KC_TRNS, KC_DEL, 					KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO),


/*
 * Second layer 
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |  NUM |   /  |  *   |  -   |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |   7  |   8  |   9  |   +  |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |  0   |   4  |   5  |   6  |   ,  |-------.    ,-------|      |      |  (   |  )   |      |      |
 * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
 * |      |      |   1  |   2  |   3  |  =   |-------|    |-------|      |      |      |      |      |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            |      |      |      |      | /       /       \      \  |      | TRANS|      |      |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */
	[2] = LAYOUT(KC_NO, KC_NO, KC_NUM, KC_PSLS, KC_PAST, KC_PMNS, 			KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
				 KC_NO, KC_NO, KC_P7, KC_P8, KC_P9, KC_PPLS, 				KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
				 KC_NO, KC_P0, KC_P4, KC_P5, KC_P6, KC_PCMM, 				KC_NO, FI_LPRN, FI_RPRN, KC_NO, KC_NO, KC_NO, 
				 KC_NO, KC_NO, KC_P1, KC_P2, KC_P3, KC_PEQL, 
				 											KC_NO, KC_NO, 
																			KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
				KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,							 KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO)
};



