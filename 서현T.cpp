#include <stdio.h>

int main() {
	int a = 20 , b = 10, c = 1000;
	int* pa= &a;
	int* pb= &b;
	c=*pa; 
	*pa = *pb;
	*pb = c;
	c=0;
	printf("%d %d", *pb, *pa);
}
