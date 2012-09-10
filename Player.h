#ifndef PLAYER_H
	#define PLAYER_H

#include <SFML/OpenGL.hpp>

class Player {

	private:
		float playerX;
		float playerY;
		float playerWidth;
		float playerHeight;
		float speed;
		bool up, down, right, left;
		bool sprint;
	
	public:
		Player();
		float getPlayerX() {return playerX;}
		float getPlayerY() {return playerY;}
		float getPlayerWidth() {return playerWidth;}
		float getPlayerHeight() {return playerHeight;}
		void setPlayerX(int xx) {playerX = xx;}
		void setPlayerY(int yy) {playerY = yy;}
		void draw();
		void update();
		void setup();
};

#endif