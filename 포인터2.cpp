#include <stdio.h>

int main() {
	int arr1[5];
	double arr2[5];
	int *ptr1 = arr1;
	double *ptr2 = arr2;
	printf("%p %p\n", ptr1, ptr2);
	ptr1++; ptr2++;
	printf("%p %p", ptr1, ptr2);
	return 0; 
}
