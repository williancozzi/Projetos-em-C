// Autor: Willian Cozzi Candido

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float oddSum(float matrix[3][6]){
	float sum = 0;
	int i, j;
	
	for (i = 0; i < 3; ++i){
		for (j = 0; j < 6; ++j){
			if((j+1)%2!=0){
				sum+=matrix[i][j];
			}
		}
	}
	return sum;
}

float avrg2_4(float matrix[3][6]){
	float sum;
	int i, j;
	
	for (i = 0; i < 3; ++i){
		for (j = 0; j < 6; ++j){
			if((j+1)==2 || (j+1)==4){
				sum+=matrix[i][j];
			}
		}
	}

	return sum/6;
}

void replace(float matrix[3][6]){
	int i;
	
	for (i = 0; i < 3; ++i){
		matrix[i][5]=matrix[i][0]+matrix[i][1];
	}
}

int main(){
	float matrix[3][6];
	int i, j; 
	
	system("cls");
	printf("Matriz A\n");
	for (i = 0; i < 3; ++i){
		for (j = 0; j < 6; ++j){
			printf("Digite o valor do elemento a[%d][%d]:\n", i+1, j+1);
			scanf("%f", &matrix[i][j]);
		}
	}

	system("cls");
	printf("Matriz A:\n");
	for (i = 0; i < 3; ++i){
		for (j = 0; j < 6; ++j){
			printf("%.2f	", matrix[i][j]);
		}
		printf("\n");
	}
	printf("\nSoma dos elementos das colunas impares: %.2f\n\n", oddSum(matrix));
	printf("Media dos elementos da 2a e 4a colunas: %.2f\n\n", avrg2_4(matrix));
	replace(matrix);
	printf("Matriz A modificada:\n");
	
	for (i = 0; i < 3; ++i){
		for (j = 0; j < 6; ++j){
			printf("%2.2f	", matrix[i][j]);
		}
		printf("\n");
	}

	return 0;
}





