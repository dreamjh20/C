#include<stdio.h>

int main(){
	int a,b;
	scanf("%d %d", &a,&b);
	printf("두 수의 합: "); 
	printf("%d\n", a+b);
	printf("두 수의 합: ");
	printf("%d\n", a-b);
	printf("두 수의 곱: ");
	printf("%d\n", a*b);
	printf("두 수의 나누기(몫): ");
	printf("%d\n", a/b);
	printf("두 수의 나누기(나머지): ");
	printf("%d\n", a%b);
	return 0;
}
