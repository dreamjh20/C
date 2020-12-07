#include <stdio.h>

int main() {
	double arr[5]={1.1, 2.1, 3.1, 4.1, 5.1};
	double *ptr=arr;
	int i;
	for(i=0; i<5; i++) ptr[i] += 2;
	for(i=0; i<5; i++) printf("%.1f\n", ptr[i]);
	return 0;	
}
