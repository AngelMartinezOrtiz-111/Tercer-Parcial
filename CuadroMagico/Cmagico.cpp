/*
Universidad Polit�cnica de Tulancingo
Ingenieria en Electronica y Telecomunicaciones
Logica de programaci�n
Angel Martinez Ortiz
El programa resuelve un cuadro magico de dimenciones desde 3x3 hasta 61x61, este se crea apartir de que el usuario decide 
de cuanto va a ser la dimencion de su cuadro magico, no cuentan numeros pares solo impares.
*/

# include  < iostream >
# include < stdlib.h >
# include < stdio.h >

void vaciar(int cuadro [61][61]){
int inren = 0, incol = 0;
  while (inren < 61) {
	  incol = 0;
	while (incol < 61) {
		cuadro[inren][incol] = 0;
		incol++;
	}
	inren++;
  }
}
void desplegar(int cuadro[61][61], int dim) {
	int inren = 0, incol;
	while (inren < dim) {
		incol = 0;
		while (incol < dim) {
			printf("%4d", cuadro[inren][incol]);
			incol++;
		}
		printf("\n");
		inren++;
	}
}

int main()
{
	int renglon, columna, renglona, columnaa, n, seq;
	int matriz[61][61];
	vaciar(matriz);
	do {
		printf("Captura dimencion de 3 a 61: ");
		scanf_s("%d", &n);
	}
		while ((n % 2) == 0 || n < 0);
			renglon = 0;
			columna = n / 2;
			seq = 1;
			while (seq <= (n * n)) {
				matriz[renglon][columna] = seq;
				seq++;
				renglona = renglon; columnaa = columna;
				renglon--; columna++;
				if (renglon < 0) { renglon += n; }
				if (columna > n - 1) { columna -= n; }
				if (matriz[renglon][columna] != 0) {
					renglon = renglona;
					columna = columnaa;
					renglon++;
				}
			}
			printf("\n\n");
			desplegar(matriz, n);
			printf("\n\n");
		}

	
