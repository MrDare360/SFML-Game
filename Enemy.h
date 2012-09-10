#ifndef ENEMY_H
	#define ENEMY_H

class Enemy {

	private:
		static float enemyX;
		static float enemyY;
		static float enemyWidth;
		static float enemyHeight;
		static float enemySpeed;

	public:
		Enemy();
		static float getEnemyX() {return enemyX;}
		static float getEnemyY() {return enemyY;}
		static float getEnemyWidth() {return enemyWidth;}
		static float getEnemyHeight() {return enemyHeight;}
		static void setEnemyX(int xx) {enemyX = xx;}
		static void setEnemyY(int yy) {enemyY = yy;}
		static void update();
		static void draw();
		static void setup();
};

#endif