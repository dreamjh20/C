#include <stdio.h>

int main(void){
	int N, i, j;
	scanf("%d", &N);
	for(j=1; j<=9; j++){
		printf("%d * %d = %d\n", N, j, N*j);
	}
}
