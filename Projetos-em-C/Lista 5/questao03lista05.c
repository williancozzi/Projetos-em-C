#include<stdio.h>
#include <locale.h>
#include <string.h>

struct dados {
	char string[10];
	int inteiro;
};


main (){
	setlocale(LC_ALL,"portuguese");

	struct dados test = { "test1test2", 20 };
	
	printf("STRING:		%s",test.string);
	printf("\n");
	printf("INT:		%d",test.inteiro);
	

}


