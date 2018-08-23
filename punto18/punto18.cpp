/*
programa:el area de un cubo
fecha:21 de agosto de 2018
elaborado por :sletsen duque vargas 
*/

#include <stdio.h>
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	float n,area;
	
	printf("ingrese la medida de un lado : " );
	scanf("%f", &n);
	
	while(n!=0 && n!= 1)
	{
		
		printf("total del area: %.2f es: %2f\n", (n*n)*6);
		
		printf("\ningrese la medida de un lado: " ) ;
		scanf("%f", &n);
		
	}
	
	return 0;
}

