#include <SFML/Graphics.hpp>
#include <SFML/OpenGL.hpp>
#include <SFML/System.hpp>
#include <iostream>
#include "Player.h"
#include "Enemy.h"

using namespace std;

const int screenWidth = 800;
const int screenHeight = 600;
const int screenBPP = 32;

sf::RenderWindow display;
sf::Clock c;
float timeElapsed = 0;

int main(int argc, char** argv) {

	display.create(sf::VideoMode(screenWidth, screenHeight, screenBPP), "SFML Window", !sf::Style::Resize | sf::Style::Close);
	display.setFramerateLimit(60);


	glEnable(GL_TEXTURE_2D);

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0, screenWidth, 0, screenHeight, 1, -1);
	glMatrixMode(GL_MODELVIEW);

	Player player;
	Enemy enemy;

	while(display.isOpen()) {

		sf::Event event;

		while(display.pollEvent(event)) {
			switch(event.type)
				case sf::Event::Closed:
					display.close();
				break;
		}

		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

		//Draw
		
		enemy.update();
		enemy.draw();

		player.update();
		player.draw();

		display.display();

	}

	sf::Time t = c.getElapsedTime();

	timeElapsed = t.asSeconds();

	cout << timeElapsed << endl;

	return 0;
}

void destroyEnemy(Enemy *e) {
	delete &e;
}

void destroyPlayer(Player *p) {
	delete &p;
}