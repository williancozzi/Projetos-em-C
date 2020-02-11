//Escreva um programa em C que leia uma matriz 5 x 5 e um valor X. O programa deverá fazer uma busca desse valor na matriz e, ao final, 
//escrever a localização (linha e coluna) ou uma mensagem de “não encontrado”.
// Autor: Willian Cozzi Candido

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	
	int mat[5][5];
	int i, j, x, encontrou;
	
	encontrou = 0;
	for(i=0; i<5; i++) {
		for(j=0; j<5; j++) {
			printf("Digite o valor pra linha %d e pra coluna %d: \n", i, j);
			scanf("%d", &mat[i][j]);
		}
	}
	system("cls");
	printf("Digite o valor a ser pesquisado na matriz: \n");
	scanf("%d", &x);
	
	for(i=0; i<5; i++) {
		for(j=0; j<5; j++) {
			if(x == mat[i][j]) {
				encontrou = 1;
				printf("Posicao do valor %d: [%d][%d].\n\n", x, i, j);
				break;
			} 
		}
	}
	if(encontrou == 0) {
		printf("\nO valor %d nao foi encontrado!\n", x);
	}
}
