#include<stdio.h>
struct pessoa{
	char nome[25];
	int idade;
	char sexo;	
};
typedef struct pessoa Pessoa;
struct lista{
	Pessoa info;
	struct lista *prox;
};
typedef struct lista Lista;
Pessoa cadastrar(){
	Pessoa a;
	printf("Digite o nome da pessoa:\n");
	gets(a.nome);
	fflush(stdin);
	printf("Digite a idade:\n");
	scanf("%i", &a.idade);
	fflush(stdin);
	printf("Digite o sexo:\n");
	a.sexo=getche();
	fflush(stdin);
	return a;
}

Lista* inserir(Lista *l, Pessoa x){
	Lista *novo;
	novo=(Lista *)malloc(sizeof(Lista));
	novo->info = x;
	novo->prox = l;
	return novo;
}
	
main(){
	Lista *p, *aux;
	Pessoa a;
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
					a = cadastrar();
					p=inserir(p,a);
					i++;
					break;
			case 2:
					for(aux = p;aux!=NULL;aux = aux->prox){
						printf("Nome: %s\n", aux->info.nome);
						printf("Idade: %i\n",aux->info.idade);
						printf("Sexo: ");
						if(aux->info.sexo == 'm' || aux->info.sexo=='M')
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

