#include<stdio.h>

int main(){
	int i, n, hap=0;
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		hap+=i;
	}
	printf("%d", hap);
	return 0;
}
