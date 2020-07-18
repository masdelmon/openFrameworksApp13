#pragma once

#ifndef _BULLET      // if this class hasn't been defined, the program can define it
#define _BULLET      // by using this if statement you prevent the class to be called more than once which would confuse the compiler
#include "ofMain.h"  // we need to include this to have a reference to the openFrameworks framework

class Bullet
{
	public:
		ofPoint pos;

		float speed;
		float width;

		bool from_player;

		ofImage * img;


		void setup(bool f_p, ofPoint p, float s, ofImage * bullet_image);
		void update();
		void draw();

};

#endif

