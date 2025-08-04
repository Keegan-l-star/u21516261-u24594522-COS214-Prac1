#ifndef SHAPEFACTORY_H
#define SHAPEFACTORY_H

#include "Shape.h"
class Shape;

class ShapeFactory
{
protected:
    virtual Shape *createShape() = 0;
    virtual void toString() = 0;

public:
    ShapeFactory();
    virtual ~ShapeFactory();
};

#endif


