#include <iostream>
#include "RestauranteCaseiro.h"

using namespace std;

int main()
{
    Pedido p;
    RestauranteCaseiro rest = RestauranteCaseiro();

    p = Pedido(1, "Macarronada", 1, 10.00);
    rest.adicionaAoPedido(0, p);

    p = Pedido(2, "Crepe", 5, 4.00);
    rest.adicionaAoPedido(1, p);

    p = Pedido(3, "Feijoada", 10, 8.00);
    rest.adicionaAoPedido(2, p);

    return 0;
}
