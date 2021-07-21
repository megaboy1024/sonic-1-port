#pragma once
// Settings file, there you can configurate game

#define PC// Platform (PC, CORE(M5Stacks), FACES(M5Stacks)) 

#define TEXTURES_COUNT 	3

#define TEX_OBJECTS 	0
#define TEX_GHZ_TILES 	1
#define TEX_GHZ_GIMM 	2

#ifndef PC
	#include <M5Stack.h>
	#include <list>
#else
	#define _USE_MATH_DEFINES

	#include <SFML/Graphics.hpp>

	#include <iostream>
	#include <list>
	#include <cmath>

	#define PROGMEM 

	#define PC_FRAME_LIMIT 60

	#define String std::string
		
	#define radians(a) a * (M_PI / 180.0)

	#define SCREEN_WIDTH    384
	#define SCREEN_HEIGHT   216

	using namespace std;
#endif

/* === Screen sizes and color depth ==== */
/* Recomended values:
 * 192 x 192, 16 bit - low size, high perfomance 
 * 320 x 174, 16 bit - max size on 16 depth, low perfomance
 * 320 x 240, 8 bit  - full screen, very low perfomance 
 * 384 x 216 for PC only
 */
#ifndef PC
#define SCREEN_WIDTH   160 //160
#define SCREEN_HEIGHT   140 //140
#define COLOR_DEPTH     16
#endif
// 180 x 180
// 160 x 140 OPTIMAL
// 80 x 80 FUN

/* === Key mappings === */

#ifdef CORE
#define KEY_LEFT        M5.BtnA
#define KEY_RIGHT       M5.BtnC
#define KEY_ACTION      M5.BtnB
#endif

#ifdef PC
#define KEY_LEFT sf::Keyboard::Left
#define KEY_RIGHT sf::Keyboard::Right
#define KEY_ACTION sf::Keyboard::A
#define KEY_SPINDASH_PC sf::Keyboard::S
#endif