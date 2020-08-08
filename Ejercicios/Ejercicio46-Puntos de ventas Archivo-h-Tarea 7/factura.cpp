#include <iostream>

using namespace std;

double subtotal;
double total;
double impuesto;

string listaProductos;


void agregarProductos(string descripcion, int cantidad, int precio)
{
    listaProductos = listaProductos + descripcion + '\n';
    subtotal = subtotal + (cantidad * precio);
    total = subtotal + (subtotal * 0.15);
    impuesto = subtotal * 0.15;
}

void imprimirFactura()
{
    system("cls");
    cout << "*******" << endl;
    cout << "FACTURA" << endl;
    cout << "*******" << endl;
    cout << endl;
    
    cout << "Productos: " << endl;
    cout << listaProductos;

    cout << endl;

    cout << "Subtotal: " << subtotal;
    cout << endl;
    cout << endl;
    cout << "Impuesto a pagar: " << impuesto;
    cout << endl;
    cout << endl;
    cout << "Total a pagar: " << total;
    cout << endl;
    cout << endl;
    cout << endl;
    system("pause");
}