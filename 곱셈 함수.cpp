#include <stdio.h>
int mul(int a, int b){
	return a*b;
}

int main() {
	int num1, num2, result;
	scanf("%d %d", &num1, &num2);
	result = mul(num1, num2); 
	printf("%d", result);
	return 0;
	
}
