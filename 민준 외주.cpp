#include <stdio.h>

int main(){
	int year;
	scanf("%d", &year);
	switch(year%12){
		case 0:
			printf("�����̶�");
			break;
		case 1:
			printf("�߶�");
			break;	 
		case 2:
			printf("����");
			break; 
		case 3:
			printf("������");
			break;
		case 4:
			printf("���");
			break;		
		case 5:
			printf("�Ҷ�");
			break;	
		case 6:
			printf("ȣ���̶�");
			break;	
		case 7:
			printf("�䳢��");
			break;	
		case 8:
			printf("���");
			break;	
		case 9:
			printf("���");
			break;	
		case 10:
			printf("����");
			break;	
		case 11:
			printf("���");
			break;	
	}
}
