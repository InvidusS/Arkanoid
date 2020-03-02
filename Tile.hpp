#pragma once

#include <SFML/Graphics.hpp>
#include <memory>

class Tile : public sf::Drawable {
private:
	int number;

	std::shared_ptr<sf::RectangleShape> tile;

public:
	Tile(int number, std::shared_ptr<sf::RectangleShape> tile);
	~Tile() = default;

	void draw(sf::RenderTarget& target, sf::RenderStates states) const override {
		target.draw(*tile, states);
	}
};

