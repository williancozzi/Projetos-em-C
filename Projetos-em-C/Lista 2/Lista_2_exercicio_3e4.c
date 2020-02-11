#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>

int menu(){
	int option;

	system("cls");
	printf("Ferramentas do Estudante\n\n\n");
	printf("1. Cadastrar nota;\n");
	printf("2. Pesquisar maior nota;\n");
	printf("3. Pesquisar menor nota;\n");
	printf("4. Calcular media total;\n");
	printf("5. Mostrar notas cadastradas;\n");
	printf("6. Pesquisar disciplina;\n");
	printf("7. Pesquisar nota;\n");
	printf("0. Sair.\n\n");
	printf("Escolha uma opcao: ");
	scanf("%d", &option);

	while(option<0 || option>7){
		system("cls");
		printf("Entrada invalida!!!\n\n");
		printf("Ferramentas do Estudante\n\n\n");
		printf("1. Cadastrar nota;\n");
		printf("2. Pesquisar maior nota;\n");
		printf("3. Pesquisar menor nota;\n");
		printf("4. Calcular media total;\n");
		printf("5. Mostrar notas cadastradas;\n");
		printf("6. Pesquisar disciplina;\n");
		printf("7. Pesquisar nota;\n");
		printf("0. Sair.\n\n");
		printf("Escolha uma opcao: ");
		scanf("%d", &option);
	}
	return option;
}

void showGrades(char dList[50][30], float gList[50], int* id){
	system("cls");
	printf("Notas cadastradas:\n\n");
	printf("Disciplina	Nota\n");
	for (int i = 0; i < *id; i++){
		printf("%s	%.2f\n", dList[i], gList[i]);
	}
}

void regGrade(char dList[50][30], float gList[50], int* id){
	int exit = 0;
	char again;
	do{
		system("cls");
		printf("Cadastro de Notas\n\n");
		printf("Digite a nota a ser cadastrada (utilize ponto ao inves de virgula):\n");
		fflush(stdin);
		scanf("%f", &gList[*id]);
		printf("Qual a disciplina desta nota?\n");
		fflush(stdin);
		gets(dList[*id]);

		*id +=1;
		showGrades(dList, gList, id);

		printf("\nDeseja inserir outra nota? (S/N)\n");
		again = getche();
		again = toupper(again);
		fflush(stdin);
		while(again!='S' && again!='N'){
			printf("Entrada Invalida!!!\n");
			printf("\nDeseja inserir outra nota? (S/N)\n");
			again = getche();
			again = toupper(again);
			fflush(stdin);
		}

		if (again=='N'){
			exit = 1;
		}
	}while(!exit);
}

void searchMax(char dList[50][30], float gList[50], int* id){
	int idMax;
	float max;

	system("cls");
	printf("Ferramentas do Estudante\n\n\n");

	if(*id==0){
		printf("Nao existe nenhuma nota cadastrada.\n\n");
		printf("Pressione qualquer tecla para voltar ao menu principal...\n");
		getch();
		fflush(stdin);
	} else {
		for (int i = 0; i <= *id; ++i){
			printf(".");
			if(i == 0){
				max = gList[i];
				idMax = i;
			} else {
				if(max<gList[i]){
					max = gList[i];
					idMax = i;
				}
			}
		}
		system("cls");
		printf("Ferramentas do Estudante\n\n\n");
		printf("Maior nota: %.2f em %s\n\n", max, dList[idMax]);
		printf("Pressione qualquer tecla para voltar ao menu principal...\n");
		getch();
		fflush(stdin);
	}
}

void searchMin(char dList[50][30], float gList[50], int* id){
	int idMin;
	float min;

	system("cls");
	printf("Ferramentas do Estudante\n\n\n");

	if(*id==0){
		printf("Nao existe nenhuma nota cadastrada.\n\n");
		printf("Pressione qualquer tecla para voltar ao menu principal...\n");
		getch();
		fflush(stdin);
	} else {
		for (int i = 0; i <= *id; ++i){
			printf(".");
			if(i == 0){
				min = gList[i];
				idMin = i;
			} else {
				if(min>gList[i]){
					min = gList[i];
					idMin = i;
				}
			}
		}
		system("cls");
		printf("Ferramentas do Estudante\n\n\n");
		printf("Menor nota: %.2f em %s\n\n", min, dList[idMin]);
		printf("Pressione qualquer tecla para voltar ao menu principal...\n");
		getch();
		fflush(stdin);
	}
}

void searchByDisc(char dList[50][30], float gList[50], int* id){
	char disc[30];
	int found = 0;

	system("cls");
	printf("Pesquisa de Nota\n\n\n");

	if(*id==0){
		printf("Nao existe nenhuma disciplina cadastrada.\n\n");
		printf("Pressione qualquer tecla para voltar ao menu principal...\n");
		getch();
		fflush(stdin);
	} else {
		printf("Digite uma disciplina para pesquisar a nota correspondente:\n");
		fflush(stdin);
		gets(disc);

		for (int i = 0; i <= *id; ++i){
			if(!strcmp(disc, dList[i])){
				printf("\nDisciplina: %s, nota: %.2f\n\n", dList[i], gList[i]);
				found = 1;
				break;
			}
		}
		if(!found){
			printf("A disciplina nao foi cadastrada ainda.\n\n");
		}

		printf("Pressione qualquer tecla para voltar ao menu principal...\n");
		getch();
		fflush(stdin);
	}
}

void searchByGrade(char dList[50][30], float gList[50], int* id){
	float grade;
	int found = 0;

	system("cls");
	printf("Pesquisa por Nota\n\n\n");

	if(*id==0){
		printf("Nao existe nenhuma nota cadastrada.\n\n");
		printf("Pressione qualquer tecla para voltar ao menu principal...\n");
		getch();
		fflush(stdin);
	} else {
		printf("Digite uma nota para pesquisar a disciplina correspondente:\n");
		scanf("%f", &grade);

		for (int i = 0; i <= *id; ++i){
			if(grade == gList[i]){
				printf("\nDisciplina: %s, nota: %.2f\n\n", dList[i], gList[i]);
				found = 1;
				break;
			}
		}
		if(!found){
			printf("A nota nao foi cadastrada ainda.\n\n");
		}

		printf("Pressione qualquer tecla para voltar ao menu principal...\n");
		getch();
		fflush(stdin);
	}
}

void calcAvrg(float gList[50], int* id){
	float sum = 0;

	system("cls");
	printf("Ferramentas do Estudante\n\n\n");

	if(*id==0){
		printf("Nao existe nenhuma nota cadastrada.\n\n");
		printf("Pressione qualquer tecla para voltar ao menu principal...\n");
		getch();
		fflush(stdin);
	} else {
		for (int i = 0; i <= *id; ++i){
			printf(".");
			sum += gList[i];
		}
		system("cls");
		printf("Ferramentas do Estudante\n\n\n");
		printf("Media entre as notas: %.2f", sum/(*id+1));
		printf("Pressione qualquer tecla para voltar ao menu principal...\n");
		getch();
		fflush(stdin);
	}
}

int main(){
	int exit;
	float gradeList[50];
	char discList[50][30];

	int id = 0;
	do{
		switch(menu()){
			case 0:
				exit = 1;
			break;
			case 1:
				regGrade(discList, gradeList, &id);
			break;
			case 2:
				searchMax(discList, gradeList, &id);
			break;
			case 3:
				searchMin(discList, gradeList, &id);
			break;
			case 4:
				calcAvrg(gradeList, &id);
			break;
			case 5:
				showGrades(discList, gradeList, &id);
				printf("\n\nPressione qualquer tecla para voltar ao menu principal...\n");
				getch();
				fflush(stdin);
			break;
			case 6:
				searchByDisc(discList, gradeList, &id);
			break;
			case 7:
				searchByGrade(discList, gradeList, &id);
			break;
		}
	}while(!exit);

	return 0;
}
