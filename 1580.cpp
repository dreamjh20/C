#include <stdio.h>
float circle(int a){
	return 3.14 * a * a;
}

int main() {
	int r;
	scanf("%d", &r);
	printf("%.2f", circle(r));
	return 0;
}
