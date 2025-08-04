#include "Shape.h"

Shape::Shape(int length,int width, std::string colour, int position_x, int position_y){
    this->length = length;
    this->width = width;
    this->colour = colour;
    this->position_x = position_x;
    this->position_y = position_y;
}

Shape::Shape(const Shape& other) {
    this->length = other.length;
    this->width = other.width;
    this->colour = other.colour;
    this->position_x = other.position_x;
    this->position_y = other.position_y;
    return;
}