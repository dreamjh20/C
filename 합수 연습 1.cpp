#include <stdio.h>

int add(int a, int b){
	printf("\"Hello World!\"\n");
	printf("%d\n", a+b);
	printf("%d\n", a*b); 
}

int main() {
	int num1, num2, result;
	scanf("%d %d", &num1, &num2);
	add(num1, num2);
	return 0;
}
