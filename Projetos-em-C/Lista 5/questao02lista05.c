
#include<stdio.h>
#include <locale.h>
#include <string.h>

struct dadosAluno {
	char nome[25];
	int idade;
};


main (){
	setlocale(LC_ALL,"portuguese");
	
	struct dadosAluno aluno1;
	
	printf("Informe o nome do aluno:\n");
	gets(aluno1.nome);
	printf("Informe a idade do aluno: \n");
	scanf("%d",&aluno1.idade);
	
	printf("%s\n",aluno1.nome);
	printf("%d",aluno1.idade);

}


