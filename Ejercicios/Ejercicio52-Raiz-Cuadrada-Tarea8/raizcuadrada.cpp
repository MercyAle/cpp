#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char const *argv[])
{
    double numero = 0;
    double raiz = 0;

    cout << "Ingrese el numero: ";
    cin >> numero;

    raiz = sqrt(numero);

    cout  <<  endl;
    cout << "La raiz cuadrada del numero " << numero << " es: " << raiz;
    return 0;
}