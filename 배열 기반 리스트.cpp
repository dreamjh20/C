#include<stdio.h>

void add(int *ptr, int index, int value){
	for (int i = 9; i > index; i--){
		ptr[i] = ptr[i - 1];
	}
	ptr[index] = value;
}

int del(int *ptr, int index){
	for(int i = index; i < 10; i ++) ptr[i] = ptr[i + 1];
	ptr[9] = 0;	
}

int main(){
	int arr[6] = {0, 1, 2, 4, 5};
	for(int i = 0; i < 5; i++){
		printf("%d ", arr[i]);
	}
}
