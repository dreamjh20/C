#include<stdio.h>

int main(){
	int a;
	scanf("%d", &a);
	if(a%2==0){
	printf("%d는 짝수입니다.", a);
	}
	if(a%2==1) {
	printf("%d는 홀수입니다.", a);
	}
}
