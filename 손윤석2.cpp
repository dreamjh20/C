#include <stdio.h>

int main() {
	int a,  c;
	char b;
	scanf("%d %c %d", &a, &b, &c);
	switch(b){
		case '+':
			printf("%d + %d = %d", a, c, a+c);
			break;
		case '*':
			printf("%d * %d = %d", a, b, a*b);
			break;
		case '/':
			printf("%d / %d = %d", a, b, a/b); 
			break;
	}
}
