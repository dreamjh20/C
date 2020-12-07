#include <stdio.h>

int main() {
	
	int i, j, n, t;
	scanf("몇 개의 숫자를 정렬해 줄까?%d", &n);
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
