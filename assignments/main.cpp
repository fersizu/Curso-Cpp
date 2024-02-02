// obsidian 13 09 2023
#include <iostream>

int main(){
    int var1{123}; //declare and initialize
    var1 = 55; //Assign

    std::cout<<"var1 "<< var1<< std::endl; //imprime la asignacion

    std::cout<<"---------------------------------"<<std::endl;

    double var2 {44.55}; 
    std::cout<<"var2: "<< var2 <<std::endl;

    var2= 99.09;
    std::cout<<"var2: "<< var2 <<std::endl;


    std::cout<<"---------------------------------"<<std::endl;

    bool state{false};
    std::cout << std::boolalpha;
    std::cout<<"bool: " << state << std::endl;
    state = true;
    std::cout <<"bool "<< state <<std::endl;


    //auto type deduction
    //cuidado con las asignaciones automaticas;
    auto var3 {333u};

    var3 = -22;

    std::cout <<"var3: " << var3 << std::endl;
    
    return 0;
} 

