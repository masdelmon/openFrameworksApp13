#pragma once

#ifndef _PLAYER // if this class hasn't been defined, the program can define it
#define _PLAYER // by using this if statement you prevent the class to be called more than once which would confuse the compiler
#include "ofMain.h" // we need to include this to have a reference to the openFrameworks framework


class Player 
{
	public:
		ofPoint pos;
		ofImage *img;

		float width, height, speed;

		int lives;

		bool is_left_pressed, is_right_pressed, is_down_pressed, is_up_pressed;

		void setup(ofImage * _img);

		void update();
		void draw();

		void calculate_movement();
		bool check_can_shoot();
	
};

#endif

