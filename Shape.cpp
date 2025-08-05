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

bool Shape::changeLength(int length) {
    if (length < 0) return false; // Invalid length
    this->length = length;
    return true;
}

bool Shape::changeWidth(int width) {
    if (width < 0) return false; // Invalid width
    this->width = width;
    return true;
}

bool Shape::changeColour(std::string colour) {
    if (colour.empty()) return false; // Invalid colour
    this->colour = colour;
    return true;
}

bool Shape::changePosition(int position_x, int position_y) {
    this->position_x = position_x;
    this->position_y = position_y;
    return true;
}

