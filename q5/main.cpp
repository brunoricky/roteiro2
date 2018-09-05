#include <iostream>
#include "Trabalhador.h"
#include "TrabalhadorPorHora.h"
#include "TrabalhadorAssalariado.h"

using namespace std;

int main()
{
    TrabalhadorPorHora th1("Joao", 20.00);
    TrabalhadorAssalariado ta1("Roberto", 1500.00);

    cout << "O trabalhador por hora recebe por semana: " << th1.calcularPagamentoSemanal(45) << endl;
    cout << "O trabalhador assalariado recebe por semana: " << ta1.calcularPagamentoSemanal(45) << endl;

    return 0;
}
