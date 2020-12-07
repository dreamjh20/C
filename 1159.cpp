#include <stdio.h>

int main(void) {
	int a, b, i, j;
	scanf("%d", &a);
//	(a>50&&a<70)?(printf("win")):(printf("lose")); 
	if(a>=50&&a<=70) printf("win");
	else if(a%6==0) printf("win");
//	if(a%6==0){
	else printf("lose");
}

