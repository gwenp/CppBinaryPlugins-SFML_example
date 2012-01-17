#ifndef SHAPE_H_
#define SHAPE_H_

#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

using namespace std;

class Shape
{
 public:
    virtual void Draw(sf::RenderWindow* app);
};

typedef Shape *(*maker_shape)();

#endif /* SHAPE_H_ */