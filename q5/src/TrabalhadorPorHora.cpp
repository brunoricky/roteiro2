#include "TrabalhadorPorHora.h"

TrabalhadorPorHora::TrabalhadorPorHora(std::string n, double v)
{
    valorDaHora = v;
    nome = n;
}

double TrabalhadorPorHora::getValorDaHora(){
    return valorDaHora;
}

double TrabalhadorPorHora::calcularPagamentoSemanal(int horas){
    int i;

    for(i=0; i<horas; i++){
        if(i<=39){
            salario += valorDaHora;
        }
        else if(i>=40){
            salario += valorDaHora*1.5;
        }
    }
    return salario;
}
