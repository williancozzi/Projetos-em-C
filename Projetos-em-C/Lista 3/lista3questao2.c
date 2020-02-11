#include<stdio.h>
#include <locale.h>
#include <string.h>

main () {
	setlocale(LC_ALL,"portuguese");
	
	int v[10], v1[10], v2[10], i;
	
	for(i=0; i<10;i++) {
		printf("%dº número: ",i+1);
		scanf("%d",&v[i]);
		printf("\n");
		v1[i]=0;
		v2[i]=0;
	} 
	
	for(i=0;i<10;i++) {
		if((v[i] % 2)==0) {
			v1[i] = v[i];
		} else {
			v2[i] = v[i];
		}
	}
	printf("V1: \n");
		for(i=0;i<10;i++) {
			if(!v1[i]==0) {
				printf("%d\n",v1[i]);
			}
		}
	
	printf("\n\n");
	
	printf("V2:\n");
		for(i=0;i<10;i++) {
			if(!v2[i]==0) {
				printf("%d\n",v2[i]);
			}
		}

	
}

