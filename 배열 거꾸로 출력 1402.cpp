#include <stdio.h>

int main() {
	int a, b, k, arr[10];
	scanf("%d", &k);
	for(a=0; a<k; a++) scanf("%d", &arr[a]);
	for(a>0; a--;) printf("%d ", arr[a]);
	return 0;
}
