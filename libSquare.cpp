#include "libSquare.hpp"

void Square::Draw(sf::RenderWindow* app)
{
	sf::Shape Rect = sf::Shape::Rectangle(20, 20, 200, 200, sf::Color(100,200,200));
	app->Draw(Rect);
}

extern "C"
{
    Shape *make_shape()
    {
  		return new Square();
    }
}
