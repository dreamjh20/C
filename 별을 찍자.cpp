#include <stdio.h>

int main(){
	int i, n, j;
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		for(j=i; j<n+1; j++){
			printf("*");
		}
		printf("\n");	
	}
	printf("\n");
//	scanf("%d", &n);
//	for(i=0; i<n; i++){
//		for(j=i+1; j<=n; j++){
//			printf("*");
//		}
//		printf("\n");
//	} 
}
