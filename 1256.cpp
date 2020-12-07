#include<stdio.h>

int main(){
	int a, b=0;
	scanf("%d", &a);
	do{
		printf("*");
		b++;
	} while(b<a);
}
