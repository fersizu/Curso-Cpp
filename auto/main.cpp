//obsidian 13 09 2023
#include <iostream>

int main(){

auto var1 {12}; //int
auto var2 {13.0}; //double
auto var3 {14.0f}; //float
auto var4 {15.0l}; //long double
auto var5 {'e'}; //char

//int modifier sufixes
auto var6 {123u}; //unsigned
auto var7 {123ul}; //unsigned long
auto var8 {123ll}; // long long

std::cout<< "tamaño var1: " <<sizeof(var1) <<std::endl;
std::cout<< "tamaño var2: " <<sizeof(var2) <<std::endl;
std::cout<< "tamaño var3: " <<sizeof(var3) <<std::endl;
std::cout<< "tamaño var4: " <<sizeof(var4) <<std::endl;
std::cout<< "tamaño var5: " <<sizeof(var5) <<std::endl;
std::cout<< "tamaño var6: " <<sizeof(var6) <<std::endl;
std::cout<< "tamaño var7: " <<sizeof(var7) <<std::endl;
std::cout<< "tamaño var8: " <<sizeof(var8) <<std::endl;
} 

