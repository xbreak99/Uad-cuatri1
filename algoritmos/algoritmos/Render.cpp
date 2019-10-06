#include "Render.h"
#include <time.h>


Render::Render():window(sf::VideoMode(600,800),"ALGORITMOS"),circulo()
{

	

		srand(time(NULL));
		int num, num2;
		num = 1 + rand() % (770 - 1);

		num2 = 1 + rand() % (570 - 1);
		circulo.setRadius(10.f);

		circulo.setPosition(num2, num);

		circulo.setFillColor(sf::Color::White);

	
	

}


Render::~Render()
{
	
}

void Render::run()
{

	while (window.isOpen())
	{
		eventos();
		updates();
		
	render();
		
		
	}
}

void Render::eventos()
{
	sf::Event eventos;
	while (window.pollEvent(eventos))
	{
		if (eventos.type == sf::Event::Closed) {
		
			window.close();
		}
	}
}

void Render::updates()
{

}

void Render::render()
{
	window.clear();
	window.draw(circulo);
	window.display();
}

	
	
