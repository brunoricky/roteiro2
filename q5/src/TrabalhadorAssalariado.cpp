#include "TrabalhadorAssalariado.h"

TrabalhadorAssalariado::TrabalhadorAssalariado(std::string n, double salarioMensal)
{
    nome = n;
    salario = salarioMensal;
}

double TrabalhadorAssalariado::calcularPagamentoSemanal(int horas){
    return salario/4;
}
