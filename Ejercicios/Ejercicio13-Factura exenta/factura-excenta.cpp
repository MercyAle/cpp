#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    double subtotal= 0;
    double total=0;
    double impuesto= 0.15;
    int descuento=0;
    double CalculoDescuento=0;
    double CalculoImpuesto=0;
    char estaExenta;


    cout << "Ingrese el Sub-total de la factura :";
    cin >> subtotal;
    

    cout << "Ingrese el Descuento (0, 10, 15, 20)";
    cin >> descuento;
    

    cout << "Es factura Exenta? escriba s o n: ";
    cin >> estaExenta;
    

    cout<< endl;

if (estaExenta == 's' || estaExenta  == 'S') 
{
 cout<<"Total a pagar es:" << subtotal;
} 
if(estaExenta == 'n' || estaExenta == 'N')
{
    CalculoDescuento= (subtotal*descuento)/100;
    
    CalculoImpuesto= (subtotal -CalculoDescuento) *0.15;
    
    total= subtotal - CalculoDescuento  + CalculoImpuesto;
    
    cout<<"Total a pagar es:" << total;
}


    return 0;
}