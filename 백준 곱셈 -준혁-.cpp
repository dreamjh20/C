#include <stdio.h>

int main(void) {
	int A, B;
	scanf("%d %d", &A, &B);
	int C;
	C=B/100;
	int D;
	D=(B-100*C)/10;
	int E;
	E=(B-100*C-10*D);
	printf("%d\n", A*E);
	printf("%d\n", A*D);
	printf("%d\n", A*C);
	//printf("%d", D);
	//printf("%d", E);
	printf("%d", A*B);
}
