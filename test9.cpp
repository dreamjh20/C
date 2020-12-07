#include <stdio.h>

int main(){
	int i, j, n;
	scanf("%d", &n);
	for(i=1; i<n+1; i++){
		for(j=0; j<i; j++){
			printf(" ");
		}
		for(j=i-1; j<n; j++){
			printf("*");
		}
		printf("\n");
	}
//	for(i=1; i<n+1; i++){
//		for(j=i; j<n; j++){
//			printf("*");
//		}
//		printf("\n");
//	}
	return 0;
}
