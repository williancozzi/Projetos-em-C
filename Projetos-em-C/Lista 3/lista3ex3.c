/*
Nome: Eric Daniel
Matricula: UC18100545
Data: 20/08/2018
Sintese: Ler 10 números diferentes e armazenar num vetor na ordem que
forem lidos. Caso o usuário digite um valor já armazenado, pedir para
que o mesmo insira outro número. 
*/

#include <stdio.h>
#include <stdlib.h>

void initValues(int values[10]){
	for (int i = 0; i < 10; ++i){
		values[i]=0;
	}
}

int search(int value, int values[10]){
	int found = 0;

	for (int i = 0; i < 10; ++i){
		if(value==values[i]){
			found=1;
			break;
		}
	}
	return found;
}

int main(){
	int values[10], value;

	system("cls");
	initValues(values);
	for (int i = 0; i < 10; ++i){
		start:
		printf("Digite o %do valor:\n", i+1);
		scanf("%d", &value);

		if(search(value, values)){
			printf("Este valor ja existe no vetor.\n");
			goto start;
		} else {
			values[i]=value;
		}
	}

	system("cls");
	printf("Vetor digitado:\n");
	for (int i = 0; i < 10; ++i){
		printf("%d\n", values[i]);
	}

	return 0;
}