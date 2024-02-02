#include <iostream>

int main()
{
    // arreglo de ints
   // int scores [10]; // datos basura, es un arreglo vacio en este momento

    //leer datos
    /*
    std::cout << "scores [0] " << scores [0] <<std::endl;
    std::cout << "scores [1] " << scores [1] <<std::endl;
    */
/*x
    //escribiendo datos en un arreglo con un for
    for (size_t i{0};i < 10 ; ++i){
        scores[i] = i * 10;
    }
    //Read with a loop, size_t porque no hay indices negativos 

    for (size_t i {0} ; i <10 ; ++i){
        std::cout<<"scores [" << i << "] :" <<scores[i] <<std::endl;

    }
        //Read with a loop, size_t porque no hay indices negativos 


    //escribir datos en un arreglo
    /*
    scores[0] = 24;
    scores[1] = 15;
    scores[2] = 63;

  for (size_t i {0} ; i <10 ; ++i){
        std::cout<<"scores [" << i << "] :" <<scores[i] <<std::endl;

    }
*/

// declarando e inicializando un arreglo al mismo tiempo
/*
    double salarios[5]{14.5,2.3,63.1,12,21.5};

    for(size_t i{0}; i < 5; ++i){
        std::cout<<"slario [" << i << "] : "<<salarios[i]<< std::endl;
    }
*/

//si se omite algun indice, se inicializa en cero
/*
int families[5]{13,5,2};
    for(size_t i{0}; i < 5; ++i){
        std::cout<<"families [" << i << "] : "<<families[i]<< std::endl;
    }
*/
    //arreglo sin tamaño específico
    /*
    int class_sizes[]{10,12,15,11,18,17};

    for(auto value : class_sizes){
        std::cout <<"value : "<< value << std::endl;
    }

*/
//arreglo no modificable
//   const int medidas[]{10,12,15,11,18,17};
//    medidas[2] = 3;

    // Sumador de los valores del arreglo 

    int scores []{2,5,8,2,5,6,9};
    int sum{0};
    // range based for para recorres el arreglo
    for (int element : scores){
        //sum = sum + elemento
        sum += element;
    }

    std::cout <<"Score sum : " << sum << std::endl;

        return 0;
}
