#include <stdio.h>
int com(int n, int m, int l){
	if(n>m){
		if(n>l) return n;
		else return l;
	}else {
		if(m>l) return m;
		else return l;
	}
}

int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	printf("%d", com(a, b, c));
	return 0;
}
