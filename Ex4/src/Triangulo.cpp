#include "Triangulo.h"

Triangulo::Triangulo(double base, double altura)
{
    this->base = base;
    this->altura = altura;
}

double Triangulo::calcularArea(){
    return (base*altura)/2;
}



