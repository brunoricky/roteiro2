#include <iostream>
#include "FiguraGeometrica.h"
#include "Triangulo.h"
#include "Quadrado.h"
#include "Circulo.h"

using namespace std;

int main()
{
    Quadrado q1(5.00, 12.00);
    Triangulo t1(6.50, 15.00);
    Circulo c1(3.50);

    cout << "A area do quadrado eh: " << q1.calcularArea() << endl;
    cout << "A area do triangulo eh: " << t1.calcularArea() << endl;
    cout << "A area do circulo eh: " << c1.calcularArea() << endl;

    return 0;
}
