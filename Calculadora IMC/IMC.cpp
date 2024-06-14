#include <iostream>
#include <cmath>
#include <iomanip>

int main(){

    //Variables
    float peso = 0;
    float altura =0;
    float resultado=0;

    //Input
    std::cout << "Calculadora de IMC " <<std::endl ;
    std::cout << "ingrese altura en metros: ";
    std::cin >> altura;
    std::cout << "ingrese peso en kilogramos: ";
    std::cin >> peso;

    //Output
    resultado = peso/pow(altura,2);
    std::cout <<"Su imc es " <<std::fixed<<std::setprecision(4)<<resultado<<" Kg/m^2";

    return 0;
}