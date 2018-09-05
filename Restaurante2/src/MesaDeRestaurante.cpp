#include "MesaDeRestaurante.h"

MesaDeRestaurante::MesaDeRestaurante()
{
    nMesa = 0;
}

void MesaDeRestaurante::adicionaAoPedido(Pedido x){
    mesaPedidos[nMesa++] = x;
}

void MesaDeRestaurante::zeraPedidos(){
    nMesa = 0;
}

double MesaDeRestaurante::total(){
    double subtotal;
    int i;

    for(i=0; i<nMesa; i++){
        subtotal += (mesaPedidos[i].getPreco() * mesaPedidos[i].getQuantidade());
    }
    return subtotal;
}
