#include <iostream>

using namespace std; 

int main(int argc, char const *argv[])
{
    int a = 0 ;
	int b = 0 ;
	int Suma;
    int Resta;
    int Multiplicacion;
    int Division;

	
    cout << " Ingrese el valor de a: " ;
    cin >> a;
   
    cout << endl;
   
    cout << " Ingrese el valor de b: " ;
    cin >> b;

	Suma = a + b;
    Resta = a - b;
    Multiplicacion = a * b;
    Division = a / b;
	
	cout << endl;
    cout << " La Suma de a + b es: " << Suma;
    cout << endl;
    cout << " La Resta de a - b es: " << Resta;
    cout << endl;
    cout << " La Multiplicacion de a * b es: " << Multiplicacion;
    cout << endl;
    cout << " La Division de a / b es: " << Division;

    return 0;
}
