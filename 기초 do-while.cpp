#include <stdio.h>

int main() {
	int jeong, hap;
	do{
		printf("���� �Է�\n ");
		scanf("%d", &jeong);
		if(jeong==0) break;
		hap+=jeong;
	}while(1);
	printf("�հ�: %d", hap);
} 
