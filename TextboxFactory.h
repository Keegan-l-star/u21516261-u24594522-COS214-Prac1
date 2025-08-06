#ifndef TEXTBOXFACTORY_H
#define TEXTBOXFACTORY_H

#include "ShapeFactory.h"
#include "Textbox.h"

class TextboxFactory : public ShapeFactory
{
public:
    TextboxFactory(/* args */);
    ~TextboxFactory();
    Shape* createShape();
    void toString();

};


#endif