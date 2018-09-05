#ifndef TRABALHADORASSALARIADO_H
#define TRABALHADORASSALARIADO_H
#include <Trabalhador.h>

class TrabalhadorAssalariado : public Trabalhador
{
    public:
        TrabalhadorAssalariado(std::string n, double salarioMensal);
        double calcularPagamentoSemanal(int horas);

    private:

};

#endif // TRABALHADORASSALARIADO_H
