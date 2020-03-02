#include "Game.hpp"
#include "Board.hpp"

Game::Game() {
	window.create(sf::VideoMode(290, 220), "Arkanoid", sf::Style::Titlebar);

	board = std::make_shared<Board>();

	while (window.isOpen()) {
		window.clear();

		sf::Event evt;

		while (window.pollEvent(evt)) {
			switch (evt.type) {
			case sf::Event::KeyPressed:
				switch (evt.key.code) {
				case sf::Keyboard::A:
					board->player->move(-5.0f, 0.0f);
					break;
				case sf::Keyboard::D:
					board->player->move(5.0f, 0.0f);
					break;
				case sf::Keyboard::Escape:
					window.close();
					break;
				}
			}
		}

		window.draw(*board);
		window.display();
	}
}


