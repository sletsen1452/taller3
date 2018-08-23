/*
* Programa : Ingresar variable con el valor de dolares en pesos colombianos
* Fecha : 19/08/18
* Autor: Sletsen Duque Vargas
*/

#include <iostream>
#include <stdio.h>

using namespace std;

int main(int argc, char *argv[]) {
	
	int convrt, cop, usd;
	
	printf ("Ingrese el valor de un dolar en peso colombianos: $");
	scanf ("%d" , &convrt);
	printf("ingrese la cantidad de dolares que tiene: $");
	scanf ("%d", &usd);
	
	cop = convrt * usd;
	
	printf ( "en pesos colombianos tiene: $%dCOP" , cop);
	
	return 0;
}

