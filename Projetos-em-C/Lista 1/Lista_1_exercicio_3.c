// Autor: Willian Cozzi Candido
/*3. Desenvolva um algoritmo no Calango e seu respectivo programa em C que possua um vetor denominado A que armazene 6 números inteiros. 
O programa deve executar os seguintes passos: 
a) Atribua os seguintes valores a esse vetor: 1, 0, 5, -2, -5, 7. 
b) Armazene em uma variável inteira (simples) a soma entre os valores das posições A[0], A[1] e A[5] do vetor e mostre na tela esta soma. 
c) Modifique o vetor na posição 4, atribuindo a esta posição o valor 100. 
d) Mostre na tela cada valor do vetor A, um em cada linha.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main ()
{
	int cont, soma;	
	int a[6] = {1, 0, 5, -2, -5, 7};
	
	printf("A)\n");
	for(cont=0;cont<6;cont++) {
		printf("%d \n",a[cont]);
	}
	
	soma = a[0] + a[1] + a[5];
	printf("\nB)\n");
	printf("%d\n",soma);
	
	printf("\nC)\n");
	a[4]=100;
	printf("%d\n",a[4]);
	
	printf("\nD)\n");
	for(cont=0;cont<6;cont++) {
		printf("%d \n",a[cont]);
	}
	
	
	
	

}


