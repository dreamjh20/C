#include <stdio.h>

int main() {
	int arr[5]={1,2,3,4,5};
	*(arr + 2)+=3;
	printf("%d", arr[2]);
}
