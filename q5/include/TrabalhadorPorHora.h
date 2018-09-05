#ifndef TRABALHADORPORHORA_H
#define TRABALHADORPORHORA_H

#include <Trabalhador.h>


class TrabalhadorPorHora : public Trabalhador
{
    public:
        TrabalhadorPorHora(std::string n, double v);
        double getValorDaHora();
        double calcularPagamentoSemanal(int horas);

    private:
        double valorDaHora;
};

#endif // TRABALHADORPORHORA_H
