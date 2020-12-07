#include <stdio.h>

int gop(int a, int b){
	return a*b;
}

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d", gop(a, b));
	return 0;
}
