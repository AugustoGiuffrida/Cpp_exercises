#include<iostream>
#include<locale>
#include<cmath>

int main(){
    std::setlocale(LC_CTYPE,"Spanish");
    float Ci = 0;
    float Ti = 0;
    float t = 0;
    float resultado = 0;

    while (Ci <= 0) {
        std::cout << "Ingrese Capital Inicial: ";
        std::cin >> Ci; 
    }

    while (Ti <= 0) {
        std::cout << "Ingrese Tasa de interes anual (%): ";
        std::cin >> Ti; 
    }
    
    while (t <= 0) {
        std::cout << "Ingrese el periodo de tiempo en años: ";
        std::cin >> t; 
    }

    resultado = Ci * std::pow(1 + (Ti / 100), t);

    std::cout << "El monto total después de " << t << " años es: " << resultado << std::endl;

    std::cin.get();
    std::cin.get();
    return 0;
}
