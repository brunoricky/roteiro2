#include "Consultor.h"

Consultor::Consultor()
{

}

Consultor::Consultor(std::string n, int m, double s){
    nome = n;
    matricula = m;
    salario = s;
}

double Consultor::getSalario(float percentual){
    return salario += (salario*percentual);
}

