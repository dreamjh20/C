#include <stdio.h>
int hap(int m){
	if(m<0) return 0;
	return m+hap(m-1);
}

int main(){
	int n;
	scanf("%d", &n);
	printf("%d", hap(n));
	return 0;
}
