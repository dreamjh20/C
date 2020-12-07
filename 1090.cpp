#include <stdio.h>

int main(void) {
	int a, n, r, i;
	long long int sum;
	scanf("%d %d %d", &a, &r, &n);
	sum = a;
	for(i=0; i<n-1; i++){
		sum*=r;
	}
	printf("%lld", sum);
}
