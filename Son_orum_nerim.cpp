#include <stdio.h>

int main() {
	
	int i, j, n, t;
	scanf("�� ���� ���ڸ� ������ �ٱ�?%d", &n);
	int arr[n]={};
	for(i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	for(i=0; i<n-1; i++){
		for(j=1+i; j<n; j++){
			if(arr[i]>arr[j]){
				t=arr[j];
				arr[j]=arr[i];
				arr[i]=t;
			}
		}
	}

	for(i=0; i<n; i++){
		printf("%d ", arr[i]);
	}
	return 0;
}
