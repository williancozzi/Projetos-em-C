// Autor: Willian Cozzi Candido
/*2. Construa um algoritmo no Calango e seu respectivo programa em C para cadastro de pacientes de um consultório, 
onde o usuário deverá informar o nome, sexo, plano de saúde (Unimed, IPASGO, Climed, Mamed e Plameg) e sintomas. 
O médico irá atender a 50 pacientes, e apenas 10 pacientes de cada plano, 
caso se ultrapasse esse limite deverá aparecer uma mensagem “Limite de consulta para o plano <nome do plano> excedido!”*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main()
{
	int unimed, ipasgo, climed, mamed, plameg, cont, plano;
	char nome[20], sexo, sintoma[20];

	unimed = 0;
	ipasgo = 0;
	climed = 0;
	plameg = 0;
	cont = 0;
	
	for(cont = 0; cont<=50; cont++);
	{
		printf("Informe seu nome: ");
		gets(nome);
	
		do 
		{
			printf("\nInforme seu sexo - Aperte F para feminino ou M para masculino: ");
			sexo=getche();
		}
		while(sexo !='m' && sexo != 'f' && sexo !='M' && sexo != 'F');
			printf("\n\nDigite o seu plano:\n");
			printf("Digite 1 para Unimed\n");
			printf("Digite 2 para IPASGO\n");
			printf("Digite 3 para Climed\n");
			printf("Digite 4 para Mamed\n");
			printf("Digite 5 para Plameg\n");
			scanf("%i",&plano);
		do
		{
			if(plano == 1)
			{
				unimed = unimed + 1;
				if(unimed >=11)
				{
					printf("Limite de consulta para o plano Unimed excedido!");
					unimed--;
					cont--;
				}
			}else if (plano == 2)
			{
				ipasgo = ipasgo + 1;
				if(ipasgo >=11)
				{
					printf("Limite de consulta para o plano IPASGO excedido!");
					ipasgo--;
					cont--;
				}
			}else if (plano == 3)
			{
				climed = climed + 1;
				if(climed >=11)
				{
					printf("Limite de consulta para o plano Climed excedido!");
					climed--;
					cont--;
				}
			}else if(plano == 4)
			{
				mamed = mamed + 1;
				if(mamed >=11)
				{
					printf("Limite de consulta para o plano Mamed excedido!");
					mamed--;
					cont--;
				}
			}
			else if(plano == 5)
			{
				plameg = plameg + 1;
				if(plameg >=11)
				{
					printf("Limite de consulta para o plano Plameg excedido!");
					plameg--;
					cont--;
				}
			}
		}while(plano <= 0 && plano >=5);
	}
	//

}
