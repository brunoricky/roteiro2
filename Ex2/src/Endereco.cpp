#include "Endereco.h"

Endereco::Endereco(){
}

Endereco::Endereco(std::string r, std::string num, std::string b, std::string ci, std::string e, std::string ce)
{
    rua = r;
    numero = num;
    bairro = b;
    cidade = ci;
    estado = e;
    cep = ce;
}

std::string Endereco::toString(){
    return rua+"-"+numero+"-"+bairro+"-"+cidade+"-"+estado+"-"+cep;
}

