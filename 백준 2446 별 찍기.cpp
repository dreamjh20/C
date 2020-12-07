#include <stdio.h>

int main(void) {
	int a, b, i, j, k, n, m;
	scanf("%d", &n);
	m=n;
	for(i=0; i<n; i++){
//		printf("A");
		for(k=0; k<i; k++){
			printf(" ");
		}
		for(j=0; j<m*2-1; j++){
			printf("*");
		}
		printf("\n");
	}
}
