#include "Enemy.h"
#include "Player.h"
#include <SFML/Graphics.hpp>
#include <stdio.h>

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

	if(Player::getPlayerX() >= Enemy::getEnemyX() && Player::getPlayerWidth() <= Enemy::getEnemyWidth()) {
		if(Player::getPlayerY() >= Enemy::getEnemyY() && Player::getPlayerHeight() <= Enemy::getEnemyHeight()) {
			printf("Collision detected at %f , %f with width of %f and height of %f", Enemy::getEnemyX(), Enemy::getEnemyY(), Enemy::getEnemyWidth(), Enemy::getEnemyHeight());
		}
	}

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