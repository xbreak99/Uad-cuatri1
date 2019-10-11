#include<SFML/Graphics.hpp>
#include "Circula.h"
#include "Render.h"
int main()
{
	
	Render render;
	render.run();
	
	
	/*float *mx, *my;
	float clicx, clicy;

	sf::RenderWindow pantalla(sf::VideoMode(600, 800), "circulos");
	sf::CircleShape circulo;
	circulo.setRadius(10.f);
	circulo.setFillColor(sf::Color::Magenta);
	sf::Event eventos;

	while (pantalla.isOpen())
	{
			while (pantalla.pollEvent(eventos))
			{
				if (eventos.type == sf::Event::Closed) {

					pantalla.close();

				}
				if (eventos.type == sf::Event::MouseButtonReleased)
				{
					if (eventos.mouseButton.button == sf::Mouse::Left)
					{
						clicx = sf::Mouse::getPosition(pantalla).x;
						mx = &clicx;
						
						clicy = sf::Mouse::getPosition(pantalla).y;
						
						my = &clicy;

						circulo.setPosition(*mx, *my);
						pantalla.draw(circulo);
	

					}

				}

		
			}

		
		pantalla.display();

	}
		
	
	*/
	return 0;
}
