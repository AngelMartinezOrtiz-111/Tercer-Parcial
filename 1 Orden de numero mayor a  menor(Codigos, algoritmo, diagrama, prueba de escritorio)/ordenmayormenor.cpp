/*
Universidad Politecnica de Tulancingo
Ingenieria en Electronica y Telecomunicaciones
Logica de programación
Angel Martinez Ortiz

El programa ordena una serie de 5 numeros de mayor a menor utilizando ciclos de while e if
en este caso el codigo esta dentro del int main.
*/

#include <stdlib.h>
#include<stdio.h>
#include <iostream>

const int n = 5;

int main()
{

	int a[n], indice, limite, pivote;
	indice = 0;
	//para  capturar la lista de n valores
	while (indice < n) {
		printf("Captura a[%d]:", indice);
		scanf_s("%d", &a[indice]);
		indice = indice + 1;
	}
	printf("\nEl Arreglo original es: ");
	indice = 0;
	while (indice < n) {
		if (indice > 0)printf(",");
		printf("%d", a[indice]);
		indice = indice + 1;
	}
	printf("\n");

		indice = 0;
		limite = n - 1;
		while (limite > 0) {
			while (indice < limite) {
				if (a[indice] < a[indice + 1]) {
					pivote = a[indice + 1];
					a[indice + 1] = a[indice];
					a[indice] = pivote;
				}
				indice = indice + 1;
			}
			limite = limite - 1;
			indice = 0;
		}
		printf("\nEl Arreglo Ordenado es: ");
		indice = 0;
		while (indice < n) {
			if (indice > 0)printf(",");
			printf("%d", a[indice]);
			indice = indice + 1;
		}
		printf("\n");
	}

