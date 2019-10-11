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
	int i = 0;
	sf::Event evento;
	sf::RenderWindow window;
	sf::CircleShape circulo;
	sf::RectangleShape linea;
	float mx,my,xm,ym;
	float mitadx, mitady, pendiente, dife_x, dife_y;
};

