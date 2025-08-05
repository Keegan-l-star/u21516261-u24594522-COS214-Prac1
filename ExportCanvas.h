#ifndef EXPORTCANVAS_H
#define EXPORTCANVAS_H
#include <iostream>
#include "Canvas.h"

class ExportCanvas {
    private:
        Canvas* canvas;
        void prepareCanvas();//invariant step
        void renderCanvas();//invariant step
        void virtual saveToFile()=0;//variant step
    public:
        ExportCanvas(Canvas* exportDis);
        ~ExportCanvas();
        void exportToFile(); //Template method operation and the invariant step
};
#endif 