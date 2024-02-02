// obsidian 19 09 2023
#include <iostream>

int main(){
      bool a {true};
      bool b {false};
      bool c {true};

      std::cout << std::boolalpha; //true / false
      std::cout << "a : " << a << std::endl;
      std::cout << "b : " << b << std::endl;
      std::cout << "c : " << c << std::endl;

      std::cout<< std::endl;
      std::cout << "operaciones basicas con and" << std::endl;
       
    std::cout << "a && b : " << (a && b) << std::endl;
    std::cout << "a && c :  " << (a && c )<< std::endl;
    std::cout << "a && b && c : " << (a && b && c)<< std::endl;


    std::cout<<"operaciones basicas con or"<<std::endl;

    std::cout <<"a || b : " << (a || b)<<std::endl;
    std::cout << "a||c : " << (a || c)<< std::endl;
    std::cout << "a || b || c : " << (a || b || c)<< std::endl;

    std::cout << "operaciones con not "<<std::endl;

    std::cout<< "!a : " << !a << std::endl;
    std::cout<< "!b : " << !b << std::endl;
    std::cout<< "!c : " << !c << std::endl;

    std::cout<<std::endl;

    std::cout << "combinando todos los operadores " << std::endl;
    std::cout << "!(a && b ) || c : " << (!(a && b) || c) << std::endl;
    

    //operadores logicos y relacionales
    
    int d{45};
    int e{20};
    int f{11};

    std::cout << std::endl;
    std::cout << "Operaciones logicas y relacionales juntas" <<std::endl;
    std::cout << "d : " << d << std::endl;
    std::cout << "e : " << e << std::endl;
    std::cout << "f : " << f << std::endl;

    std::cout<<std::endl;

    std::cout << "(d > e) && (d > f ) :" << ((d > e) && (d > f)) << std::endl;
    std::cout << "(d == e) || (e <= f) : " << ((d==e) || (e <= f)) <<std::endl;
    std::cout << "(d < e) || (d > f) : " << ((d < e) || (d > f)) << std::endl;
    std::cout << "(f > e) || (d < f) : " << ((f > e) || (d < f)) << std::endl;
    std::cout << "(d > f ) && ( d <= f) : " << ((d > f ) && (d <= f)) << std::endl;
    std::cout << "(d > e) && (d <= f) : " << ((d > e) && (d <= f)) << std::endl;
    std::cout << " ( !a ) && (d == e) : " << ((!a ) && (d == e )) << std::endl;



    return 0;
    
} 

