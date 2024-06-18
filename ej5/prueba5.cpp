#include<iostream>

int main(){

    int opcion = 0;
    int a,b;

    std::cout<<"Opcion 1: suma  \nOpcion 2: resta \nOpcion 3: multiplicacion"<<std::endl;

    std::cout<<"Ingrese una opcion: ";
    std::cin >> opcion;


    while(opcion<1 || opcion>3){
            std::cout<<"Opcion invalida. Por favor, elija una opcion valida (1, 2, o 3): ";
            std::cin >> opcion;
    }; 


    std::cout<<"Ingrese un numero: ";
    std::cin >> a;

    std::cout<<"Ingrese un numero: ";
    std::cin >> b;

    switch (opcion)
    {
    case 1:
        std::cout<<"El resultado de la suma es: "<<a+b<<std::endl; 
        break;

    case 2:
        std::cout<<"El resultado de la resta es: "<<a-b<<std::endl; 
        break;

    case 3:
        std::cout<<"El resultado de la mutlplicacion es: "<<a*b<<std::endl; 
        break;    
    
    }



}