#pragma once
#include "Board.hpp"

#include <SFML/Graphics.hpp>
#include <memory>

class Game{
private:
	sf::RenderWindow window;
	std::shared_ptr<Board> board = nullptr;

public:
	Game();
	~Game() = default;
};

