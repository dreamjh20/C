#include <stdio.h>

int main(){
	int arr[5][5]={};
	int i, j;
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			scanf("%d", &arr[i][j]);
			/*printf("% d", arr[i][j]);*/
		}
		printf("\n");	
	}
}
