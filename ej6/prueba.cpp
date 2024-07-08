#include <iostream>

#define multiplicacion(a,b) a*b
#define potencia(a) a*a

int main(){
    int a,b;

    std::cout<<"Ingrese numero: ";
    std::cin>>a;

    std::cout<<"Ingrese numero: ";
    std::cin>>b;

    //int Multiplicacion = multiplicacion(a,b);
    std::cout<<"El resultado de la multiplicacion es: "<<multiplicacion(a,b)<<std::endl;

    //int Potencia = potencia(a);
    std::cout<<"El resultado de la potencia es: "<<potencia(a)<<std::endl;


    return 0;
};