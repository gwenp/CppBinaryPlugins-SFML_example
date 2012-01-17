#ifndef CIRCLE_H_
#define CIRCLE_H_

#include <iostream>
#include "Shape.hpp"

using namespace std;

class Circle: public Shape
{
 public:
    virtual void Draw(sf::RenderWindow* app);
};


#endif /* CIRCLE_H_ */