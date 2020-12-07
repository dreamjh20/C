#include<stdio.h>
int age(int a){
	return 2020-a+1;
}
/*
1 3 5
2 4 6
*/
int main(){
	int arr[2][3];
	int i, j;
	for(i = 0; i < 3; i++){
		for(j = 0; j < 2; j++)	scanf("%d", &arr[j][i]);
	}
	for(i = 0; i < 3; i++){
		for(j = 0; j < 2; j++)	printf("%d", &arr[j][i]);
	}
	return 0;
}
