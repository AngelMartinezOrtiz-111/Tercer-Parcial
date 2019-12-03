/*
Universidad Politecnica de Tulancingo
Ingenieria en Electronica y Telecomunicaciones
Logica de programación
Angel Martinez Ortiz
El programa crea una matriz utilizando la funcion void con int main al ultimo; pero dandole la eleccion
al usuario si el quiere introducir los datos o que el no los introdusca.
Ademas ahorra el llenarlos automaticamente lo hace haciendo uso de la funcion del tiempo.
*/

#include <iostream>
#include<stdlib.h>
#include<stdio.h>

const int n = 4;

void captura(int matriz[n][n]) {
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
}
void llenado(int matriz[n][n]) {
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
}
void muestra(int matriz[n][n]) {
	printf(" Esta es la matriz \n \n");
	int re = 0, co;
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
void aleatorio(int matriz[n][n]) {
	int re = 0, co;
	while (re < n) {
		co = 0;
		while (co < n) {
			matriz[re][co] = (rand() % 30) + 1;
			co++;
		}
		printf("\n");
		re++;
	}
}

int main() {
	int cuadro[n][n];
	char respu;
	printf("Desea capturar (Si/No):");
	respu = getchar();
	if (respu == 'S' || respu == 's') {
		captura(cuadro);
	}
	else {
		aleatorio(cuadro);
	}
	muestra(cuadro);
}



