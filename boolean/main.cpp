// obsidian Personal/Curso C++/ 13 09 2023
#include <iostream>

int main(){

    bool red_ligth {true};
    bool green_light{false};

    if(red_ligth == true){
        std::cout << "alto! " ;
    } else {
        std::cout << "Avanza " ;
    }
    
    if(green_light == true ){
        std::cout << "luz verde" << std::endl;

    } else {
        std::cout << "luz roja" << std::endl;

    }

    std:: cout << "tamaño del booleano red_ligth: " << sizeof(red_ligth)
    << std::endl;

    //imprimir un booleano
    // 1 -->true
    // 0 -->false
    //para imprimir true o false en vez de 0 y 1 
    // std::cout << std::boolalpha;
    std::cout << "red_light : " << red_ligth << std::endl;
    std::cout << "green_light : " << green_light << std::endl;

    
   


    return 0;
} 

