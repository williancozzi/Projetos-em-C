/*
Sintese: Ler matriculas e notas de ate 100 alunos. Ler e armazenar informacoes
enquanto o usuario desejar. Apos, consultar notas digitando matriculas. Permitir
ate 10 consultas no mesmo ciclo de execucao.
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>
#include <string.h>

void cadastre(int regs[100], float grades[100]){
	int count = 0;

	do{
		system("cls");
		printf("Cadastro %d de 100\n\n", count+1);
		printf("Digite a matricula do aluno:\n");
		scanf("%d", &regs[count]);
		printf("Digite a nota do aluno\n");
		scanf("%f", &grades[count]);

		char option;
		do{
			printf("Deseja inserir outro aluno? (S/N)");
			fflush(stdin);
			option = getche();
			printf("\n");
			option = toupper(option);
			if(option!='S' && option!='N'){
				printf("Entrada invalida!\n");
			}
		}while(option!='S' && option!='N');

		if (option=='N'){
			break;
		}
		count++;
	}while(count<100);
}


void search(int regs[100], float grades[100]){
	int count = 1,found, search;

	while(count<=10){
		system("cls");
		printf("Pesquisa de Notas\n\n");
		printf("Pesquisa %d de 10\n\n", count);
		printf("Digite uma matricula para pesquisar a nota correspondente:\n");
		scanf("%d", &search);

		for (int i = 0; i < 100; ++i){
			if(search == regs[i]){
				printf("Matricula: %d\nNota: %.2f\n\n", regs[i], grades[i]);
				found = 1;
				break;
			} else {
				found = 0;
			}
		}

		if(!found){
			printf("Nao foi encontrada nota para a matricula inserida.\n\n");
		}

		if(count<10){
			char option;
			do{
				printf("Deseja realizar outra pesquisa? (S/N)");
				option = getche();
				printf("\n");
				option = toupper(option);
				if(option!='S' && option!='N'){
					printf("Entrada invalida!\n");
				}
			}while(option!='S' && option!='N');
			if(option=='N'){
				break;
			}
		}
		count++;
	}
}

int main(){
	int regs[100];
	float grades[100];

	cadastre(regs, grades);

	search(regs, grades);

	return 0;
}
