#include <stdio.h>
int dar(int m){
	if(m==0) return 0;
	dar(m-1);
	printf("%d\n", m);
	
}

int main(){
	int n;
	scanf("%d", &n);
	dar(n);
}
