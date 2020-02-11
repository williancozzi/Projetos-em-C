// 	Autor: Willian Cozzi Candido
/* Construa um algoritmo no Calango e seu respectivo programa em C contendo as seguintes funções que recebem um vetor V de números reais como parâmetro: 
 • Impressão normal do vetor. 
 • Impressão inversa. 
 • Função que retorna a média aritmética dos elementos do vetor. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float impressao (int cont, float v[]);
float media (int cont, float v[]);

main ()
{
	float v[5];
	int cont, i;
	

	
	for(cont=0; cont<5; cont++) {
		printf("Informe o valor %d: \n", cont+1);
		scanf("%f",&v[cont]);
	}
	system("cls");
	for(cont=0; cont<5; cont++) {
		printf("%.1f \n",impressao(cont, v));
	}
	printf("\n");
	
	for(i=4; i>=0; i--) {
		printf("%.1f \n",impressao(i,v));
	}
	
	printf("\n\nMedia = %.1f",media(i,v));
	
}

float impressao (int cont, float v[]) {
	return v[cont];
}

float media (int cont, float v[]) {
	float soma;
	soma=0;
	for(cont=0; cont<5; cont++) {
		soma=soma+v[cont];
	}
	soma=soma/5;
	return soma;
}

