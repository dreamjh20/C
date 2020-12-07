#include<stdio.h>

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	
	
	
	while(a<b+1){
		printf("%d\t",a);
		a++;
	}
	while(a+1>b){
		printf("%d\t",b);
		b++;
	}	
} 
