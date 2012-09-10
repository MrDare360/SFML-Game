#ifndef ENEMY_H
	#define ENEMY_H

class Enemy {

	private:
		float enemyX;
		float enemyY;
		float enemyWidth;
		float enemyHeight;
		float enemySpeed;

	public:
		Enemy();
		float getEnemyX() {return enemyX;}
		float getEnemyY() {return enemyY;}
		float getEnemyWidth() {return enemyWidth;}
		float getEnemyHeight() {return enemyHeight;}
		void setEnemyX(int xx) {enemyX = xx;}
		void setEnemyY(int yy) {enemyY = yy;}
		void update();
		void draw();
		void setup();
};

#endif