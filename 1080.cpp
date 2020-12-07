#include <stdio.h>

int main(void) {
	int sum=0, n, i;
	scanf("%d", &n);
	for(i=0; sum<n; i++){
		sum+=i;		
	}
	printf("%d", i-1);
}
