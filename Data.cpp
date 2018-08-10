#include "Data.h"
#include <iostream>

Data::Data(int d, int m, int a){

    dia = d;
    mes = m;
    ano = a;
}
/*void Data::set_dia(int dia){
    this.dia = dia;
 }
void Data::set_mes(int mes){
    this.mes = mes;
 }
void Data::set_ano(int ano){
    this.ano = ano;
 }
int Data::get_dia(){
    return dia;
}
int Data::get_mes(){
    return mes;
}
int Data::get_ano(){
    return ano;
 }*/
int Data::AvancarDia(){

    dia++;
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

     /*}else{
       mes++;
     }*/

}}
