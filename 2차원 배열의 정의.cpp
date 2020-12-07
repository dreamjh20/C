#include <stdio.h>

int main(){
	int arr[4][5], i, j, sum;
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			scanf("%d", &arr[i][j]);
		}
	}
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			sum = sum+arr[i][j];
		}
	}
}
