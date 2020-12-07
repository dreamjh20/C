#include <stdio.h>

int main(void) {
	int a, b, i, j;
	scanf("%d %d", &a, &b);
	do{
		b++;
		a+=5;
	} while(a<90);
	printf("%d", b);
}
