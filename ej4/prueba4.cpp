#include <iostream>

//&&--->AND
//||--->OR
//!---->NOT

int main(){

    int a,b,c,d;
    bool resultado;

    a=10;
    b=15;
    c=20;
    d=25;

    //1er version
    resultado = (a<b && a==a);
    std::cout<<"Primer caso AND es: "<<resultado<<std::endl;

    resultado = (a<b && a!=a);
    std::cout<<"Segundo caso AND es: "<<resultado<<std::endl;

    resultado = (c<d || c==a);
    std::cout<<"Primer caso OR es: "<<resultado<<std::endl;

    resultado = (a<b || d!=a);
    std::cout<<"Segundo caso OR es: "<<resultado<<std::endl;

    resultado = (d<b || d==a);
    std::cout<<"Tercer caso OR es: "<<resultado<<std::endl;

    resultado = !(d<b || d==a);
    std::cout<<"Tercer caso OR negado es: "<<resultado<<std::endl;


    //2da version
    if(a<b && a==a){
        std::cout<<"El Primer caso AND es verdadero"<<std::endl;
    }
    else {std::cout<<"El Primer caso AND es falso"<<std::endl;}

 
    if(a<b && a!=a){
        std::cout<<"El Segundo caso AND es verdadero"<<std::endl;
    }
    else {std::cout<<"El Segundo caso AND es falso"<<std::endl;}


    if(c<d || c==a){
        std::cout<<"El Primer caso OR es verdadero"<<std::endl;
    }
    else {std::cout<<"El Primer caso OR es falso"<<std::endl;}


    if(a<b || d!=a){
        std::cout<<"El Segundo caso OR  es verdadero"<<std::endl;
    }
    else {std::cout<<"El Segundo caso OR  es falso"<<std::endl;}


    if(d<b || d==a){
        std::cout<<"El Tercer caso OR  es verdadero"<<std::endl;
    }
    else {std::cout<<"El Tercer caso OR es falso"<<std::endl;}


    return 0;
}