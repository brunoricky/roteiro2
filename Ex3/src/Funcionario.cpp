#include "Funcionario.h"

Funcionario::Funcionario()
{

}

double Funcionario::getSalario(){
    return salario;
}

std::string Funcionario::getNome(){
    return nome;
}

int Funcionario::getMatricula(){
    return matricula;
}

void Funcionario::setSalario(double s){
    salario = s;
}

void Funcionario::setNome(std::string n){
    nome = n;
}

void Funcionario::setMatricula(int m){
    matricula = m;
}
