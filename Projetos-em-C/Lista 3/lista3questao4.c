#define LINHA 3
#define COLUNA 3

main(){
	int mat[LINHA][COLUNA];
	int i, j;
	
	for(i=0;i<LINHA;i++)
		for(j=0;j<COLUNA;j++){
			printf("Informe o valor para linha: %d e coluna: %d\n", i, j);
			scanf("%d", &mat[i][j]);
		}
	for(i=0;i<LINHA;i++){
		printf("\n");
		for(j=0;j<COLUNA;j++)
			if(i!=j)
				printf("%3d ", mat[i][j]);
			else
				printf("    ");
				
	}
	printf("\n\n");
	system("pause");
}
