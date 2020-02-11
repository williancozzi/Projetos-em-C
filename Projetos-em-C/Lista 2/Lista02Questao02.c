//Implementar um programa em C que lê um nome e uma senha (entre 4 e 8 caracteres) e 
//verifica e o usuário está autorizado ou não. Para essa verificação, o programa mantém 
//uma lista de nomes e respectivas senhas. O programa mostra mensagens de erro se o nome 
//ou a senha estiverem incorretos. São permitidas até 3 tentativas.

main(){
	char nomes[3][25] = {"wesley","elias","felipe"};
	char senhas[3][8] = {"1234","2345","45678"};
	int i, cont, aux=0;
	char nome[25];
	char senha[8];
	cont = 1;
	do{
		cont++;
		puts("Informe nome do usuario: ");
		gets(nome);
		puts("Informe a senha: ");
		do{
			gets(senha);
			if(strlen(senha)<4 || strlen(senha)>8)
				puts("Informe uma senha entre 4 e 8 caracteres!");
		}while(strlen(senha)<4 || strlen(senha)>8);
		for(i=0;i<3;i++){
			if((strcmp(nome,nomes[i])==0)&&(strcmp(senha,senhas[i])==0))
				aux = 1;
		}
		if(aux==1){
			puts("Acesso autorizado!");
			break;
		}else
			if(cont<=3){
				puts("Acesso negado!");
				puts("Tente novamente!");
			}else
				puts("Limite de tentativas excedido!");
			
	}while(cont<=3);
}
