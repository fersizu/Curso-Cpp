//tengo un documento en obsidian que explica esta practica 05 09 2023

#include <iostream>
int sumNum(int first_param, int second_param){

    int result = first_param+second_param;
    return result;
}

int main(){
   

   int first_number {13}; // Se declara el primer numero
   int  second_number {7};

// Se imprime en consola cual es el primer y segundo numero 

   std::cout << "Primer numero : " << first_number << std::endl;
   std::cout << "Segundo numero : " << second_number << std::endl;


    int sum = first_number + second_number;
    std::cout<< "la suma es : " << sum << std::endl; 

    sum = sumNum(25,7);
        std::cout<< "la suma es : " << sum << std::endl;

        /*se invoca la funcion directamente en el cout sin tener 
        que almacenar el resultado en la variable sum*/
        std::cout<< "la suma es : " << sumNum(23,12) << std::endl; 

    


   return 0;
    
} 

