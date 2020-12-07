#include <stdio.h>

int main() {
	int arr[5][5], i, j;
	for(i=0; i<5;i++){
		for(j=0; j<5; j++){
			scanf("%d", &arr[j][i]);
		}
	}
	for(i=0; i<5;i++){
		for(j=0; j<5; j++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
