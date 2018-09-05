#ifndef QUADRADO_H
#define QUADRADO_H
#include <FiguraGeometrica.h>


class Quadrado : public FiguraGeometrica
{
    public:
        Quadrado(double base, double altura);
        double calcularArea();

    private:
        double base, altura;

};

#endif // QUADRADO_H
