#pragma once

#include "Tile.hpp"

#include <vector>
#include <memory>

class Board : public sf::Drawable{
private:
	void creatBoard();
	void draw(sf::RenderTarget& target, sf::RenderStates states) const override {
		for (int i = 0; i < listOfTiles.size(); i++) {
			target.draw(*listOfTiles[i], states);
		}

		target.draw(*player, states);
		target.draw(*ball, states);
	}

public:
	std::vector<std::shared_ptr<Tile>> listOfTiles;

	std::shared_ptr<sf::RectangleShape> player;
	std::shared_ptr<sf::CircleShape> ball;

	Board();
	~Board() = default;
};

