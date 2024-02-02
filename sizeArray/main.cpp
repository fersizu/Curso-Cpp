#include <iostream>

int main()
{
    int scores [] {1,2,3,4,5,6,7,8,9,10,11,12};

//almacena el tamano del arreglo en la variable count
    int count { std::size(scores)};

    std::cout<<count<<std::endl;



    for(size_t i {0}; i < count ; ++i){
        std::cout << "scores [" << i << "] :" << scores[i] << std ::endl;
    }
    

    
//antes de c++ 17
    std::cout<<""<<std::endl;

int scores1 [] {1,2,3,4,1,2,5,2,2,2,1,4,2,1,5,2,1,};

//se obtiene el tamano en bytes de un solo elemento del arreglo
std::cout << "sizeof(scores1) :" << sizeof(scores1)<< std::endl;
//se obtiene el tamano en bytes de todo el arreglo 
std::cout << "sizeof(scores1[0]) :" << sizeof(scores1[0])<< std::endl;
//tamano de un solo elemento / tamano de todo el arreglo
std::cout << "sizeof(scores1)/sizeof(scores1[0]) :" <<sizeof(scores1)/ sizeof(scores1[0])<< std::endl; 

int count1 {sizeof(scores1)/ sizeof(scores1[0])};

for (size_t i {0}; i < count1; i++){
    std::cout<<"score [" << i <<"] :"<< scores1[i]<<std::endl;
}

}
