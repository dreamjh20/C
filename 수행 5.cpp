#include <stdio.h>

int main(){
	int arr[2][4]={};
	int i, j, a;
	for(i=0; i<4; i++){
		for(j=0; j<2; j++){
			scanf("%d", &arr[i][j]);
		}
	}
	
//	for(i=0; i<4; i++){
//		for(j=0; j<2; j++){
//			printf("%d", arr[i][j]);
//		}
//	}
	
	
	for(j=0; j<4; j++){
		for(i=0; i<2; i++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	
	printf("%d %d\n", 1, 5);
	printf("%d %d\n", 2, 6);
	printf("%d %d\n", 3, 7);
	printf("%d %d\n", 4, 8);
} 
