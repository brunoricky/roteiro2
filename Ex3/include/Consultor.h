#ifndef CONSULTOR_H
#define CONSULTOR_H
#include <Funcionario.h>

class Consultor : public Funcionario
{
    public:
        Consultor();
        Consultor(std::string n, int m, double s);
        double getSalario(float percentual);

    protected:

    private:
};

#endif // CONSULTOR_H
