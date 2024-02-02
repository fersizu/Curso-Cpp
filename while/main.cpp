#include <iostream>

int main()
{

const size_t COUNT{10};
size_t i{0}; //iterator declaration


while (i < COUNT ){//test
    std::cout<<"i love c++"<<std::endl;
    ++i; //incremento
}

std::cout << "Acabo el loop"<<std::endl;
return 0;    
}
