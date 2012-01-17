#include "libCircle.hpp"

void Circle::Draw(sf::RenderWindow* app)
{
	sf::Shape Circle = sf::Shape::Circle(110, 110, 90, sf::Color(100,200,0));
	app->Draw(Circle);
}

extern "C"
{
    Shape *make_shape()
    {
  		return new Circle();
    }
}
