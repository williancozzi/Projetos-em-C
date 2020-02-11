#include<stdio.h>
#define LADO 6
int main(){
	int matriz[LADO][LADO][LADO]={0};
	int indice,indice2,indice3,valor;
	valor=0;
	for(indice=0;indice<LADO;indice++){
		for(indice2=0;indice2<LADO;indice2++){
			for(indice3=0;indice3<LADO;indice3++){
				valor++;
				matriz[indice][indice2][indice3]=valor;
				printf("%003i ",matriz[indice][indice2][indice3]);
			}
			printf("\n");
		}	
	printf("\n");
	}
}
