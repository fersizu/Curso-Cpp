#include <iostream>

int main()
{   //sin  null termination
    //char message [5] {'H','e','l','l','o'};

    //imprimirlo con un loop

/*    for (auto c : message) {
        std::cout<<c;
    }
*/  
//con null termination
    char message [6] {'H','e','l','l','o','\0'};

std::cout<<"Mensaje: "<< message<<std::endl;

//este tambien funciona
char message1 [] {'H','e','l','l','o','\0'};
std::cout<<"arreglo sin declarar tamano: "<< message1<<std::endl;
std::cout<<sizeof(message)<<std::endl;
std::cout<<sizeof(message1)<<std::endl;

}
