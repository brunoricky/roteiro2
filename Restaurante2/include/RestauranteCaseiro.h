#ifndef RESTAURANTECASEIRO_H
#define RESTAURANTECASEIRO_H
#include "MesaDeRestaurante.h"


class RestauranteCaseiro
{
    public:
        RestauranteCaseiro();
        void adicionaAoPedido(int i, Pedido x);
        double calculaTotalRestaurante();

    private:
        MesaDeRestaurante mesas[100];

};

#endif // RESTAURANTECASEIRO_H
