#include <stdio.h>

int main(){
	int hak = 0, arr[4], a;
	printf("�й��� ����?  ");
	scanf("%d", &a);
	hak = (a/1000);
	if(hak==1){
		printf("�������");
	}
	else if(hak>3){
		printf("���� �� �г��� �³���?");
	} 
	else{
		hak = a%1000/100;
		switch(hak){
			case 1:
				printf("����");
				break;
			case 2:
				printf("����");	
				break;
			case 3:
				printf("�Ӻ�");
				break;
			case 4:
				printf("����");	
				break;
			default:
				printf("���� �� ���� �³���?");	
		}
	}
	return 0;
}
