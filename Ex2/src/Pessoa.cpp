#include "Pessoa.h"

Pessoa::Pessoa(std::string n)
{
    nome = n;
}

Pessoa::Pessoa(std::string n, Endereco e, std::string t){
    nome = n;
    endereco = e;
    telefone = t;
}

std::string Pessoa::getNome(){
    return nome;
}

void Pessoa::setNome(std::string n){
    nome = n;
}

Endereco Pessoa::getEndereco(){
    return endereco;
}

void Pessoa::setEndereco(Endereco e){
    endereco = e;
}

std::string Pessoa::getTelefone(){
    return telefone;
}

void Pessoa::setTelefone(std::string t){
    telefone = t;
}
