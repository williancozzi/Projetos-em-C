#define LINHA 4
#define COLUNA 4
#define PROF 4

main(){
	int mat[LINHA][COLUNA][PROF];
	int k, i, j, valor;
	
	for(i=0;i<LINHA;i++) {
		for(j=0;j<COLUNA;j++){
			printf("Informe o valor para linha: %d e coluna: %d\n", i, j);
			scanf("%d", &valor);
				if(k>i+j) {
					mat[k]=valor;
			    }	
		}
		for(i=0;i<LINHA;i++) {
			printf("\n");
				for(j=0;j<COLUNA;j++) {
					printf("%d ", mat[k][i][j]);
				}
		}
	}
	printf("\n\n");
	system("pause");
}
