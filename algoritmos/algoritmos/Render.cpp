#include "Render.h"
#include <time.h>


Render::Render():window(sf::VideoMode(600,800),"ALGORITMOS"),circulo(),linea()
{
	
	circulo.setRadius(10.f);
	circulo.setFillColor(sf::Color::White);
	linea.setSize(sf::Vector2f(10, 200));
	linea.setOutlineColor(sf::Color::Red);
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
	
	while (window.pollEvent(evento))
	{
		if (evento.type == sf::Event::Closed) {
		
			window.close();

		}
		
	}
}

void Render::updates()
{
	

	float d2,distancia,x2=100,y2=100;
	circulo.setPosition(x2,y2);
	window.draw(circulo);

	//la distancia
	distancia = sqrt(pow(mx - my,2) + pow(my-y2,2));
	//la mitad de la recta
	xm = (mx + x2) / 2;
	ym = (my + x2) / 2;
	

	linea.setPosition(xm,ym);
	
	//saco la mitad del rectangulo o el centro
	mitadx = -distancia / 2;
	mitady = -10 / 2;
	//pendiente = (mx*x2) + (my*y2) / (sqrt(pow(mx, 2) + pow(x2, 2))) *( sqrt(pow(my, 2) + pow(y2, 2)));
	
	dife_x = x2 - mx;
	dife_y = y2 - my;
	//pendiente = (atan (dife_y/dife_x))*10;

	linea.setSize(sf::Vector2f(distancia,5));
	
	//linea.setRotation(30.f);
	linea.move(mitadx, mitady);
	
	window.draw(linea);
}
void Render::render()
{


	if (evento.type == sf::Event::MouseButtonReleased) {


		 mx = sf::Mouse::getPosition(window).x;
		 my = sf::Mouse::getPosition(window).y;


		circulo.setPosition(mx, my);		
		window.draw(circulo);
	



	}
	window.display();
	
	
}

	
	
