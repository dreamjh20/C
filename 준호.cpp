#include <stdio.h>

int main() {
	long a, b, c;
	scanf("%lf %lf %lf", &a, &b, &c);
	printf("%.lf\n", a+b+c);
	printf("%.1lf", (a+b+c)/3);
}
