#pragma once

#ifndef _LEVELCONTROLLER      // if this class hasn't been defined, the program can define it
#define _LEVELCONTROLLER      // by using this if statement you prevent the class to be called more than once which would confuse the compiler
#include "ofMain.h"           // we need to include this to have a reference to the openFrameworks framework


class LevelController
{
	public:
		float start_time;
		float interval_time;

		void setup(float e);
		bool should_spawn();

};


#endif