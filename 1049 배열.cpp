#include <stdio.h>

int main() {
	int k, i, arr[10];
//	scanf("%d", &k);
	for(i=0; i<10; i++) scanf("%d", &arr[i]);
	scanf("%d", &k);
	printf("%d", arr[k-1]);
}
