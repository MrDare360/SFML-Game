#ifndef PLAYER_H
	#define PLAYER_H

#include <SFML/OpenGL.hpp>

class Player {

	private:
		static float playerX;
		static float playerY;
		static float playerWidth;
		static float playerHeight;
		static float speed;
		bool up, down, right, left;
		bool sprint;
	
	public:
		Player();
		static float getPlayerX() {return playerX;}
		static float getPlayerY() {return playerY;}
		static float getPlayerWidth() {return playerWidth;}
		static float getPlayerHeight() {return playerHeight;}
		void setPlayerX(int xx) {playerX = xx;}
		void setPlayerY(int yy) {playerY = yy;}
		void draw();
		void update();
		void setup();
};

#endif