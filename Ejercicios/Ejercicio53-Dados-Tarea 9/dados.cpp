#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int dado1 = 0;
    int dado2 = 0;
    int suma = 0;

    srand(time(NULL));

    dado1 = rand() % 6 + 1;
    dado2 = rand() % 6 + 1;

    suma = dado1 + dado2;

    cout << "Dado 1 arroja numero: " << dado1 << endl;
    cout << "Dado 2 arroja numero: " << dado2 << endl << endl;
    cout << "La suma es: " << suma << endl;

    return 0;
}