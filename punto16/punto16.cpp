/*
* Programa : suma de numero primos del 1 al 50
* Fecha : 19/08/18
* Autor: Sletsen Duque Vargas
*/

#include <iostream>
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int suma=0,div=1,cont, n=1;
	while(n<=50)
	{
		while(div<=n)
		{
			if(n%div==0)
			{
				cont++;
			}
		   div++;
		}
		if(cont==2)
		{
			suma = suma +n;
		}
	    n++;
		cont = 0;
		div = 0;
	}
	
	       printf("la suma de los numero primos (del 1 al 50)es: %d",suma);
	return 0;
}

