#include <stdio.h>
#include <windows.h>

int main(){
	int ib;
	
	while(1){ 
	printf("1. �Ϻ�\n ");
	printf("2. �̱�\n ");
	printf("3. �߱�\n ");
	printf("4. �ѱ�\n ");
	printf("5. ������\n ");
	printf("������ �˰� ���� �����? ");
	scanf("%d", &ib);
	if(ib==1){
		printf("����(����\n");
	}
	else if(ib==2){
		printf("������ D.C.(������)\n");
	}
	else if(ib==3){
		printf("����¡ (����)\n");
	}
	else if(ib==4){
		printf("���� (����)\n");
	}
	else {
	printf("�����Կ�~"); 
	break; 
	}
	}
	return 0;
}

//	system("cls");
