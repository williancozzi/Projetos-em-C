#include<stdio.h>
#include <locale.h>
#include <string.h>

struct veiculo {
	char marca[20];
	char modelo[20];
	char cor[20];
	int portas;
	float motor;
};
void leVeiculo (struct veiculo v[], int *i);
int menu();
void apresentaVeiculos (struct veiculo v[], int cont, int i);


main () {
	setlocale(LC_ALL,"portuguese");

	int i, cont, e;
	i=0;
	
	struct veiculo v[10];
	
	do {
		e = menu();
		switch(e) {
			case 1:
				leVeiculo (&v,&i);
//				system("cls");
//				if(i==0) {
//					printf("Marca:	");
//					fflush(stdin);
//					gets(v[i].marca);
//					printf("\n");
//					printf("Modelo:	");
//					gets(v[i].modelo);
//					printf("\n");
//					printf("Cor:	");
//					gets(v[i].cor);
//					printf("\n");
//					printf("Portas:	");
//					scanf("%d",&v[i].portas);
//					printf("\n");
//					printf("Motor:	");
//					fflush(stdin);
//					scanf("%f",&v[i].motor);
//					i= 1;
//				} else {
//					system("cls");
//					printf("Marca:	");
//					fflush(stdin);
//					gets(v[i].marca);
//					printf("\n");
//					printf("Modelo:	");
//					gets(v[i].modelo);
//					printf("\n");
//					printf("Cor:	");
//					gets(v[i].cor);
//					printf("\n");
//					printf("Portas:	");
//					scanf("%d",&v[i].portas);
//					printf("\n");
//					printf("Motor:	");
//					fflush(stdin);
//					scanf("%f",&v[i].motor);
//					i++;
//				}
			break;
			case 2:
				apresentaVeiculos(v,cont,i);
//				system("cls");
//				printf("Veiculos já cadastrados:\n\n");
//
//				for(cont=0; cont<i; cont++) {
//					printf("Veiculo %dº:\n",cont+1);
//					printf("Marca: %s",v[cont].marca);
//					printf("\n");
//					printf("Modelo:	%s",v[cont].modelo);
//					printf("\n");
//					printf("Cor:	%s",v[cont].cor);
//					printf("\n");
//					printf("Portas:	%d",v[cont].portas);
//					printf("\n");
//					printf("Motor:	%.1f",v[cont].motor);
//					printf("\n\n\n");
//				}
			break;
		}
	} while(e!=3);
}



int menu () {
	int opcao;
	printf("1. para CADASTRAR novo veiculo.\n");
	printf("2. para VISUALIZAR os veiculos já cadastrados.\n");
	printf("3. para finalizar o programa.\n");
	scanf("%d", &opcao);
	return opcao;
}

void apresentaVeiculos (struct veiculo v[], int cont, int i) {
	system("cls");
	printf("Veiculos já cadastrados:\n\n");

	for(cont=0; cont<i; cont++) {
		printf("Veiculo %dº:\n",cont+1);
		printf("Marca: %s",v[cont].marca);
		printf("\n");
		printf("Modelo:	%s",v[cont].modelo);
		printf("\n");
		printf("Cor:	%s",v[cont].cor);
		printf("\n");
		printf("Portas:	%d",v[cont].portas);
		printf("\n");
		printf("Motor:	%.1f",v[cont].motor);
		printf("\n\n\n");
	}
}

void leVeiculo (struct veiculo v[], int *i) {
	system("cls");
		if(*i==0) {
			printf("Marca:	");
			fflush(stdin);
			gets((v[*i]).marca);
			printf("\n");
			printf("Modelo:	");
			gets((v[*i]).modelo);
			printf("\n");
			printf("Cor:	");
			gets((v[*i]).cor);
			printf("\n");
			printf("Portas:	");
			scanf("%d",&(v[*i]).portas);
			printf("\n");
			printf("Motor:	");
			fflush(stdin);
			scanf("%f",&(v[*i]).motor);
			*i= 1;
		} else {
			system("cls");
			printf("Marca:	");
			fflush(stdin);
			gets((v[*i]).marca);
			printf("\n");
			printf("Modelo:	");
			gets((v[*i]).modelo);
			printf("\n");
			printf("Cor:	");
			gets((v[*i]).cor);
			printf("\n");
			printf("Portas:	");
			scanf("%d",&(v[*i]).portas);
			printf("\n");
			printf("Motor:	");
			fflush(stdin);
			scanf("%f",&(v[*i]).motor);
			*i = *i+1;
		}
}
