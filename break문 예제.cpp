#include <stdio.h>

int main(void) {
	int n;
	while(1){
		scanf("%d", &n);
		if(n==0) break;
		printf("실행 중입니다.\n");
	}
	printf("끝났습니다.");
}
