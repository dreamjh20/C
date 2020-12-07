#include <stdio.h>

int main() {
	int jeong, hap;
	do{
		printf("정수 입력\n ");
		scanf("%d", &jeong);
		if(jeong==0) break;
		hap+=jeong;
	}while(1);
	printf("합계: %d", hap);
} 
