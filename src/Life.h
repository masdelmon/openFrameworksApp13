#pragma once

#ifndef _LIFE  // if this class hasn't been defined, the program can define it
#define _LIFE  // by using this if statement you prevent the class to be called more than once which would confuse the compiler
#include "ofMain.h" // we need to include this to have a reference to the openFrameworks framework


class Life
{
	public:
		ofPoint pos;
		float speed;
		float width;

		ofImage * img;

		void setup(ofImage * _img);
		void update();
		void draw();

};

#endif

