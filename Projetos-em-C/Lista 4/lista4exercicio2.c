// Autor: Willian Cozzi Candido
/*2. Crie um programa em C para gerar uma matriz 4 x 4 com valores no intervalo [1 a 20]. Depois transforme a matriz gerada em uma matriz 
triangular inferior, ou seja, atribuindo zero a todos os elementos acima da diagonal principal, por fim imprima a matriz original e a matriz transformada. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	
	int mat[4][4];
	int i, j;
	
	for(i=0; i<4; i++) {
		for(j=0; j<4; j++) {
			do {
				printf("Digite o valor pra linha %d e pra coluna %d: \n", i, j);
				scanf("%d", &mat[i][j]);
			} while (mat[i][j]<=0 || mat[i][j]>20);
		}
	}
	printf("\n\n");
	system("cls");
	
	for(i=0; i<4; i++) {
		printf("\n");
		for(j=0; j<4; j++) {
			printf(" %2d ", mat[i][j]);
			mat[i][j] = mat[i][j];
		}
	}
	printf("\n\n");
	printf("Aperte qualquer tecla para transformar a matriz gerada em uma matriz triangular inferior ");
	getche();
	
	system("cls");
	printf("Matriz original: \n");
	for(i=0; i<4; i++) {
		printf("\n");
		for(j=0; j<4; j++) {
			printf(" %2d ", mat[i][j]);
			mat[i][j] = mat[i][j];
		}
	}
	
	printf("\n\nMatriz transformada: \n");
	for(i=0; i<4; i++) {
		printf("\n");
		for(j=0; j<4; j++) {
			if(i<j) {
				int x = 0;
				printf(" %2d ", x);
			}else{
				printf(" %2d ", mat[i][j]);
				mat[i][j] = mat[i][j];
			}
		}
	}	
	
	printf("\n\n");
	system("pause");
}

