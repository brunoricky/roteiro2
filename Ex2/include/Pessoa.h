#ifndef PESSOA_H
#define PESSOA_H
#include "Endereco.h"
#include <string>

class Pessoa
{
    public:
        Pessoa(std::string n);
        Pessoa(std::string n, Endereco e, std::string t);
        std::string getNome();
        void setNome(std::string n);
        Endereco getEndereco();
        void setEndereco(Endereco e);
        std::string getTelefone();
        void setTelefone(std::string t);

    private:
        std::string nome;
        Endereco endereco;
        std::string telefone;

};

#endif // PESSOA_H
