#include <stdio.h>

int a, b;
/* �� �κп� ���� ��
		�ڵ带 �ۼ��Ͽ� �����Ͻÿ�. */
int gce(int n, int m){
	for(int i=0; n>i; n--){
		if(m%n == 0) return n;
	}
}

int main(){
  scanf("%d%d", &a, &b);
  printf("%d\n", gcd(a, b));
}
