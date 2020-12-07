#include <stdio.h>

int main(void)
{
	int n, a;
	scanf("%d", &n);
	a=n;
	for(int i=0; i<a; i++){
		for(int j=0; j<i; j++){
			printf(" ");
		}
		for(int h=0; h<n; h++){
			printf("*");
		}
		n--;
	printf("\n");
	}
	
}
