#include "RestauranteCaseiro.h"

RestauranteCaseiro::RestauranteCaseiro()
{
    //ctor
}

void RestauranteCaseiro::adicionaAoPedido(int i, Pedido x){
    mesas[i].adicionaAoPedido(x);
}

double RestauranteCaseiro::calculaTotalRestaurante(){
    double subtotalRestaurante=0;
    int i;

    for(i=0; i<100; i++){
        subtotalRestaurante += mesas[i].total();
    }
    return subtotalRestaurante;
}
