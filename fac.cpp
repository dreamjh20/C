#include <stdio.h>

int fac(int m){
	if(m == 1) return 1;
	return m+fac(m-1);
}

int main(){
	int n;
	scanf("%d", &n);
	printf("%d", fac(n));
}
