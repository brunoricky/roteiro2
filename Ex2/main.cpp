#include <iostream>
#include "Pessoa.h"

using namespace std;

int main()
{
    Endereco end1 = Endereco("Rua Amarildo Lemos", "150", "Grotao", "Campina Grande", "Paraiba", "58040-010");
    Endereco end2 = Endereco("Rua Josina Leves", "100", "Averta", "Bela Cidade", "Paraiba", "54000-050");

    Pessoa pess1 = Pessoa("Romeu");
    Pessoa pess2 = Pessoa("Daniele", end2, "83999545670");

    return 0;
}
