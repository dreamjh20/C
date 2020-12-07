#include<stdio.h>

int main(){
	int i, j, n, m;
	scanf("%d %d", &n, &m);
	for(i=1; i<n+1; i++){
		for(j=1; j<m+1; j++){
			printf("%d %d",i ,j );
			printf("\n");
		}
	}
}

