#include "Player.h"
#include <SFML/Graphics.hpp>

Player::Player() {

	playerWidth = 100.0f;
	playerHeight = 100.0f;
	speed = 6.0f;

	setup();

}

void Player::setup() {

	Player::setPlayerX(100.0f);
	Player::setPlayerY(100.0f);

}

void Player::update() {

	Player::up = sf::Keyboard::isKeyPressed(sf::Keyboard::W);
	Player::down = sf::Keyboard::isKeyPressed(sf::Keyboard::S);
	Player::right = sf::Keyboard::isKeyPressed(sf::Keyboard::D);
	Player::left = sf::Keyboard::isKeyPressed(sf::Keyboard::A);
	Player::sprint = sf::Keyboard::isKeyPressed(sf::Keyboard::LShift);

	if(up==true && down==false) {
		Player::setPlayerY(Player::getPlayerY() + Player::speed);
	}
	if(up==false && down==true) {
		Player::setPlayerY(Player::getPlayerY() - Player::speed);
	}
	if(left==true && right==false) {
		Player::setPlayerX(Player::getPlayerX() - Player::speed);
	}
	if(left==false && right==true) {
		Player::setPlayerX(Player::getPlayerX() + Player::speed);
	}
	if(sprint==true) {
		Player::speed = 10.0f;
	} else {
		Player::speed = 6.0f;
	}

}

void Player::draw() {

	glBegin(GL_QUADS);
		glColor3f(0, 0, 0);
		glVertex2f(Player::getPlayerX(), Player::getPlayerY());
		glColor3f(1, 0, 0);
		glVertex2f(Player::getPlayerX() + Player::getPlayerWidth(), Player::getPlayerY());
		glColor3f(1, 1, 0);
		glVertex2f(Player::getPlayerX() + Player::getPlayerWidth(), Player::getPlayerY() + Player::getPlayerHeight());
		glColor3f(1, 1, 1);
		glVertex2f(Player::getPlayerX(), Player::getPlayerY() + Player::getPlayerHeight());
	glEnd();

}