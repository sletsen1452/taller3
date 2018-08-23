/*
* Programa: 
* Fecha: 21-08-2018
* Autor: Sletsen Duque Vargas
*/


#include <stdio.h>

#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int n, suma = 0 , cont = 0, resultado;
	char c;
	
	do
		{
		printf("\n Ingrese un numero: ");
		scanf("%d" , &n);
		
		resultado = n*n-n;
		
		printf("%d * %d - %d = %d\n", n,n,n,resultado);
		
		suma = suma + resultado ;
		resultado = 0;
		cont ++;
		
		printf("\n Desea ingresar mi numero? (s/n):");
		fflush(stdin);
		scanf("%c", &c);
		
		

	} while(c != 'n');
	
	
	printf("\nEl total de numeros introducidos fueron: %d\n La suma de los resultos fue;", n,n,n,resultado);
	
	
	return 0;
}


