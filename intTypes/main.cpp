//tengo un documento en obsidian que explica esta practica 07 09 2023 
#include <iostream>

int main(){


//Inicializadas con corchetes 
//va a tener datos basura aleatorios o cero dependiendo del compilador
/*
int elephant_count; 
int lion_count{}; //Inicializa en 0
int dog_count {10}; // inicializa en 10
int cat_count {15};// inicializa en 15
int domesticated_animals {dog_count + cat_count}; //inicializa en 25
*/

/*no existe asi que no lo compila
int new_number {doesnt_exist};*/
//no lo va a compilar porque es decimal y usé  {}
// int numeroDecimal {2.5}; 
/*
std::cout<< "elephant count: " <<elephant_count<<std::endl;
std::cout<< "Lion count: " <<lion_count<<std::endl;
std::cout<< "dog count: " <<dog_count<<std::endl;
std::cout<< "cat count: " <<cat_count<<std::endl;
std::cout<< "cuenta de los animales: " <<domesticated_animals<<std::endl;
*/


//inicialización funcional
/*
int apple_count(5);
int orange_count(10);
int fruit_count (apple_count+orange_count);*/

//int bad_initialization (doesnt_exists + doesnt_exists);

//información perdida, mas peligroso que corchetes porque si compila y corta el decimal.
// int numDecimal (3.5);

/* std::cout<< "cantidad de manzanas: " <<apple_count<<std::endl;
std::cout<< "cantidad de naranjas: " <<orange_count<<std::endl;
std::cout<< "cantidad de frutas: " <<fruit_count<<std::endl;
std::cout<< "numero decimal mutilado: " <<numDecimal<<std::endl;*/


//inicializacion de asignacion 

int bike_count = 2;
int truck_count = 7;
int vehicle_count = bike_count + truck_count;
int numDecimal = 3.5;

std::cout<<"Cantidad de bicis: "<<bike_count<<std::endl;
std::cout<<"Cantidad de trocas: "<< truck_count<<std::endl;
std::cout<<"Cantidad de vehiculos: "<<vehicle_count<<std::endl;
//tambien mutila el numero como los parentesis. 
std::cout<<"numero decimal mutilado: "<<numDecimal<<std::endl;

//ver el tamaño de un int o variable en bytes.
std::cout<< "tamaño de un int " << sizeof(int)<<std::endl;
std::cout<< "tamaño de memoria de bicis " << sizeof(bike_count)<<std::endl;









    return 0;
} 

