#include <stdio.h>
int min(int a, int b){
	if(a<b){
		return a;
	}
	else{
		return b;
	}
}

int main() {
	int n, m;
	scanf("%d %d", &n, &m);
	printf("%d\n", min(n, m));
}
