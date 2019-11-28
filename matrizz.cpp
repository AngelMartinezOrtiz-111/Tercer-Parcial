/*
Universidad Politecnica de Tulancingo
Ingenieria en Electronica y Telecomunicaciones
Logica de programación
Angel Martinez Ortiz

El programa crea una matriz pediendole al usuario que introdusca los numeros de los cuales se compondra 
la matriz en este caso n es el numero de columnas que tendra la matriz.
*/

#include <iostream>
#include<stdlib.h>
#include<stdio.h>

const int n = 4;

int main()
{
	int matriz[n][n];
	int re = 0, co;
	while (re < n) {
		co = 0;
		while (co < n) {
			printf("Captutura el elemento [%d,%d]", re, co);
			scanf_s("%d", &matriz[re][co]);
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


