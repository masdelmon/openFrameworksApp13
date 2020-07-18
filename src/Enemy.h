#pragma once

#ifndef _ENEMY // if this class hasn't been defined, the program can define it
#define _ENEMY // by using this if statement you prevent the class to be called more than once which would confuse the compiler
#include "ofMain.h" // we need to include this to have a reference to the openFrameworks framework

class Enemy 
{
	public:
		ofPoint pos;
		ofImage * img;

		float speed;
		float amplitude;
		float width;

		float start_shoot;
		float shoot_interval;

		void setup(float max_enemy_amplitude, float max_enemy_shoot_interval, ofImage * enemy_image);

		void update();
		void draw();
		bool time_to_shoot();
	
};

#endif

