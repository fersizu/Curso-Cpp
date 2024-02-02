#include <iostream>

int main()
{

    std::cout << "voy a imprimir 10 veces hola " << std::endl;

    for (size_t i{}; i < 10; i++)
    {
        std::cout << "hola1" << std::endl;
    }

    std::cout << std::endl;

    // ahora voy a usar una variable

    int limite{10};

    // se puede usar un negativo como inicio y un int en vez de size_of
    for (int i{-8}; i < limite; i++)
    {
        std::cout << "hola2 numero " << (i + 9) << " empieza en: " << i << std::endl;
    }
    // la variable i es privada del for, no se puede usar fuera;
    // std::cout<<i<<std::endl;

    std::cout << std::endl;

    // ahora voy a usar una variable fuera del loop

    size_t j{};
    for (j; j < 10; j++)
    {
        std::cout << "hola3" << std::endl;
    }
    std::cout << "esta es la variable jota " << j << std::endl;

    // sizeof(size_t)
    std::cout << "el tamanio de size_t es: " << sizeof(size_t) << std::endl;

    
}
