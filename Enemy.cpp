#include "Enemy.h"
#include "Player.h"
#include <SFML/Graphics.hpp>

Enemy::Enemy() {
	Enemy::enemyWidth = 100.0f;
	Enemy::enemyHeight = 100.0f;

	Enemy::enemySpeed = 4.0f;

	Enemy::setup();
}

void Enemy::setup() {
	Enemy::setEnemyX(400.0f);
	Enemy::setEnemyY(100.0f);
}

void Enemy::update() {

	

}

void Enemy::draw() {

	glColor3f(1, 1, 0);

	glBegin(GL_QUADS);
		glVertex2f(Enemy::getEnemyX(), Enemy::getEnemyY());
		glVertex2f(Enemy::getEnemyX() + Enemy::getEnemyWidth(), Enemy::getEnemyY());
		glVertex2f(Enemy::getEnemyX() + Enemy::getEnemyWidth(), Enemy::getEnemyY() + Enemy::getEnemyHeight());
		glVertex2f(Enemy::getEnemyX(), Enemy::getEnemyY() + Enemy::getEnemyHeight());
	glEnd();
}