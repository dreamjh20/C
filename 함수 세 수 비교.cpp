#include <stdio.h>
int com(int m, int n, int k){
	if(m>n){
		if(m>k){
			return m;
		} 
		else if(k>m){
			return k;
		}
		else return n;
	}
	
}
int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	printf("%d", com(a, b, c));
	return 0;
}
