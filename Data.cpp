#include "DATA.h"
#include <iostream>

Data::Data(int dia, int mes, int ano){

    this->dia = dia;
    this->mes = mes;
    this->ano = ano;
}
void Data::setDia(int dia){
    this->dia = dia;
 }
void Data::setMes(int mes){
    this->mes = mes;
 }
void Data::setAno(int ano){
    this->ano = ano;
 }
int Data::getDia(){
    return dia;
}
int Data::getMes(){
    return mes;
}
int Data::getAno(){
    return ano;
 }
int Data::AvancarDia(){

    if ( mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes || 12 ){
        if (dia == 32){
            dia = 1;
            mes++;
        }
    }else if (mes == 2) {
        if (dia == 29){
            dia = 1;
            mes++;
        }
    }else {
        if (dia == 31){
            dia = 1;
            mes++;
        }
    }

    if (mes == 13){
       mes = 1;
       ano++;
    }
}
