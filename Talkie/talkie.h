// Talkie library
// Copyright 2011 Peter Knight
// This code is released under GPLv2 license.

#ifndef _Talkie_h_
#define _Talkie_h_

#define F_CPU 16000000UL

#include <inttypes.h>
#include <avr/io.h>

void say(uint8_t* address);
uint8_t* ptrAddr;
uint8_t ptrBit;

#endif
