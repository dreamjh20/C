#include<stdio.h>

int main(){
	int a;
	scanf("%d", &a);
	if(a==0) printf("%d�� 0�Դϴ�.", a);
	else if(a>0) printf("%d��(��)����Դϴ�.", a);
	else printf("%d��(��)�����Դϴ�.", a);
} 
