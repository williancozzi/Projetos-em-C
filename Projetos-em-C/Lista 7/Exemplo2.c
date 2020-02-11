#include<stdio.h>

struct pessoa{
	char nome[25];
	int idade;
	char sexo;
	struct pessoa *prox;
};
typedef struct pessoa Pessoa;

Pessoa* cadastrar(Pessoa *l){
	Pessoa *a;
	a=(Pessoa *)malloc(sizeof(Pessoa));
	printf("Digite o nome da pessoa:\n");
	gets(a->nome);
	fflush(stdin);
	printf("Digite a idade:\n");
	scanf("%i", &a->idade);
	fflush(stdin);
	printf("Digite o sexo:\n");
	a->sexo=getche();
	printf("\n\n");
	fflush(stdin);
	a->prox = l;
	return a;
}

main(){
	Pessoa *p, *aux;
	p=NULL;
	int i, op;
	i=0;
	do{
		printf("1-Cadastrar\n");
		printf("2-Exibir\n");
		scanf("%i", &op);
		fflush(stdin);
		switch(op){
			case 1:
					p=cadastrar(p);
					i++;
					break;
			case 2:
					for(aux = p;aux!=NULL;aux = aux->prox){
						printf("Nome: %s\n", aux->nome);
						printf("Idade: %i\n",aux->idade);
						printf("Sexo: ");
						if(aux->sexo == 'm' || aux->sexo=='M')
							printf("Masculino\n");
						else
							printf("Feminino\n");
						printf("Endereco do proximo: %i\n\n", aux->prox);
					}
					break;
			default:
				printf("Opcao invalida!\n");
		}
	}while(1);
}

