/*
Universidad Politecnica de Tulancingo
Ingenieria en Electronica y Telecomunicaciones
Logica de programación
Angel Martinez Ortiz

El programa ordena una serie de 5 numeros de mayor a menor donde el int main va abajo de todo el proceso y se 
utilizan arreglos.
*/


#include <iostream>
#include <stdlib.h>
#include<stdio.h>

const int n = 5;

	void Captura(int arreglo[]) {
		int ind;
		//captura una lista 
		ind = 0;
		while (ind < n) {
			printf("Captura a[%d]: ", ind);
			scanf_s("%d", &arreglo[ind]);
			ind++;

		}
	}
	void Mostrar(int arre[]) {
		int indi;
		indi = 0;
		while(indi < n) {
			if (indi > 0)printf(", ");
			printf("%d", arre[indi]);
			indi++;
		}
	}
	void Ordenar(int ar[]) {
		int indice, limite, pivote;
			indice = 0;
		limite = n - 1;
		while (limite>0){
			while (indice < limite) {
				if (ar[indice] < ar[indice + 1]) {
					pivote = ar[indice + 1];
					ar[indice + 1] = ar[indice];
					ar[indice] =pivote;
				}
				indice++;
			}
			limite--;
			indice = 0;
		}
	}
	int main()
	{
		int a[n];
		Captura(a);
		printf("\nEl arreglo original es: ");
		Mostrar(a);
		printf("\n");
		//Para ordenar en lista 
		Ordenar(a);
		printf("\nEl arreglo ordenado es: ");
		Mostrar(a);
		printf("\n");

	}
	



