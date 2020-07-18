#pragma once

#include "ofMain.h"
#include "./Ball.h"
#include "./Player.h"
#include "./Bullet.h"
#include "./Enemy.h"
#include "./LevelController.h"
#include "./Life.h"

class ofApp : public ofBaseApp
{
	public:

		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);

		void update_bonuses();

		void update_bullets();
		void check_bullet_collisions();
		
		void draw_score();
		void draw_lives();


	private:

		ofTrueTypeFont score_font;
		ofSoundPlayer  sound;
		ofSoundPlayer  shoot;

		string game_state;
		int score;

		Ball   mc;
		Player player_1;

		LevelController level_controller;

		ofImage player_image;
		ofImage enemy_image;
		ofImage enemy_bullet_image;
		ofImage player_bullet_image;
		ofImage life_image;

		ofImage start_screen;
		ofImage end_screen;

		vector<Bullet> bullets;
		vector<Enemy>  enemies;
		vector<Life> bonuses;

		float max_enemy_amplitude;
		float max_enemy_shoot_interval;

};
