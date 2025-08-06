#include "RectangleFactory.h"

Shape* RectangleFactory::createShape(){
    return new Rectangle();
}

void RectangleFactory::toString(){
    //not sure at the moment
}