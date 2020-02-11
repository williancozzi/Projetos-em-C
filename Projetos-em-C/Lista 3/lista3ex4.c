/*
Nome: Eric Daniel
Matricula: UC18100545
Data: 20/08/2018
Sintese: Ler os elementos de uma matriz 6x6 e imprimir todos os elementos,
exceto os da diagonal principal.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	int matriz[6][6];

	system("cls");
	for (int i = 0; i < 6; ++i){
		for (int j = 0; j < 6; ++j){
			printf("Digite o valor a[%d][%d]\n", i+1, j+1);
			scanf("%d", &matriz[i][j]);
		}
	}

	system("cls");
	printf("Matriz A\n");
	for (int i = 0; i < 6; ++i){
		for (int j = 0; j < 6; ++j){
			if(i!=j){
				printf("%d	", matriz[i][j]);
			} else {
				printf(" 	");
			}
		}
		printf("\n");
	}

	return 0;
}