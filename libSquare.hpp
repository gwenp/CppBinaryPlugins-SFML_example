#ifndef SQUARE_H_
#define SQUARE_H_

#include <iostream>
#include "Shape.hpp"

using namespace std;

class Square: public Shape
{
 public:
    virtual void Draw(sf::RenderWindow* app);
};


#endif /* SQUARE_H_ */