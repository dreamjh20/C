#include<stdio.h>

int main(){
	int a;
	printf("시험 점수를 입력하세요.");
	scanf("%d", &a);
	if(90<=a)printf("A");
	else if(80<=a)printf("B");
	else if(70<=a)printf("C");
	else if(60<=a)printf("D");
	else printf("F");
}
