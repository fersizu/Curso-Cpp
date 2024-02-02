//obsidian 13 09 2023
#include <iostream>

int main(){
    
    //suma
    int number1{2};
    int number2{7};

    int result = number1 + number2;
    std::cout << "el resultado de 7 + 2 es: " << result << std::endl;


    // resta
    result = number1 - number2;
    std::cout<< "2 - 7 = " << result << std::endl;


    //multiplicacion
    result = number1 * number2;
    std::cout <<"2 * 7= " << result << std::endl;

    //division
    result = number2/number1;
    std::cout << "7/2 " << result << std::endl;

    result = number1/number2;
    std::cout << "2/7 " << result << std::endl; //0 porque no cabe ninguna vez


    //modulo
    result = number2%number1;
    std::cout << "residuo de 7/2= " << result << std::endl;// 1

    return 0;
} 

