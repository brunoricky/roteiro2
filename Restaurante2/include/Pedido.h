#ifndef PEDIDO_H
#define PEDIDO_H
#include <string>
#include <sstream>
#include <iostream>

class Pedido
{
    public:
        Pedido();
        Pedido(int numero, std::string descricao, int quantidade, float preco);
        int getNumero();
        int getQuantidade();
        std::string getDescricao();
        std::string toString();
        double getPreco();

    private:
        int numero, quantidade;
        std::string descricao;
        double preco;
};

#endif // PEDIDO_H
