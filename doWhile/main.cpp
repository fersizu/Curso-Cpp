#include <iostream>

int main()
{

    const int COUNT{10};
    size_t i{0};

    do {
        std::cout<< "i love c++"<<std::endl;
        ++i;
    } while (i<COUNT);

    std::cout<<"loop done"<<std::endl;
    std::cout<<"Segundo loop"<<std::endl;

// Corriendo el programa aunque COUNT1 >= y
    const int COUNT1{0};
    size_t y{0};

    do {
        std::cout<< "Asegurandome de que el programa corra una vez"<<std::endl;
        ++y;
    } while (y<COUNT1);

    std::cout<<"loop done"<<std::endl;



    return 0;    
}
