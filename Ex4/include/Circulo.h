#ifndef CIRCULO_H
#define CIRCULO_H
#define PI 3.14

#include <FiguraGeometrica.h>


class Circulo : public FiguraGeometrica
{
    public:
        Circulo(double raio);
        double calcularArea();

    private:
        double raio;
};

#endif // CIRCULO_H
