//obsidian 13 09 2023
#include <iostream>

int main(){
   int value {5};
   value = value +1; //6
   std::cout << "the value is : "<< value << std::endl;

   value = 5;// resetea el valor a 5

   //Decrementar uno
   value = value -1;
   std::cout << "El valor es: " << value << std::endl;

   value = 5;

    std::cout<<"Prefijo ---------- "<<std::endl;
    std::cout <<"The value is decrementing: "<< value-- << std::endl;
    std::cout << "the value is : " <<value << std::endl;
    
      value = 5;

    std::cout<<"posfijo -------- "<<std::endl;
    std::cout <<"The value is aumenting: "<< ++value << std::endl;
    std::cout << "the value is : " <<value << std::endl;

} 

