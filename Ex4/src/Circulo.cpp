#include "Circulo.h"

Circulo::Circulo(double raio)
{
    this->raio = raio;
}

double Circulo::calcularArea(){
    return PI*raio;
}

