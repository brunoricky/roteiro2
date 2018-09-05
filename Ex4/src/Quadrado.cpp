#include "Quadrado.h"

Quadrado::Quadrado(double base, double altura)
{
    this->base = base;
    this->altura = altura;
}

double Quadrado::calcularArea(){
    return base*altura;
}


