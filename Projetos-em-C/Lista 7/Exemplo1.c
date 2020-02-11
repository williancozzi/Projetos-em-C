#include<stdio.h>
main(){
	int *x, *y;
	x = NULL;
	x = (int *)malloc(sizeof(int));
	*x = 10;
	y = x;
	//free(x);
	printf("%i\n", *y);

}
