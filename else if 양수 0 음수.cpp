#include<stdio.h>

int main(){
	int a;
	scanf("%d", &a);
	if(a==0) printf("%d은 0입니다.", a);
	else if(a>0) printf("%d은(는)양수입니다.", a);
	else printf("%d은(는)음수입니다.", a);
} 
