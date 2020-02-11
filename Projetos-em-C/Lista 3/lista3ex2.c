/*
Nome: Eric Daniel
Matricula: UC18100545
Data: 20/08/2018
Sintese: Ler 10 números inteiros e armazenar em um vetor v. Copiar valores
ímpares para um vetor v1 e pares para um vetor v2. Imprimir v1 e v2.
*/

#include <stdio.h>
#include <stdlib.h>


int main(){
	int v[10], v1[10], v2[10];

	for (int i = 0; i < 10; ++i){
		printf("Digite o %do numero:\n", i+1);
		scanf("%d", &v[i]);
		if (v[i]%2!=0){
			v1[i]=v[i];
			v2[i]=0;
		} else {
			v1[i]=0;
			v2[i]=v[i];
		}
	}

	system("cls");
	printf("Vetor v1:\n");
	for (int i = 0; i < 10; ++i){
		if (v1[i]!=0){
			printf("%d\n", v1[i]);
		}
	}
	printf("\nVetor v2:\n");
	for (int i = 0; i < 10; ++i){
		if (v2[i]!=0){
			printf("%d\n", v2[i]);
		}
	}

	return 0;
}