#include <stdio.h>

int main(void) {
	int a, b, i, j, k, h;
	scanf("%d", &a);
	for(i=1; i<=a; i++){
		for(j=0; j<i; j++){
		printf("*");
		}
		printf("\n");
	}
	for(k=a-1; k>0; k--){
		for(h=0; h<k; h++){
			printf("*");
		}
		printf("\n");
	}
}
