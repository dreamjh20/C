#include <stdio.h>

int main(void) {
	int a;
	printf("1�̻� 5������ ���� �Է� :");
	scanf("%d", &a);
	switch(a){
		case 1:
			printf("1�� one\n");
			break;
		case 2:
			printf("2�� two\n");
			break;
		case 3:
			printf("3�� three\n");
			break;
		case 4:
			printf("4�� four\n");
			break;
		case 5:	 
			printf("5�� five\n");
			break;
		defult:
			printf("I don't know");	
	} 
}
