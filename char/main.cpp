// Obsidian Personal/Curso C++/13 09 2023
#include <iostream>

int main(){
    char character1 {'a'};
    char character2 {'b'};
    char character3 {'c'};
    char character4 {'d'};
    char character5 {'e'};

    std::cout << "caracter 1: " << character1 << std::endl;
    std::cout << "Caracter 2: " << character2 << std::endl;
    std::cout << "caracter 3: " << character3 << std::endl;
    std::cout << "caracter 4: " << character4 << std::endl;
    std::cout << "caracter 5: " << character5 <<std::endl;

    //tamaño en memoria
    std::cout << "Tamaño en memoria de un char:" << sizeof(character1) << std::endl;

    char value = 65; //Valor ascii para 'A'
    std::cout <<"value : " << value << std::endl; 
    std::cout << "value(int): "<< static_cast<int>(value) << std::endl;



    return 0;
} 

