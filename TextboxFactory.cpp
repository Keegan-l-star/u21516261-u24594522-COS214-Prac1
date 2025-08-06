#include "TextboxFactory.h"

Shape* TextboxFactory::createShape(){
    return new TextBox();
}
void TextboxFactory::toString(){

}
