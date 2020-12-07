#include <stdio.h>
float deg(int a){
	return a*1.8+32;
}

int main() {
	int n;
	scanf("%d", &n);
	printf("%.2f", deg(n));
	return 0;
}
