#define MAX 10
main(){
	int vet[MAX];
	int i, x, valor;
	
	for(i=0;i<MAX;i++){
		printf("Informe o valor: %d\n", i+1);
		scanf("%d", &valor);
		if(i==0)
			vet[i]=valor;
		else{
			x=0;
			do{
				if(valor==vet[x]){
					printf("O valor ja existe, digite novo: \n");
					scanf("%d", &valor);
					x=-1;
				}
				x++;					
			}while(x<i);
			vet[i]=valor;
		}	
	}
	for(i=0;i<MAX;i++){
		printf("%d ", vet[i]);
	}
	printf("\n\n");
	system("pause");
	
	
}
