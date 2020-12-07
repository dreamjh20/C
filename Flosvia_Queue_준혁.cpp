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
		printf("1. 원소 넣기\n");
		printf("2. 원소 빼기\n");
		printf("3. 종료\n");
		scanf("%d", &c);
		if(c==1){
			printf("몇 개의 숫자를 넣고 싶니? 10개까지 넣을 수 있단다.\n");
			scanf("%d", &n);
			push(n);
			system("cls");
		}
		
		else if(c==2){
			printf("몇 개의 숫자를 빼 줄까?");
			scanf("%d", &m);
			pop(m);
			system("cls");
		}
		else {
			printf("종료");
			break;
		}
	}
	return 0;
}
