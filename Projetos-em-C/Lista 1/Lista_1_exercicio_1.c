// Autor: Willian Cozzi Candido
/*1. A importância de R$ 780.000,00 será dividida entre três ganhadores de um concurso. Sendo que da quantia total:
• O primeiro ganhador receberá 46%;
• O segundo receberá 32%;
• O terceiro receberá o restante;
Construa um algoritmo no Calango e seu respectivo programa em C que calcule e imprima a quantia ganha por cada um dos ganhadores.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	float premioTotal, ganhador1, ganhador2, ganhador3;
	
	premioTotal = 780000;
	ganhador1 = premioTotal*0.46;
	ganhador2 = premioTotal*0.32;
	ganhador3 = premioTotal*0.22;
	
	printf("Loteria - Premio total de R$%.2f\n",premioTotal);
	printf("\n\nO ganhador numero 1 faturou: R$%.2f", ganhador1);
	printf("\nO ganhador numero 2 faturou: R$%.2f", ganhador2);
	printf("\nO ganhador numero 3 faturou: R$%.2f", ganhador3);
}


