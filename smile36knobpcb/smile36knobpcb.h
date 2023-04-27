#ifndef smile36knobpcb_h
#define smile36knobpcb_h
#endif

#pragma once

#include "quantum.h"

#define LAYOUT( \
	K000, K001, K002, K003, K004, K005, K006, K007, K008, K009, \
	K100, K101, K102, K103, K104, K105, K106, K107, K108, K109, \
	K200, K201, K202, K203, K204, K205, K206, K207, K208, K209, \
	K300, K301,       K303, K304,       K306,       K308, K309  \
) { \
	{ K000,  K001,  K002,  K003,  K004,  K005,  K006,  K007,  K008,  K009 }, \
	{ K100,  K101,  K102,  K103,  K104,  K105,  K106,  K107,  K108,  K109 }, \
	{ K200,  K201,  K202,  K203,  K204,  K205,  K206,  K207,  K208,  K209 }, \
	{ K300,  K301,  KC_NO, K303,  K304,  KC_NO, K306,  KC_NO, K308,  K309 }  \
}

