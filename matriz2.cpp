/*
Universidad Politecnica de Tulancingo
Ingenieria en Electronica y Telecomunicaciones
Logica de programación
Angel Martinez Ortiz

El programa crea una matriz sin que el usuario  introdusca los numeros los cuales  compondra la 
matriz en este caso n es el numero de columnas la cual es una variable global constante que tendra
la matriz.
*/

#include <iostream>
#include<stdlib.h>
#include<stdio.h>

const int n = 4;

int main()
{
	printf(" Esta es la matriz \n \n");
	int matriz[n][n];
	int re = 0, co;
	int secu = 1;

	while (re < n) {
		co = 0;
		while (co < n) {
			matriz[re][co] = secu;
			secu++;
			co++;
		}
		re++; co = 0;
	}
	re = 0;
	while (re < n) {
		co = 0;
		while (co < n) {

			printf(" %4d ", matriz[re][co]);
			co++;

					
		}

		printf("\n");
				re++;
	}
}
