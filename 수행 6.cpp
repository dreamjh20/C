#include <stdio.h>
int calc(int n, char b, int m){
	switch(b){
		case'+':
			return(n + m);
			break;
		case'-':
			return(n - m);
			break;	
		case'*':
			return(n * m);
			break;
		case'/':
			return(n / m);
			break;
	return 0;			
	}
}
int main() {
	int num1, num2, result;
	char op;
	
	scanf("%d %c %d", &num1, &op, &num2);
	result = calc(num1, op, num2);
	printf("%d", result);
	return 0;
} 
