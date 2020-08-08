#include <iostream>
#include "productos.h"

using namespace std;


void productos(int opcion)
{   
    system("cls"); 

    int opcionProductos = 0;

    switch (opcion)
    {
    case 1:
    {
        cout << "*****************" << endl;
        cout << "BEBIDAS CALIENTES" << endl;
        cout << "*****************" << endl;
        cout << endl;
        cout << "1 - Capuccino" << endl;
        cout << "2 - Expresso" << endl;
        cout << "3 - Café Americano" << endl;
        cout << "4 - Café Mocha" << endl;
        cout << "5 - Café" << endl;
        cout << endl;
        
        cout << "Ingrese una opcion: ";
        
        cin >> opcionProductos;
        
            switch (opcionProductos)
            {
            case 1:
                agregarProductos("1 Capuccino - L. 38.00", 1, 38);
                break;
            
                case 2:
                agregarProductos("1 Expresso - L. 35.00", 1, 35);
                break;

                case 3:
                agregarProductos("1 Café Americano - L. 40.00", 1, 40);
                break;

                case 4:
                agregarProductos("1 Café Mocha - L. 43.00", 1, 43);
                break;

                case 5:
                agregarProductos("1 Café - L. 30.00", 1, 30);
                break;

            default:
                {
                    cout << endl;
                    cout << endl;
                    cout << "Opcion no valida";
                    cout << endl;
                    cout << endl;
                    system("pause");
                    return;
                    break;
                }    
            }
                cout << endl;
                system("cls");
                cout << "Producto Agregado" << endl << endl;
                system("pause");
        break;
    }
    case 2:
    {
        cout << "*************" << endl;
        cout << "BEBIDAS FRIAS" << endl;
        cout << "*************" << endl;
        cout << endl;
        cout << "1 - Granitas Frutales" << endl;
        cout << "2 - Iced" << endl;
        cout << "3 - Moccachino Supreme" << endl;
        cout << "4 - Granitas Cremosas " << endl;
        cout << "5 - Agua Embotellada (personal)" << endl;
        cout << endl;

        cout << "Ingrese una opcion: ";

        cin >> opcionProductos;

        switch (opcionProductos)
        {
            case 1:
                agregarProductos("1 Granitas Frutales - L. 40.00", 1, 40);
                break;

            case 2:
             agregarProductos("1 Iced - L. 58.00", 1, 58);
            break;

            case 3:
             agregarProductos("1 Moccachino Supreme - L. 55.00", 1, 55);
            break;

            case 4:
             agregarProductos("1 Granitas Cremosas  - L. 60.00", 1, 60);
            break;

            case 5:
             agregarProductos("1 Agua Embotellada (personal) - L. 35.00", 1, 35);
            break;
        
        default:
                {
                    cout << endl;
                    cout << endl;
                    cout << "Opcion no valida";
                    cout << endl;
                    cout << endl;
                    system("pause");
                    return;
                    break;
                }   
        }
                cout << endl;
                system("cls");
                cout << "Producto Agregado" << endl << endl;
                system("pause");

        break;
    }
     case 3:
    {
        cout << "**********" << endl;
        cout << "REPOSTERIA" << endl;
        cout << "**********" << endl;
        cout << endl;
        cout << "1 - Chilena de Guayaba" << endl;
        cout << "2 - Alfajor" << endl;
        cout << "3 - Tartaleta de Fruta" << endl;
        cout << "4 - Oreja" << endl;
        cout << "5 - Muffin Integral" << endl;
        cout << endl;

        cout << "Ingrese una opcion: ";

        cin >> opcionProductos;

        switch (opcionProductos)
        {
            case 1:
            agregarProductos("1 Chilena de Guayaba - L. 85.00", 1, 85);
            break;

            case 2:
             agregarProductos("1 Alfajor - L. 50.00", 1, 50);
            break;

            case 3:
             agregarProductos("1 Tartaleta de Fruta - L. 75.00", 1, 75);
            break;

            case 4:
             agregarProductos("1 Oreja - L. 54.00", 1, 54);
            break;

            case 5:
             agregarProductos("1 Muffin Integral - L. 65.00", 1, 65);
            break;
            
        
        default:
                {
                    cout << endl;
                    cout << endl;
                    cout << "Opcion no valida";
                    cout << endl;
                    cout << endl;
                    system("pause");
                    return;
                    break;
                }   
        }
                cout << endl;
                system("cls");
                cout << "Producto Agregado" << endl << endl;
                system("pause");

        break;
    }
    default:
    {   system("cls");
        cout << "Ingrese una opcion valida (1, 2, 3, 4, 0)" << endl << endl;
        system("pause");
        break;
    }    
    }
}