#include <stdio.h>

int main(void) {
	int n, i, j, k, l, h;
	scanf("%d", &n);
	k=n;
	h=n;
	for(i=1; i<=n; i++){
//		for(j=0; j<k; j++){
//			printf("A");
//		}
		for(j=1; j<=h-1; j++){
			printf(" ");
		}
		h--;
		for(k=1; k<=i; k++){
			printf("*");
		}
		printf("\n");
	}
}
