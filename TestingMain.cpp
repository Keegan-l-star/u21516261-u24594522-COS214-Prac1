#include "PDFExporter.h"
#include "PNGExporter.h"
#include "Canvas.h"


int main()
{
    // =====================================================================================================================================================================
    // make and store a green rectangle
    std::string type = "Rectangle";
    int length = 9;
    int width = 10;
    int x = 20;
    int y = 32;
    std::string colour = "Green";

    std::cout << "Creating canvas..." << std::endl;
    Canvas *mspaint = new Canvas();

    std::cout << "Creating " << type << "..." << std::endl;
    mspaint->addShape(type);
    std::cout << "Changing length to " << length << " and width to " << width << "..." << std::endl;
    mspaint->changeLength(length);
    mspaint->changeWidth(width);
    std::cout << "Changing x co-ordinate to " << x << " and y co-ordinate to " << y << "..." << std::endl;
    mspaint->changePosition(x, y);
    std::cout<<"Changing colour to "<<colour<<"..."<<std::endl;
    mspaint->changeColour(colour);
    std::cout<<"Creating and storing a memento of "<<type<<" canvas element..."<<std::endl;
    Memento *_memento_rec = mspaint->captureCurrent();
    // mspaint->addToCanvas();
    // =====================================================================================================================================================================


    // =====================================================================================================================================================================
    // clear canvas, make a red square and store it
    type = "Square";
    length = 15;
    width = 15;
    x = 30;
    y = 29;
    colour = "Red";

    std::cout << "Clearing canvas..." << std::endl;
    mspaint->clearCanvas();
    std::cout << "Creating " << type << "..." << std::endl;
    mspaint->addShape(type);
    std::cout << "Changing length to " << length << " and width to " << width << "..." << std::endl;
    mspaint->changeLength(length);
    mspaint->changeWidth(width);
    std::cout << "Changing x co-ordinate to " << x << " and y co-ordinate to " << y << "..." << std::endl;
    mspaint->changePosition(x, y);
    std::cout<<"Changing colour to "<<colour<<"..."<<std::endl;
    mspaint->changeColour(colour);
    std::cout<<"Creating and storing a memento of "<<type<<" canvas element..."<<std::endl;
    Memento *_memento_square = mspaint->captureCurrent();
    // =====================================================================================================================================================================
    
    
    // =====================================================================================================================================================================
    // clear canvas, make a white textbox and store it
    type = "Textbox";
    length = 17;
    width = 19;
    x = 7;
    y = 10;
    colour = "White";

    std::cout << "Clearing canvas..." << std::endl;
    mspaint->clearCanvas();
    std::cout << "Creating " << type << "..." << std::endl;
    mspaint->addShape(type);
    std::cout << "Changing length to " << length << " and width to " << width << "..." << std::endl;
    mspaint->changeLength(length);
    mspaint->changeWidth(width);
    std::cout << "Changing x co-ordinate to " << x << " and y co-ordinate to " << y << "..." << std::endl;
    mspaint->changePosition(x, y);
    std::cout<<"Changing colour to "<<colour<<"..."<<std::endl;
    mspaint->changeColour(colour);
    std::cout<<"Creating and storing a memento of "<<type<<" canvas element..."<<std::endl;
    Memento *_memento_txt = mspaint->captureCurrent();
    // =====================================================================================================================================================================
    //Export to PDF and PNG

    std::cout<<"Attempting to export to PDF..."<<std::endl;
    mspaint->PDFCanvas();
    std::cout<<"Attempting to export to PNG..."<<std::endl;
    mspaint->PNGCanvas();
    // =====================================================================================================================================================================

    return 0;
}
