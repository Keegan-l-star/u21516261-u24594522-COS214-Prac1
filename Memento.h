#ifndef MEMENTO_H
#define MEMENTO_H

#include "Shape.h"

class Memento {
    friend class Canvas; // Allow Canvas to access private members
    private:
        Shape* shapes;
        Shape* getShapes();
    public:
        Memento(Shape* shapes);
        ~Memento();
};

#endif // MEMENTO_H