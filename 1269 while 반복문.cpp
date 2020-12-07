#include<stdio.h>

int main(){
	int a, b, c, n;
	scanf("%d %d %d %d", &a, &b, &c, &n);
	while(1<n){
		a = a*b+c; 
		n--;
	}
	printf("%d",a);
}
