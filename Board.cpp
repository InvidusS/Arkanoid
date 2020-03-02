#include "Board.hpp"
#include "Tile.hpp"

#include <SFML/Graphics.hpp>

Board::Board(){
	creatBoard();
}

void Board::creatBoard() {
	float cordX = 25.0f;
	float cordY = 25.0f;
	int number = 1;

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 7; j++) {
			auto tile = std::make_shared<sf::RectangleShape>(sf::Vector2f(30.0f, 10.0f));
			tile->setFillColor(sf::Color::Red);
			tile->setPosition(cordX, cordY);

			listOfTiles.push_back(std::make_shared<Tile>(number++, tile));
			cordX += 35;
		}
		cordX = 25.0f;
		cordY += 15.0f;
	}

	player = std::make_shared<sf::RectangleShape>(sf::Vector2f(50.0f, 10.0f));
	player->setFillColor(sf::Color::Blue);
	player->setPosition(120.0f, 200.0f);

	ball = std::make_shared<sf::CircleShape>(5);
	ball->setFillColor(sf::Color::Cyan);
	ball->setPosition(140.0f, 190.0f);
}