//Obsidian 19 09 2023
#include <iostream>

int main(){
    int num1 {45};
    int num2 {60};

    std::cout << "numero 1: " << num1 << std::endl;
    std::cout << "numero 2: " << num2 << std::endl;

    std::cout << std::endl;
    std::cout << "comparando variables" <<std::endl;

    std::cout << std::boolalpha; // hace que se imprima booleano en vez de 0 y 1
    std::cout << "numero 1 < numeri 2 " << (num1 < num2) << std::endl;


    std::cout << "numero 1 <= numero 2: " << (num1 <= num2) << std::endl;
    std::cout << "numero 1 > numero 2: " << (num1 > num2 ) <<std::endl;
    std::cout << "numero 1 >= numero 2" << (num1 >= num2)<<std::endl;
    std::cout << "numero 1 == numero 2: " << (num1 == num2) <<std::endl;
    std::cout << "numero 1 != numero 2: " << (num1 != num2 ) <<std::endl;


    bool result = num1 == num2;
    std::cout << "resultado de numero 1 == numero 2 " << result << std::endl;
    
    return 0;


} 

