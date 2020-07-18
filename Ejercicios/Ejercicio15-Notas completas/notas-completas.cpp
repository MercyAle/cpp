#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    
    int nota;

    cout << "Ingrese la nota que a obtenido: ";
    cin >> nota;

    if (nota < 0 || nota > 100)
    {
        cout << "Ingrese un valor entre 0 y 100";
        return 0;
    }

    
    if (nota > 95 && nota <= 100)
    {
        cout << "Felicidades! Obtuvo una A++";        
    }   else
        {
            if (nota > 90 && nota <= 95)
            {
                cout << "Obtuvo una A+";
            }
            else
            {
                if (nota > 85 && nota <= 90)
                {
                    cout << "Obtuvo una A";
                }
                else
                {
                    if (nota > 80 && nota <= 85)
                    {
                        cout << "Obtuvo una A-";
                    }
                }    
            }
        }          
    
    
    if (nota > 75 && nota <= 80)
    {
        cout << "Obtuvo una B+";
    }
    else
    {
        if (nota > 70 && nota <= 75)
        {
            cout << "Obtuvo una B";
        }
        else
        {
            if (nota > 65 && nota <= 70)
            {
                cout << "Obtuvo una B-";
            }
        }
    }
    
    
    if (nota > 60 && nota <= 65)
    {
        cout << "Obtuvo una C+";
    }
    else
    {
        if (nota > 55 && nota <= 60)
        {
            cout << "Obtuvo una C";
        }
        else
        {
            if (nota > 50 && nota <= 55)
            {
                cout << "Obtuvo una C-";
            }
        }
    }
    
    
    
    if (nota > 45 && nota <= 50)
    {
        cout << "Obtuvo una D+";
    }
    else
    {
        if (nota > 40 && nota <= 45)
        {
            cout << "Obtuvo una D";
        }
        else
        {
            if (nota > 35 && nota <= 40)
            {
                cout << "Obtuvo una D-";
            }
        }
    }
   
    
    if (nota > 30 && nota <= 35)
    {
        cout << "Obtuvo una E+";
    }
    else
    {
        if (nota > 25 && nota <= 30)
        {
            cout << "Obtuvo una E";
        }
        else
        {
            if (nota > 20 && nota <= 25)
            {
                cout << "Obtuvo una E-";
            }
        }
    }

    
    if (nota > 15 && nota <= 20)
    {
        cout << "Obtuvo una F+";
    }
    else
    {
        if (nota > 5 && nota <= 15)
        {
            cout << "Obtuvo una F";
        }
        else
        {
            if (nota > 0 && nota <= 5)
            {
                cout << "Obtuvo una F-";
            }
            else
            {
                if (nota == 0)
                {
                   cout << "Muy mal, obtuvo una F--";
                }
            }
            
        }    
    }
    
    return 0;
}