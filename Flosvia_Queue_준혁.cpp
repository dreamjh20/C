#include <stdio.h>
#include <windows.h>

int arr[10];

int push(int n){
	int arr[n];
	for(int i=0; i<n; i++){
		scanf("%d", &arr[i]);
//		printf("%d ", arr[i]);
		return arr[i];
	} 
	
}

int pop(int m){
	for(int i=0; i<m; i++){
		return arr[i];
	}
}


int main() {
	int c, n, m;
	int arr[100];
	while(1){
		printf("1. ���� �ֱ�\n");
		printf("2. ���� ����\n");
		printf("3. ����\n");
		scanf("%d", &c);
		if(c==1){
			printf("�� ���� ���ڸ� �ְ� �ʹ�? 10������ ���� �� �ִܴ�.\n");
			scanf("%d", &n);
			push(n);
			system("cls");
		}
		
		else if(c==2){
			printf("�� ���� ���ڸ� �� �ٱ�?");
			scanf("%d", &m);
			pop(m);
			system("cls");
		}
		else {
			printf("����");
			break;
		}
	}
	return 0;
}
