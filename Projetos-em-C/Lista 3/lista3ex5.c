/*
Nome: Eric Daniel
Matricula: UC18100545
Data: 20/08/2018
Sintese: Ler os elementos de duas matrize 4x4 e imprimir uma terceira
com os maiores valores de cada posição das matrizes lidas.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	int matriz1[4][4], matriz2[4][4];

	system("cls");
	printf("Matriz A:\n");
	for (int i = 0; i < 4; ++i){
		for (int j = 0; j < 4; ++j){
			printf("Digite o valor do elemento a[%d][%d]\n", i+1, j+1);
			scanf("%d", &matriz1[i][j]);
		}
	}

	system("cls");
	printf("Matriz B:\n");
	for (int i = 0; i < 4; ++i){
		for (int j = 0; j < 4; ++j){
			printf("Digite o valor do elemento b[%d][%d]\n", i+1, j+1);
			scanf("%d", &matriz2[i][j]);
		}
	}

	system("cls");
	printf("Matriz C:\n");
	for (int i = 0; i < 4; ++i){
		for (int j = 0; j < 4; ++j){
			if(matriz1[i][j]>matriz2[i][j]){
				printf("%d	", matriz1[i][j]);
			} else {
				printf("%d	", matriz2[i][j]);
			}
		}
		printf("\n");
	}

	return 0;
}