// Autor: Willian Cozzi Candido

/*2. Implementar um programa em C que l� um nome e uma senha (entre 4 e 8 caracteres) e verifica e o usu�rio est� autorizado ou n�o. 
Para essa verifica��o, o programa mant�m uma lista de nomes e respectivas senhas. O programa mostra mensagens de erro se o 
nome ou a senha estiverem incorretos. S�o permitidas at� 3 tentativas.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char login[8], senha[8];
    int cont, user=1, password=1;
    	
    for(cont=0; cont<3; cont++){
        printf("Login: ");    
    	fflush(stdin);      
    	gets(login);        
    	printf("Senha: ");  
    	fflush(stdin);    
    	gets(senha);    
    
    	user = strcmp (login, "willian"); 
    	password = strcmp (senha, "will123"); 
    	
    	if(user==0 && password==0){
    	printf("\nBem vindo!");
    	printf("\n\n");
  
    	break;
	
		}else printf("\nLogin ou senha invalida.");
		printf("\n\n");
	}
}
