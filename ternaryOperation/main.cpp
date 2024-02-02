#include <iostream>

int main(){
    int max{};

    int a {35};
    int b {200};
/*
    std::cout<<"using regular if "<<std::endl;

    if (a > b) {
        max = a;
    } else {
        max = b;
    }
*/
//a pesar de que a sea un int, como 22.5f es float, le asigna float a max1
  auto max1 = (a < 22.5f)? a : 22.5f;

    std::cout<<"max : "<< max1 << std::endl;

    max = (a > b)? a : b;

    std::cout<<"max : "<< max << std::endl;

} 

