#include <iostream>
#include "Consultor.h"

using namespace std;

int main()
{
    Funcionario f1;
    Consultor c1("Roberval", 14020189, 3200.50);

    f1.setMatricula(33500210);
    f1.setNome("Ferdinando");
    f1.setSalario(2500.40);

    cout << "A matricula do funcionario 1 eh:" << endl << f1.getMatricula() << endl;
    cout << "O nome do funcionario 1 eh:" << endl << f1.getNome() << endl;
    cout << "O salario do funcionario 1 eh:" << endl << f1.getSalario() << endl;

    cout << "A matricula do consultor 1 eh:" << endl << c1.getMatricula() << endl;
    cout << "O nome do consultor 1 eh:" << endl << c1.getNome() << endl;
    cout << "O salario do consultor 1 eh:" << endl << c1.getSalario(0.1) << endl;

    return 0;
}
