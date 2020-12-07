#include <stdio.h>
int asc(int *a, int len) {
	int t = 0; 
	for(int i=0; i<len-1; i++){
		for(int j=1+i; j<len; j++){
			if(*(a+i)>*(a+j)){
				t=*(a+j);
				*(a+j)=*(a+i);
				*(a+i)=t;
			}
		}
	}
	return 0;
}

int des(int *a, int len) {
	int t = 0;
	for(int i=0; i<len-1; i++){
		for(int j=1+i; j<len; j++){
			if(*(a+i)>*(a+i)){
				t=*(a+j);
				*(a+j)=*(a+i);
				*(a+i)=t;
			}
		}
	}
}



int main() {	
	int i, j, n, t;
	char c[3];
	printf("오름차순(ㅇ) or 내림차순(ㄴ): ");
	scanf("%c", &c);
	printf("몇 개의 숫자를 정렬해 줄까? "); 
	scanf("%d", &n);
	
	int arr[n]={}; //100
	for(i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	if(c[0]=='ㄴ'){
		asc(arr, n); //100
	}else {
		des(arr, n);
	}
		
	for(i=0; i<n; i++){
		printf("%d ", arr[i]);
	}
	return 0;
}
