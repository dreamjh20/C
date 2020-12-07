#include <stdio.h>

int main(){
	int n, m, i, j;
	scanf("%d %d", &n, &m);
	printf("+");
	for(i=0; i<n-2; i++){
		printf("-");
	}
	printf("+");
	printf("\n");
	
	for(j=0; j<m-2; j++){
		printf("|");
		for(i=0; i<n-2; i++){
			printf(" ");
		} 
		printf("|\n");
	}
	
	printf("+");
	for(i=0; i<n-2; i++){
		printf("-");
	}
	printf("+");
	printf("\n");	
}
