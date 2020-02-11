#define MAX 100
#include<stdio.h>
#include <locale.h>
#include <string.h>

main () {
	setlocale(LC_ALL,"portuguese");
	
	int student[MAX], n, confirm, id, pesq;
	float grades[MAX];
		
		pesq=0;
		confirm=0;
		n=0;
		
		do {
			printf("Matricula do %dº aluno: \n",n+1);
			scanf("%d",&student[n]);
			printf("\nNota do %dº aluno: \n",n+1);
			scanf("%f",&grades[n]);
			printf("\n\nDeseja adicionar mais um aluno?\n");
			printf("1. Para adicionar novo aluno.\n");
			printf("2. Para pesquisar aluno.\n");
			scanf("%d",&confirm);
			system("cls");
			n++;
		} while(confirm==1 && n<MAX);
		
		confirm=0;
		system("cls");
		do {
			pesq++;
			printf("Número de pesquisas: %d\n\n", pesq);
			printf("Informe a matricula a ser pesquisada:");
			scanf("%d",&id);
			for(n=0;n<MAX;n++) {
				if(id==student[n]) {
					printf("Matricula:	%d\n",student[n]);
					printf("Nota:	%.1f",grades[n]);
				}
			}
			printf("\n\n\n");
			printf("Deseja pesquisar outra matricula?\n");
			printf("1. Para pesquisar nova matricula.\n");
			printf("2. Para sair do programa.");
			scanf("%d",&confirm);
			system("cls");
		} while(confirm==1 || pesq<10);
	
	

	
}






