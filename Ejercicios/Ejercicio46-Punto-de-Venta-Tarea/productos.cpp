#include <iostream>

using namespace std;

extern void agregarProducto(string descripcion, int cantidad, double precio);

void productos(int opcion)
{
   system ("cls");
   
   int opcionProducto = 0;

    switch (opcion)
    {
         case 1:
     {
        cout << "*****************" << endl;
		cout << "BEBIDAS CALIENTES" << endl;
        cout << "*****************" << endl;
        cout << "1- Cappuccino" << endl;
        cout << "2- Expresso" << endl;
        cout << "3- Cafe Mocha" << endl;
        cout << endl;

         cout << "Ingrese una opcion:";
		 cin >> opcionProducto;

    switch(opcionProducto)
    {
        case 1:
           agregarProducto("1 Cappuccino - L 40.00", 1, 40);
           break;
   
        case 2:
           agregarProducto("1 Expresso - L 30.00", 1, 30);
           break;
         
        case 3:
           agregarProducto("1 Cafe Mocha - L 38.00", 1, 38);
           break;

     default:
        {
		 cout << "opcion no valida";
         return;
         break;
		}
    }
    
    cout << endl;
    cout << "Producto agregado" << endl << endl;
    system("pause");

    break;
     }

        case 2:
    {
        cout << "*************" << endl;
		cout << "BEBIDAS FRIAS" << endl;
        cout << "*************" << endl;
        cout << "1- Granita Frutal" << endl;
        cout << "2- Iced" << endl;
        cout << "3- Granitas Cremosas" << endl;
        cout << endl;
         
         cout << "Ingrese una opcion:";
		 cin >> opcionProducto;
         
         switch(opcionProducto)
    {
        case 1:
           agregarProducto("1 Granita Frutal - L 30.00", 1, 30);
           break;
   
        case 2:
           agregarProducto("1 Iced - L 40.00", 1, 40);
           break;
         
        case 3:
           agregarProducto("1 Granitas Cremosas - L 45.00", 1, 45);
           break;

     default:
        {
		 cout << "opcion no valida";
         return;
         break;
		}
    }
    
    cout << endl;
    cout << "Producto agregado" << endl << endl;
    system("pause");

    break;
        
    }
    
    case 3:
    {
        cout << "***********" << endl;
		cout << "RESPOSTERIA" << endl;
        cout << "***********" << endl;
        cout << "1- Marmoleado" << endl;
        cout << "2- Pastel de Frutas" << endl;
        cout << "3- Cheesecake" << endl;
        cout << endl;
         
         cout << "Ingrese una opcion:";
		 cin >> opcionProducto;
         
         switch(opcionProducto)
    {
        case 1:
           agregarProducto("1 Marmoleado - L 55.00", 1, 55);
           break;
   
        case 2:
           agregarProducto("1 Pastel de Frutas - L 70.00", 1, 70);
           break;
         
        case 3:
           agregarProducto("1 Cheesecake - L 45.00", 1, 45);
           break;

     default:
        {
		 cout << "opcion no valida";
         return;
         break;
		}
    }
    
    cout << endl;
    cout << "Producto agregado" << endl << endl;
    system("pause");

    break;
        
    }
    default:
    break;
    }
}