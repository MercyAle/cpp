#include  <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int numerosecreto = 7;
    int numero = 0;

     cout << " Ingrese un numero: " << numero;
     cin >> numero;

      cout << endl;

     if (numero == numerosecreto) {
         cout << " Adivinaste el numero Secreto: " << numero;
     } else {
        cout << "No adivinaste "; 
     }

     
     

    return 0;
}
