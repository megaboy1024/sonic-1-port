// This file converted from the original Sonic The Hedgehog Disasm
#include "..\..\Settings.h"
const uint8_t horHeights[4096] PROGMEM = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 
0x10, 0x10, 0x0C, 0x08, 0x05, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x0E, 0x0C, 0x0A, 0x08, 0x06, 0x04, 0x03, 0x01, 0x00, 
0x0F, 0x0D, 0x0C, 0x0B, 0x0A, 0x09, 0x08, 0x07, 0x06, 0x05, 0x04, 0x03, 0x02, 0x01, 0x01, 0x00, 
0x0F, 0x0E, 0x0E, 0x0D, 0x0C, 0x0C, 0x0B, 0x0B, 0x0A, 0x0A, 0x09, 0x09, 0x08, 0x08, 0x07, 0x07, 
0x06, 0x06, 0x05, 0x05, 0x05, 0x04, 0x04, 0x04, 0x03, 0x03, 0x03, 0x03, 0x02, 0x02, 0x02, 0x02, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x02, 0x02, 0x02, 0x02, 0x03, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
0x03, 0x03, 0x04, 0x04, 0x04, 0x05, 0x05, 0x05, 0x06, 0x06, 0x07, 0x07, 0x07, 0x08, 0x08, 0x09, 
0x00, 0x00, 0x00, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
0x00, 0x00, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
0x00, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x10, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x10, 0x10, 0x10, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x10, 0x10, 0x10, 0x10, 0x10, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
0x00, 0x00, 0x00, 0x00, 0x08, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
0x00, 0x00, 0x08, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
0x08, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x08, 0x0C, 0x10, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x08, 0x0C, 0x10, 0x10, 0x10, 0x10, 0x10, 
0x00, 0x00, 0x00, 0x00, 0x04, 0x08, 0x0C, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
0x04, 0x08, 0x0C, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x04, 0x06, 0x08, 0x0A, 0x0C, 0x0E, 0x10, 
0x02, 0x04, 0x06, 0x08, 0x0A, 0x0C, 0x0E, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
0x09, 0x09, 0x0A, 0x0A, 0x0B, 0x0B, 0x0C, 0x0C, 0x0D, 0x0D, 0x0E, 0x0E, 0x0F, 0x0F, 0x10, 0x10, 
0x01, 0x01, 0x02, 0x02, 0x03, 0x03, 0x04, 0x04, 0x05, 0x05, 0x06, 0x06, 0x07, 0x07, 0x08, 0x08, 
0x09, 0x0A, 0x0A, 0x0B, 0x0B, 0x0C, 0x0C, 0x0D, 0x0D, 0x0E, 0x0E, 0x0F, 0x10, 0x10, 0x10, 0x10, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 
0x02, 0x03, 0x03, 0x04, 0x05, 0x05, 0x06, 0x07, 0x08, 0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0C, 0x0D, 
0x01, 0x01, 0x01, 0x01, 0x02, 0x02, 0x02, 0x02, 0x03, 0x03, 0x03, 0x03, 0x04, 0x04, 0x04, 0x04, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x10, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x06, 0x0A, 0x0F, 0x10, 0x10, 
0x00, 0x00, 0x00, 0x02, 0x04, 0x06, 0x08, 0x0A, 0x0D, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
0x0D, 0x0F, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x03, 0x04, 0x06, 0x07, 0x08, 0x0A, 0x0B, 
0x0A, 0x0B, 0x0B, 0x0C, 0x0D, 0x0F, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
0x00, 0x00, 0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0E, 
0x00, 0x00, 0x01, 0x03, 0x04, 0x05, 0x07, 0x08, 0x0A, 0x0B, 0x0D, 0x0F, 0x10, 0x10, 0x10, 0x10, 
0x05, 0x05, 0x05, 0x06, 0x06, 0x06, 0x07, 0x07, 0x07, 0x08, 0x08, 0x09, 0x09, 0x09, 0x0A, 0x0A, 
0x08, 0x0A, 0x0C, 0x0F, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
0x02, 0x02, 0x02, 0x02, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x04, 0x04, 0x04, 0x04, 0x05, 0x05, 
0x05, 0x05, 0x05, 0x06, 0x06, 0x06, 0x06, 0x07, 0x07, 0x07, 0x07, 0x08, 0x08, 0x08, 0x09, 0x09, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x02, 0x03, 0x04, 0x05, 0x05, 0x06, 0x07, 0x08, 0x09, 
0x0E, 0x0F, 0x0F, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
0x02, 0x03, 0x03, 0x03, 0x03, 0x03, 0x04, 0x04, 0x04, 0x04, 0x05, 0x05, 0x05, 0x06, 0x06, 0x06, 
0x0B, 0x0B, 0x0C, 0x0C, 0x0D, 0x0D, 0x0E, 0x0E, 0x0F, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x02, 0x02, 0x03, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x03, 0x05, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 
0x07, 0x08, 0x0A, 0x0C, 0x0E, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
0x07, 0x07, 0x07, 0x08, 0x08, 0x08, 0x09, 0x09, 0x0A, 0x0A, 0x0B, 0x0B, 0x0C, 0x0C, 0x0D, 0x0D, 
0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 
0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0xF2, 0xF8, 
0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0xF2, 0xF4, 0xF6, 0xF8, 0xFB, 0xFE, 0x00, 0x00, 
0xF6, 0xF7, 0xF8, 0xFA, 0xFB, 0xFD, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x05, 0x07, 0x0A, 0x0D, 0x10, 0x10, 0x10, 0x10, 0x10, 
0xF2, 0xF2, 0xF3, 0xF3, 0xF3, 0xF4, 0xF4, 0xF4, 0xF5, 0xF5, 0xF6, 0xF6, 0xF7, 0xF7, 0xF8, 0xF8, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 
0x00, 0x00, 0x00, 0x00, 0xFF, 0xFC, 0xFA, 0xF8, 0xF5, 0xF3, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFD, 0xFB, 0xF9, 0xF7, 
0xF5, 0xF3, 0xF1, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
0x00, 0x00, 0x00, 0xFF, 0xFE, 0xFC, 0xFA, 0xF9, 0xF7, 0xF5, 0xF4, 0xF2, 0xF1, 0x10, 0x10, 0x10, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFE, 0xFC, 
0xFB, 0xF9, 0xF8, 0xF6, 0xF5, 0xF4, 0xF2, 0xF1, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0xFD, 0xFC, 0xFB, 0xF9, 0xF8, 0xF7, 
0xF6, 0xF5, 0xF4, 0xF2, 0xF1, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFE, 0xFD, 0xFC, 0xFB, 0xFA, 0xF9, 0xF8, 0xF7, 0xF6, 
0xF6, 0xF5, 0xF5, 0xF4, 0xF3, 0xF2, 0xF1, 0xF1, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
0xFF, 0xFF, 0xFE, 0xFE, 0xFD, 0xFD, 0xFC, 0xFC, 0xFB, 0xFB, 0xFA, 0xF9, 0xF9, 0xF8, 0xF8, 0xF7, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFE, 0xFE, 0xFD, 0xFC, 0xFB, 0xFA, 
0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0xF1, 0xF2, 
0xF5, 0xF6, 0xF7, 0xF8, 0xF8, 0xF9, 0xFA, 0xFB, 0xFC, 0xFD, 0xFE, 0xFF, 0xFF, 0x00, 0x00, 0x00, 
0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 
0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 
0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F, 0x10, 
0xF9, 0xF8, 0xF7, 0xF6, 0xF5, 0xF4, 0xF4, 0xF3, 0xF2, 0xF1, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0xF1, 0xF2, 0xF3, 0xF4, 0xF5, 
0xF9, 0xF9, 0xFA, 0xFB, 0xFC, 0xFC, 0xFD, 0xFD, 0xFE, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFE, 0xFD, 0xFC, 0xFB, 
0x00, 0x04, 0x06, 0x06, 0x06, 0x06, 0x07, 0x07, 0x07, 0x07, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 
0xFA, 0xF9, 0xF8, 0xF7, 0xF6, 0xF5, 0xF4, 0xF3, 0xF2, 0xF1, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
0x0C, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x08, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x08, 0x0C, 0x10, 0x10, 0x10, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x08, 0x0C, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
0x00, 0x00, 0x04, 0x08, 0x0C, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFE, 0xFC, 0xFB, 0xFA, 
0x00, 0x00, 0x00, 0xFF, 0xFE, 0xFC, 0xFB, 0xF9, 0xF7, 0xF6, 0xF4, 0xF2, 0x10, 0x10, 0x10, 0x10, 
0x00, 0x00, 0xFD, 0xFA, 0xF6, 0xF3, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFA, 0xF6, 0xF1, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFB, 0xF5, 0x10, 0x10, 0x10, 0x10, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0xF1, 0x10, 0x10, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF3, 0x10, 
0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0A, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x10, 0x10, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x09, 0x10, 0x10, 0x10, 0x10, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x09, 0x0E, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
0x00, 0x00, 0x02, 0x05, 0x08, 0x0C, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
0x0C, 0x0F, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x05, 0x07, 0x09, 
0x01, 0x02, 0x03, 0x05, 0x06, 0x07, 0x09, 0x0A, 0x0C, 0x0D, 0x0F, 0x10, 0x10, 0x10, 0x10, 0x10, 
0x01, 0x02, 0x03, 0x04, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F, 
0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
0x07, 0x07, 0x06, 0x06, 0x06, 0x05, 0x05, 0x05, 0x04, 0x04, 0x04, 0x04, 0x03, 0x03, 0x03, 0x03, 
0x10, 0x10, 0x0F, 0x0E, 0x0E, 0x0D, 0x0C, 0x0C, 0x0B, 0x0B, 0x0A, 0x0A, 0x09, 0x09, 0x08, 0x08, 
0x10, 0x0F, 0x0E, 0x0D, 0x0B, 0x0A, 0x09, 0x08, 0x07, 0x06, 0x05, 0x04, 0x04, 0x03, 0x02, 0x01, 
0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x0E, 0x0C, 0x0A, 0x08, 0x06, 0x05, 0x03, 0x02, 
0x10, 0x10, 0x10, 0x0C, 0x08, 0x05, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x10, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFC, 0xF9, 0xF6, 
0x10, 0x10, 0x10, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x10, 0x10, 0x10, 0x10, 0x07, 0x06, 0x05, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 
0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 
0xF2, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
0x00, 0xFA, 0xF1, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x02, 0x03, 0x03, 0x04, 0x05, 0x05, 
0x06, 0x07, 0x07, 0x08, 0x09, 0x09, 0x0A, 0x0B, 0x0B, 0x0C, 0x0D, 0x0D, 0x0E, 0x0F, 0x0F, 0x10, 
0xFE, 0xF2, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
0x00, 0x00, 0xF9, 0xF1, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
0x00, 0x00, 0x00, 0x00, 0xFB, 0xF4, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFB, 0xF6, 0xF2, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0xFB, 0xF7, 0xF4, 0xF1, 0x10, 
0xFB, 0xF9, 0xF6, 0xF4, 0xF2, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0xFD, 0xFB, 0xF9, 0xF8, 0xF7, 0xF5, 0xF4, 0xF2, 0xF1, 
0xFF, 0xFE, 0xFC, 0xFB, 0xF9, 0xF8, 0xF6, 0xF4, 0xF2, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0xFC, 0xFA, 0xF7, 0xF5, 0xF2, 
0xFF, 0xFC, 0xF9, 0xF5, 0xF2, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0xFA, 0xF5, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0xF5, 0x10, 0x10, 0x10, 0x10, 0x10, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xF7, 0x10, 0x10, 0x10, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0xF2, 0x10, 
0x10, 0x10, 0x10, 0x10, 0x10, 0xF2, 0xF5, 0xF9, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0xF8, 0xFA, 0xFB, 0xFD, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0xF1, 0xF2, 0xF3, 0xF4, 0xF5, 0xF6, 0xF7, 
0xFB, 0xFC, 0xFC, 0xFD, 0xFD, 0xFE, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF9, 0xF9, 0xF9, 0xF9, 0xFA, 0xFA, 0xFA, 0xFB, 0xFB, 
0xF5, 0xF5, 0xF5, 0xF5, 0xF5, 0xF5, 0xF5, 0xF5, 0xF5, 0xF5, 0xF5, 0xF5, 0xF5, 0xF5, 0xF5, 0xF5, 
0x10, 0xF2, 0xF3, 0xF3, 0xF4, 0xF4, 0xF4, 0xF4, 0xF5, 0xF5, 0xF5, 0xF5, 0xF5, 0xF5, 0xF5, 0xF5, 
0xF5, 0xF5, 0xF5, 0xF5, 0xF5, 0xF5, 0xF5, 0xF6, 0xF6, 0xF6, 0xF6, 0xF6, 0xF7, 0xF7, 0xF8, 0xF8, 
0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0xF2, 0xF3, 0xF5, 0xF7, 0xF9, 0xFD, 
0xF9, 0xF9, 0xFA, 0xFB, 0xFC, 0xFC, 0xFD, 0xFE, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 
0x0B, 0x0D, 0x0E, 0x0F, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
0x08, 0x08, 0x09, 0x09, 0x0A, 0x0A, 0x0B, 0x0B, 0x0C, 0x0C, 0x0D, 0x0D, 0x0E, 0x0E, 0x0F, 0x0F, 
0x00, 0x00, 0x01, 0x01, 0x02, 0x02, 0x03, 0x03, 0x04, 0x04, 0x05, 0x05, 0x06, 0x06, 0x07, 0x07, 
0x00, 0x00, 0x00, 0xF9, 0xF3, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
0x00, 0x00, 0x01, 0x01, 0x02, 0x02, 0x03, 0x03, 0x04, 0x04, 0x05, 0x06, 0x06, 0x07, 0x08, 0x09, 
0x00, 0xFD, 0xF9, 0xF7, 0xF5, 0xF3, 0xF2, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFE, 0xFD, 0xFC, 0xFC, 0xFB, 0xFA, 0xFA, 
0xF9, 0xF9, 0xF8, 0xF8, 0xF7, 0xF7, 0xF7, 0xF7, 0xF6, 0xF6, 0xF6, 0xF6, 0xF6, 0xF6, 0xF5, 0xF5, 
0xF5, 0xF5, 0xF5, 0xF5, 0xF5, 0xF5, 0xF5, 0xF5, 0xF5, 0xF5, 0xF5, 0xF5, 0xF5, 0xF4, 0xF4, 0xF3, 
0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 
0xFA, 0xF6, 0xF3, 0xF1, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
0x00, 0x00, 0x00, 0x00, 0xFF, 0xFE, 0xFC, 0xFB, 0xFA, 0xF9, 0xF8, 0xF7, 0xF6, 0xF6, 0xF5, 0xF4, 
0xF4, 0xF3, 0xF3, 0xF2, 0xF2, 0xF2, 0xF1, 0xF1, 0xF1, 0xF1, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
0xF9, 0xF4, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
0x00, 0x00, 0x00, 0xFE, 0xFB, 0xF9, 0xF8, 0xF6, 0xF4, 0xF3, 0xF2, 0xF1, 0x10, 0x10, 0x10, 0x10, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFE, 0xFD, 0xFD, 
0xFC, 0xFB, 0xFA, 0xF9, 0xF8, 0xF8, 0xF7, 0xF7, 0xF6, 0xF5, 0xF5, 0xF4, 0xF4, 0xF4, 0xF3, 0xF3, 
0xF2, 0xF2, 0xF2, 0xF2, 0xF1, 0xF1, 0xF1, 0xF1, 0xF1, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0xF5, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x10, 0xF2, 0xF3, 0xF5, 0xF7, 0xFA, 0xFD, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0xF3, 0xF4, 0xF4, 0xF5, 0xF5, 0xF6, 0xF7, 0xF7, 0xF8, 0xF9, 0xFA, 0xFB, 0xFC, 0xFD, 0xFE, 0xFF, 
0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0xF1, 0xF1, 0xF1, 0xF1, 0xF2, 0xF2, 0xF2, 0xF3, 0xF3, 
0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x10, 0x0F, 0x08, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x10, 0x10, 0x10, 0x10, 0x10, 0x0D, 0x0A, 0x08, 0x06, 0x04, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x0E, 0x0D, 0x0B, 0x0A, 
0x08, 0x07, 0x06, 0x05, 0x03, 0x02, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x0F, 0x0E, 0x0D, 0x0C, 0x0C, 0x0B, 0x0A, 0x09, 
0x08, 0x08, 0x07, 0x06, 0x06, 0x05, 0x04, 0x04, 0x03, 0x03, 0x02, 0x02, 0x01, 0x01, 0x00, 0x00, 
0x0F, 0x0F, 0x0E, 0x0E, 0x0E, 0x0D, 0x0D, 0x0D, 0x0C, 0x0C, 0x0C, 0x0C, 0x0B, 0x0B, 0x0B, 0x0B, 
0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 
0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFE, 0xFD, 0xFC, 0xFC, 0xFB, 0xFB, 0xFA, 0xFA, 0xF9, 0xF9, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0xFC, 0xFA, 0xF9, 0xF8, 0xF6, 0xF5, 0xF4, 
0xF3, 0xF2, 0xF1, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
0x0B, 0x0C, 0x0E, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
0x00, 0x04, 0x06, 0x08, 0x0A, 0x0C, 0x0E, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
0x00, 0xFB, 0xF9, 0xF7, 0xF6, 0xF5, 0xF4, 0xF3, 0xF3, 0xF2, 0xF2, 0xF1, 0xF1, 0xF1, 0xF1, 0xF1, 
0xFE, 0xFC, 0xFA, 0xF7, 0xF6, 0xF5, 0xF4, 0xF3, 0xF3, 0xF2, 0xF2, 0xF1, 0xF1, 0xF1, 0xF1, 0xF1, 
0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x10, 0x0E, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x10, 0x10, 0x10, 0x09, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x10, 0x10, 0x10, 0x10, 0x10, 0x0B, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x0B, 0x06, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x0E, 0x0B, 0x07, 0x04, 0x01, 
0x0E, 0x0B, 0x09, 0x06, 0x04, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x0E, 0x0C, 0x0A, 0x08, 0x07, 0x05, 0x04, 0x02, 0x01, 
0x0F, 0x0E, 0x0C, 0x0B, 0x09, 0x08, 0x07, 0x05, 0x03, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x0E, 0x0C, 0x0A, 0x07, 0x05, 
0x10, 0x0F, 0x0C, 0x09, 0x05, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x0E, 0x0A, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x0C, 0x05, 0x00, 0x00, 0x00, 0x00, 
0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x0F, 0x07, 0x00, 0x00, 
0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x0E, 0x02, 
0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x0C, 0x08, 0x05, 0x02, 0x00, 
0x0E, 0x0C, 0x0A, 0x08, 0x06, 0x05, 0x03, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x0F, 0x0E, 0x0D, 0x0B, 0x0A, 0x09, 0x08, 
0x07, 0x06, 0x05, 0x04, 0x04, 0x03, 0x02, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x0F, 0x0E, 0x0E, 0x0D, 0x0C, 0x0C, 
0x0B, 0x0B, 0x0A, 0x0A, 0x09, 0x09, 0x08, 0x08, 0x07, 0x07, 0x06, 0x06, 0x06, 0x05, 0x05, 0x05, 
0x04, 0x04, 0x04, 0x04, 0x03, 0x03, 0x03, 0x03, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x01, 
0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0xF9, 0xF5, 0xF2, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
0x00, 0x00, 0x00, 0xFF, 0xFD, 0xFB, 0xFA, 0xF8, 0xF7, 0xF6, 0xF5, 0xF4, 0xF3, 0xF2, 0xF1, 0x10, 
0xFF, 0xFF, 0xFE, 0xFD, 0xFD, 0xFC, 0xFC, 0xFB, 0xFB, 0xFB, 0xFA, 0xFA, 0xFA, 0xF9, 0xF9, 0xF9, 
0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x0F, 0x08, 0x04, 0x00, 0x00, 0x00, 0x00, 
0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x0D, 0x0A, 0x08, 
0x06, 0x04, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x10, 0x10, 0x10, 0x10, 0x0E, 0x0D, 0x0B, 0x0A, 0x08, 0x07, 0x06, 0x05, 0x03, 0x02, 0x01, 0x00, 
0x0F, 0x0E, 0x0D, 0x0C, 0x0C, 0x0B, 0x0A, 0x09, 0x08, 0x08, 0x07, 0x06, 0x06, 0x05, 0x04, 0x04, 
0x03, 0x03, 0x02, 0x02, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x0F, 0x0F, 0x0E, 0x0E, 0x0E, 0x0D, 0x0D, 0x0D, 
0x0C, 0x0C, 0x0C, 0x0C, 0x0B, 0x0B, 0x0B, 0x0B, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x09, 
0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 
0x00, 0xFD, 0xFA, 0xF7, 0xF5, 0xF3, 0xF2, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFE, 0xFD, 0xFC, 0xFB, 0xFA, 0xF9, 0xF8, 
0xF7, 0xF7, 0xF6, 0xF5, 0xF5, 0xF4, 0xF4, 0xF3, 0xF3, 0xF3, 0xF2, 0xF2, 0xF2, 0xF1, 0xF1, 0xF1, 
0x00, 0x00, 0x00, 0x00, 0x00, 0xFD, 0xF8, 0xF3, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0xFA, 0xF6, 0xF2, 0x10, 0x10, 0x10, 0x10, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0xFB, 0xF8, 0xF5, 
0x00, 0xFF, 0xFC, 0xF9, 0xF6, 0xF4, 0xF2, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
0x03, 0x04, 0x05, 0x07, 0x08, 0x09, 0x0B, 0x0C, 0x0D, 0x0F, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x04, 0x05, 0x07, 
0x08, 0x09, 0x0B, 0x0C, 0x0D, 0x0F, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x04, 0x05, 0x07, 0x08, 0x09, 0x0B, 0x0C, 
0x0D, 0x0F, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
0x00, 0x00, 0x00, 0x01, 0x03, 0x04, 0x05, 0x07, 0x08, 0x09, 0x0B, 0x0C, 0x0D, 0x0F, 0x10, 0x10, 
0x00, 0x00, 0x00, 0x00, 0x02, 0x04, 0x07, 0x0A, 0x0D, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
0x07, 0x08, 0x08, 0x09, 0x0A, 0x0A, 0x0B, 0x0C, 0x0C, 0x0D, 0x0E, 0x0E, 0x0F, 0x10, 0x10, 0x10, 
0x00, 0x01, 0x02, 0x04, 0x06, 0x07, 0x09, 0x0A, 0x0C, 0x0E, 0x0F, 0x10, 0x10, 0x10, 0x10, 0x10, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x06, 0x09, 0x0C, 0x0F, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
0x00, 0x00, 0x03, 0x09, 0x0F, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
0x00, 0x0A, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xFE, 0xFE, 0xFE, 0xFD, 0xFD, 0xFD, 0xFD, 0xFC, 0xFC, 
0xFC, 0xFC, 0xFB, 0xFB, 0xFB, 0xFB, 0xFA, 0xFA, 0xFA, 0xFA, 0xF9, 0xF9, 0xF9, 0xF9, 0xF8, 0xF8, 
0xF8, 0xF8, 0xF7, 0xF7, 0xF7, 0xF7, 0xF6, 0xF6, 0xF6, 0xF6, 0xF5, 0xF5, 0xF5, 0xF5, 0xF4, 0xF4, 
0xF4, 0xF4, 0xF3, 0xF3, 0xF3, 0xF3, 0xF2, 0xF2, 0xF2, 0xF2, 0xF1, 0xF1, 0xF1, 0xF1, 0x10, 0x10, 
0x0A, 0x0C, 0x0D, 0x0E, 0x0F, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
};
