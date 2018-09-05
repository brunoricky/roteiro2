#ifndef ENDERECO_H
#define ENDERECO_H
#include <string>

using namespace std;

class Endereco
{
    public:
        Endereco();
        Endereco(std::string r, std::string num, std::string b, std::string ci, std::string e, std::string ce);
        std::string toString();

    private:
        std::string rua;
        std::string numero;
        std::string bairro;
        std::string cidade;
        std::string estado;
        std::string cep;
};

#endif // ENDERECO_H
