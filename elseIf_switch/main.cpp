//Obsidian 28 09 20203
#include <iostream>

 // Toosl
const int pen{10};
const int marker{20};
const int eraser {30};
const int rectangle {40};
const int circle {50};
const int ellipse {60};


int main(){

    //Else if
    /*int tool {circle};
     if (tool == pen) {
        std::cout << "Active tool is pen" << std::endl;
        //Do the actual painting
    }
    else if (tool == marker) {
        std::cout << "Active tool is Marker" << std::endl;
    }
    else if (tool ==eraser) {
        std::cout << "Active tool is Eraser" << std::endl;
    }
    else if (tool == rectangle) {
        std::cout << "Active tool is Rectangle" << std::endl;
    }
    else if (tool == circle) {
        std::cout << "Active tool is Circle" << std::endl;
    }
    else if (tool == ellipse) {
        std::cout << "Active tool is Ellipse" << std::endl;
    }

    std::cout << "Moving on" << std::endl;


    std::cout<<std::endl;*/



    int tool {pen};
    switch (tool)
    {
        // case pen, marker y eraser agrupados en uno solo.
    case pen:
    case marker:
    case eraser: {
        std::cout<<"herramientas para dibujar figuras"<<std::endl;
    }break;

    case rectangle: {
        std::cout<<"active tool is recangle"<<std::endl;
        }
    break;

    case circle: {
        std::cout<<"active tool is circle"<<std::endl;
        }break;

    case ellipse: {
        std::cout<<"active tool is ellipse"<<std::endl;
        }break;  

    default:
    {
        std::cout<<" usted no selecciono ninguna opcion "<<std::endl;
    }break;
    }

    std::cout<<"esto es fuera del switch"<<std::endl;

    return 0;

} 

