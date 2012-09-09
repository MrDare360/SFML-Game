#include <SFML/Graphics.hpp>
#include <SFML/OpenGL.hpp>
#include "Player.h"

const int screenWidth = 800;
const int screenHeight = 600;
const int screenBPP = 32;

sf::RenderWindow display;

int main(int argc, char** argv) {

	display.create(sf::VideoMode(screenWidth, screenHeight, screenBPP), "SFML Window", !sf::Style::Resize | sf::Style::Close);

	glEnable(GL_TEXTURE_2D);

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0, screenWidth, 0, screenHeight, 1, -1);
	glMatrixMode(GL_MODELVIEW);

	Player player;



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
		
		player.update();
		player.draw();

		display.display();

	}

	return 0;
}