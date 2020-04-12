#pragma once
#include <SFML/Graphics.hpp>
class Gofl
{
public:
	Gofl(sf::RenderWindow* window);
	void draw();
private:
	void text();
	void pickColor();
	void Change();
	void drawBoard();
	sf::RenderWindow* window;
	sf::Clock frameClock;
	int color[40][40];
	bool passed = true;
};

