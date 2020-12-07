#include <stdio.h>

int main(void) {
	int A, B, C, D, E, F;
	scanf("%d %d", &A, &B); //372
	F=B;
	C=B%10;
	B/=10;
	D=B%10;
	B/=10;
//	printf("%d %d %d",B,D,C);
	printf("%d\n", C*A);
	printf("%d\n", D*A);
	printf("%d\n", B*A);
	printf("%d", A*F);
	
//	int C;
//	C=B/100;
//	int D;
//	D=(B-100*C)/10;
//	int E;
//	E=(B-100*C-10*D);
//	printf("%d\n", A*E);
//	printf("%d\n", A*D);
//	printf("%d\n", A*C);
//	//printf("%d", D);
//	//printf("%d", E);
//	printf("%d", A*B);
}
