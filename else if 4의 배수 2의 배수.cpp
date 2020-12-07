#include<stdio.h>

int main(){
	int a;
	scanf("%d", &a);
	if(a%4==0) printf("\"4의 배수입니다.\"");
	else if(a%2==0) printf("\"2의 배수입니다.\"");
	else printf("\"4의 배수도, 2의 배수도 아닙니다.\"");
}
