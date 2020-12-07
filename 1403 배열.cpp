#include <stdio.h>

int main() {
	int k, i, arr[k];
	scanf("%d", &k);
	for(i=0; i<k; i++){
		scanf("%d", &arr[i]);
		printf("%d\n", arr[i]);
	}
	for(i=0; i<k; i++){
		printf("%d\n", arr[i]);
	}
}
