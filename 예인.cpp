#include <stdio.h>

int main() {
	int a[5]={1,2,3,4,5};
	int* pa = &a[0];
	
	printf("%p %p", pa, a);
	
} 
