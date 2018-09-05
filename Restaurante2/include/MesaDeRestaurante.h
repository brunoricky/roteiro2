#ifndef MESADERESTAURANTE_H
#define MESADERESTAURANTE_H
#include "Pedido.h"

class MesaDeRestaurante
{
    public:
        MesaDeRestaurante();
        void adicionaAoPedido(Pedido x);
        void zeraPedidos();
        double total();

    private:
        Pedido mesaPedidos[100];
        int nMesa;
};

#endif // MESADERESTAURANTE_H
