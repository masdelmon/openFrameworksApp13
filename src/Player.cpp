#include "Player.h"

void Player::setup(ofImage * _img)
{
	lives = 3;

	speed = 5;

	img = _img;
	width = height = img->getWidth();

	pos.x = ofGetWidth() / 2;
	pos.y = ofGetHeight() - height * 2;

	/*
	img = _img;

	width = img->getWidth();
	height = img->getHeight();

	speed = 0;

	pos.x = ofGetWidth();  //  ofRandom(0, ofGetWidth());      // give some random positioning
	pos.y = ofGetHeight(); // ofRandom(0, ofGetHeight());

	*/

}

void Player::update()
{


	/*
	if (is_left_pressed) 
	{
		pos.x -= 10;
	}

	if (is_right_pressed) 
	{
		pos.x += 10;
	}
	if (is_up_pressed)
	{
		pos.y -= 10;
	}
	if (is_down_pressed)
	{
		pos.y += 10;
	}
	*/

	calculate_movement();
	
}

void Player::draw()
{
	//img->draw(pos.x, pos.y);
	img->draw(pos.x - width / 2, pos.y - width / 2);

}

void Player::calculate_movement() {
	if (is_left_pressed && pos.x > 0 + width / 2) {
		pos.x -= speed;
	}
	if (is_right_pressed && pos.x < ofGetWidth() - width / 2) {
		pos.x += speed;
	}
	if (is_up_pressed && pos.y > 0 + height / 2) {
		pos.y -= speed;
	}
	if (is_down_pressed && pos.y < ofGetHeight() - height / 2) {
		pos.y += speed;
	}
}
