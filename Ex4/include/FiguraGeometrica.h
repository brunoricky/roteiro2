#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include <string>

class FiguraGeometrica
{
    public:
        FiguraGeometrica();
        double calcularArea();
    protected:
        std::string nome;
};

#endif // FIGURAGEOMETRICA_H
