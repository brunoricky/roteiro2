#ifndef TRIANGULO_H
#define TRIANGULO_H
#include <FiguraGeometrica.h>

class Triangulo : public FiguraGeometrica
{
    public:
        Triangulo(double base, double altura);
        double calcularArea();

    private:
        double base, altura;
};

#endif // TRIANGULO_H
