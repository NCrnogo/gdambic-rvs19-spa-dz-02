#include <SFML/Graphics.hpp>
#include <iostream>
#include "Gofl.h"

int main()
{
	sf::RenderWindow window(sf::VideoMode(900, 900), "Hello, SFML world!");
	window.setFramerateLimit(60);
	Gofl gofl(&window);

	std::cout << "Za ubrzanje stisnite strelicu dolje, a za usporenje strelicu gore";

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();
		gofl.draw();
		window.display();
	}

	return 0;
}