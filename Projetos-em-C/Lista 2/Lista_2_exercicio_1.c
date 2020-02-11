// Autor: Willian Cozzi Candido

/*1. Uma conta telefônica é composta dos seguintes custos:
• assinatura: R$ 17,90 
• impulsos: R$ 0,04 por impulso que exceder a 90 interurbanos
• chamadas p/ celular: R$0,09 por impulso
Elabore um programa em C que lê número de telefone, valor de interurbanos, quantidade de impulsos normais e para celular, 
e calcula o valor da conta. Após calcular uma conta, o programa pergunta se o usuário deseja calcular outra conta, reiniciando 
se a resposta for positiva.*/ 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int celular, interurbanos, difInt; 
	float conta, Icelular, dif;
	char opcao;
	
	conta = 17.90;
	difInt = 0;
	dif = 0;
	celular = 0;
	interurbanos = 0;
	Icelular = 0;
	
	do{
		do{
			system("cls");
			printf("Digite o numero do telefone: ");
			scanf("%d", &celular);
		} while (celular <= 0 || celular >999999999);
		fflush(stdin);
		
		printf("Digite o numero de interurbanos: ");
		scanf("%d", &interurbanos);
		if (interurbanos>90) 
		difInt = interurbanos - 90;
		fflush(stdin);
		
		printf("Digite o numero de impulsos para celular: ");
		scanf("%f", &Icelular);
		fflush(stdin);
		
		if (interurbanos<=90 && Icelular<=0)
		{
			printf("\nSem chamadas extras...\n");
		}else if(interurbanos>90 || Icelular>0){
		dif = difInt*0.04;
		dif = dif+(Icelular*0.09);
		conta = 17.90 + dif;
		}
		
		printf("\nA conta do telefone %d ficou em R$%.2f", celular, conta);
		printf("\n\nDeseja realizar outra conta telefonica?\n");
		printf("Digite 'S' para continuar ou qualquer outra tecla para sair.");
		opcao=getche();
	}while((opcao=='s') || (opcao=='S'));
}


