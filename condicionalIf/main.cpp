#include <iostream>
#include <experimental/random>

int main(){
    int edadErick {22};
    int edadIan {18};

std::cout<<"La edad de erick es: "<< edadErick<<std::endl;
std::cout<<"la edad de ian es: "<< edadIan<<std::endl;

if (edadErick>edadIan){
    std::cout<<"Erick Es mayor que Ian"<<std::endl;

} else{
        std::cout<<"Ian es mayor que erick"<<std::endl;

}

/*
if (!(edadErick>edadIan)){
    std::cout<<"Ian es mayor que erick"<<std::endl;

}*/
std::cout<<std::endl;

std::cout<<"simulador de semaforo"<<std::endl;


int aleatorio {std::experimental::randint(0,2)};
int policia {std::experimental::randint(0,1)};

std::cout<<"el semaforo es "<<aleatorio<<std::endl;
std::cout<<"el policia es "<<policia<<std::endl;

if (aleatorio==0)
{   
    std::cout<<"semaforo rojo, alto";
}
if (aleatorio==1)
{   
    std::cout<<"semaforo amarillo, ve frenando";
}
if (aleatorio == 2 && policia == 1)
{   
    std::cout<<"avanza";
}
else {
    std::cout<<"detente";
}

// Ejemplo del video 



} 





