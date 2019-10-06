#pragma once
#include<SFML/Graphics.hpp>


class Render
{
public:
	Render();
	~Render();
	void run();
private:
	void eventos();
	void updates();
	void render();



private:
	sf::RenderWindow window;
	sf::CircleShape circulo;
};

