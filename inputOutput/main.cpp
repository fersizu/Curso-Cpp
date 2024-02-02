//tengo un documento en obsidian que explica esta practica 05 09 2023 y 06 09 2023

#include <iostream>
//importar libreria string
#include <string>

int main(){
    // Imprimir informacion
   /* std::cout<<"Hello World"<< std::endl;

    int edad{21};
    std::cout <<"edad : " << edad << std::endl;

    std::cerr <<"Error message : Hay un error " << std::endl;
    std::clog <<"Log message : Algo paso" << std:: endl;*/
    

    /*
    int edad1; 
    std::string nombre;

    std::cout <<"Escribe tu nombre y tu edad: " <<std::endl;
    // Guarda los datos introducidos en esas variables.
    //std::cin >> nombre; 
    //std::cin >>edad1;
    // lo siguiente es igual que lo que está comentado
    std::cin >> nombre >> edad1;
    std::cout << "Hola " << nombre << " tienes " << edad1 << " años" << std::endl;
*/
    //datos con espacios

    std::string nombreCompleto;
    int edad2;

    std::cout<<"Introduce tu nombre completo y tu edad " <<std::endl;


    std::getline(std::cin,nombreCompleto);

    std::cin >> edad2;

    std::cout << "Hola " << nombreCompleto 
    << " tienes " << edad2 << " años" << std::endl;

    return 0;

} 

