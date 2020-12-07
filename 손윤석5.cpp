#include <stdio.h>

int main(){
	int arr[2][3]={};
	int i, j;
	for(i=0; i<3; i++){
		for(j=0; j<2; j++){
			scanf("%d", &arr[j][i]);
			
		}
	}
	for(j=0; j<3; j++){
		for(i=0; i<3; i++){
			printf("%d", arr[j][i]);
		}
	printf("\n");
	}
	
} 
