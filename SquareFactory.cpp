#include "SquareFactory.h"

SquareFactory::SquareFactory(/* args */)
{
}

SquareFactory::~SquareFactory()
{
}
Shape *SquareFactory::createShape()
{
    return new Square();
}
void SquareFactory::toString()
{
}