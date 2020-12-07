#include <stdio.h>

int main(void) {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	//(a>b)?((a>c)?(printf("%d", a))):((b>c)?(printf("%d", c)));
	//printf("%d", a<b ? a : b<c ? b : c);
	(a<b)?((a<c)?():())
}
