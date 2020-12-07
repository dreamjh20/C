#include <stdio.h>

int a, b;
/* 이 부분에 들어가야 될
		코드를 작성하여 제출하시오. */
int gce(int n, int m){
	for(int i=0; n>i; n--){
		if(m%n == 0) return n;
	}
}

int main(){
  scanf("%d%d", &a, &b);
  printf("%d\n", gcd(a, b));
}
