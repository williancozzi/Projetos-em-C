#include<stdio.h>
#include <locale.h>
#include <string.h>

struct dados {
	char nome[3][25];
	char endereco[3][40];
	int telefone [3];
};


main (){
	setlocale(LC_ALL,"portuguese");
	
	int i;
	struct dados d;
	
	for(i=0; i<3;i++) {
		printf("Informe o nome da %d� pessoa: \n",i+1);
		fflush(stdin);
		gets(d.nome[i]);
		printf("Informe o endere�o da %d� pessoa: \n",i+1);
		gets(d.endereco[i]);	
		printf("Informe o n�mero de telefone da %d� pessoa: \n",i+1);
		scanf("%d",&d.telefone[i]);
	}
	
	system("cls");
	printf("OS DADOS SALVOS FORAM:\n\n");
	for(i=0; i<3;i++) {
		printf("%d� dado salvo:\n\n",i+1);
		printf("Nome:	%s.",d.nome[i]);
		printf("	Endere�o:	%s.",d.endereco[i]);
		printf("	Telefone:	%d.",d.telefone[i]);
		printf("\n\n\n");
	}
}


