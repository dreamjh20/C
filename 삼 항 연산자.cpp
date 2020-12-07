#include <stdio.h>

int main(void) {
	int result=0, num1, num2;
	scanf("%d %d", &num1, &num2);
	(num1>num2)?(result = num2):(result = num1);
	printf("%d", result);
}
