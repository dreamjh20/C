#include<stdio.h>

int main(){
	int a;
	scanf("%d", &a);
	
	if(a>0){
		printf("%d 양수입니다.", a);
	}
	if(a==0){
		printf("%d 0입니다.", a);
	}
	if(a<0){
		printf("%d 음수입니다.", a);
	}
} 
