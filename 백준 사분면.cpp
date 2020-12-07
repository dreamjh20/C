#include<stdio.h>

int main(void) {
	int X, Y;
	scanf("%d %d", &X, &Y);
	if(X>0){
		if(Y>0){
			printf("1");
		}
		else printf("4");
	}
	if(X<0){
		if(Y>0) printf("2");
		else printf("3");
	}
}
