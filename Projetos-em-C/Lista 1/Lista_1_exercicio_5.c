// Autor: Willian Cozzi Candido
/*5. Um armaz�m trabalha com 100 mercadorias diferentes identificadas pelos n�meros inteiros de 1 a 100. 
O dono do armaz�m anota a quantidade de cada mercadoria vendida durante o dia. Ele tem uma tabela que indica, para cada mercadoria, 
o pre�o de venda. Escreva um algoritmo e seu respectivo programa em C para calcular o faturamento di�rio do armaz�m. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main()
{
	int mercadorias[100], cont;
	float soma;
	
	soma = 0;
	
	for(cont = 0; cont < 100; cont++)
	{
		printf("Digite o valor da mercadoria %i: ",cont+1);
		scanf("%i",&mercadorias[cont]);
		soma = soma + mercadorias[cont];
	}
	
	printf("O faturamento diario foi de %0.2f reais.",soma);
}

