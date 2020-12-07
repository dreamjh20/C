#include<stdio.h>

int main(){
	int a, b, c, n, i;
	scanf("%d %d %d %d", &a, &b, &c, &n);
	for(i=0; i<n-1; i++) a = a * b + c;
	printf("%d",a);
} 
