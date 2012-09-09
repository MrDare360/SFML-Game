#include "Player.h"
#include <SFML/Graphics.hpp>

Player::Player() {

	Player::playerWidth = 100.0f;
	Player::playerHeight = 100.0f;

	Player::setup();

}

void Player::setup() {

	Player::setPlayerX(100.0f);
	Player::setPlayerY(100.0f);

}

void Player::update() {

	Player::up = sf::Keyboard::isKeyPressed(sf::Keyboard::W);
	Player::down = sf::Keyboard::isKeyPressed(sf::Keyboard::S);
	Player::right = sf::Keyboard::isKeyPressed(sf::Keyboard::D);
	Player::left = sf::Keyboard::isKeyPressed(sf::Keyboard::S);

	if(up==true && down==false) {
		Player::setPlayerY(Player::getPlayerY() + 1.0f);
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

