/*

Data: 20/08/2018
Sintese: Ler os elementos de duas matrize 4x4 e imprimir uma terceira
com os maiores valores de cada posição das matrizes lidas.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int matriz[10][10];

	system("cls");
	for (int i = 0; i < 10; ++i){
		for (int j = 0; j < 10; ++j){
			if(i<j){
				matriz[i][j]=(2*i)+(7*j)-2;
			} else if(i>j){
				matriz[i][j]=(4*(pow(i,3))) + (5*(pow(j,2))) + 1;
			} else {
				matriz[i][j]=(3*(pow(i,2))) - 1;
			}
		}
	}

	for (int i = 0; i < 10; ++i){
		for (int j = 0; j < 10; ++j){
			printf("%d	", matriz[i][j]);
		}
		printf("\n");
	}
	return 0;
}
