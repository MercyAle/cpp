#include <iostream>
	
using namespace std;
	
int main(int argc, char const *argv[])
	{
	
	    int pares = 0;
	    int impares = 0;
	    int total = 0;
	
	    for (int i = 1; i <= 10; i++)
	{
	    cout << i << " ";
	    
	    if (i % 2 == 0)
	{
	    pares += i;
	}
	else

	
	    impares += i;
	
	    total = pares + impares;
	
	}
	    cout << endl;
	    cout << endl;
	    cout << "Totalidad de numeros Pares: " << pares << endl;
	    cout << "Totalidad de numeros Impares: " << impares << endl;
	    cout << "Totalidad de la suma de numeros pares e impares: " << total;
	    return 0;
	}
