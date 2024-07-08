#include<iostream>
#include<conio.h>
#include<clocale>
#include<math.h>

int main(){
    setlocale(LC_CTYPE,"Spanish");
    float Ci=0;
    float Ti=0;
    float t=0;
    float resultado =0;


    resultado = Ci * pow(1+(Ti/100),t);

    getch();
    return 0;
}