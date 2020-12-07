#include <stdio.h>
int dar(int m){
	if(m == 1) return 1;
	dar(m-1);
}

int main(){
	int n;
	scanf("%d", &n);
	printf("%d", dar(n));
}
