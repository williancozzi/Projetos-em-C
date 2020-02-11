#define MAX 30
#include <stdio.h>
float encontrarMedia(float notas[], int x);
int entrada(char disciplina[MAX][45], float nota[]);
main(){
	char disciplina[MAX][45];
	float nota[MAX];
	int maior, menor; 
	float media, soma;
	int i, opcao;
	char continuar;
	soma=0;
	i=entrada(disciplina, nota);
	do{
		opcao = menu();
		switch(opcao){
			case 1:
				maior = encontrarMaior(nota, i);
				printf("A posicao da nota maior: %d, a disciplina: %s e seu valor e = %.2f\n", maior,disciplina[maior], nota[maior]);
				break;
			case 2:
				menor = encontrarMenor(nota, i);
				printf("A posicao da nota menor: %d e seu valor e = %.2f\n", menor, nota[menor]);
				break;
			case 3:
				media = encontrarMedia(nota, i);
				printf("A media das notas = %.2f\n", media);
				break;
			default:
				puts("Opcao invalida!");
		}
	
	puts("Pressione qualquer tecla para continuar, menos s.");
	continuar=getch();
	system("cls");
	}while(continuar!='s');
	
}

int encontrarMaior(float notas[], int x){
	int i, aux;
	aux = 0;
	for(i=1;i<x;i++)
		if(notas[aux]<notas[i])
			aux=i;
	return aux;
}

int encontrarMenor(float notas[], int x){
	int i, aux;
	aux = 0;
	for(i=1;i<x;i++)
		if(notas[aux]>notas[i])
			aux=i;
	return aux;
}

float encontrarMedia(float notas[], int x){
	float soma;
	int i;
	soma=0;
	for(i=0;i<x;i++){
		soma+=notas[i];
	}
	return soma/x;
}
int menu(){
	int opcao;
	puts("Escolha o que deseja fazer:");
	puts("1-Mostrar a maior nota");
	puts("2-Mostrar a menor nota");
	puts("3-Mostrar a media das notas");
	scanf("%d", &opcao);
	return opcao;	
}
int entrada(char disciplina[MAX][45], float nota[]){
	int	i=0;
	do{
		fflush(stdin);
		puts("Informe o nome da disciplina: ");
		gets(disciplina[i]);
		fflush(stdin);
		printf("Informe a nota da disciplina: ");
		scanf("%f", &nota[i]);
		fflush(stdin);
		i++;
		puts("Pressione 's' para informar nova disciplina:");
	}while(getch()=='s' && i<MAX);
	return i;
}
