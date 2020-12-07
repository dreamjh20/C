#include <stdio.h>

int main() {
	int n,m;
	scanf("%d", &n);
	m=n;
	for(int i=0; i<n; i++){
		for(int j=0;j<i;j++) printf(" ");
		for(int j=0; j<m*2-(2*i)-1; j++){
			printf("*");
		}printf("\n");
	}
	for(int i=0;i<n-1;i++){
		for(int j=3-i;j>0;j--) printf(" ");
		for(int j=0;j<m*2-(2*i)-1;j++)printf("")
		printf("*");
		printf("\n");
	}
	return 0; 
}
