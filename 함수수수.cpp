#include <stdio.h>
/*
1 1 1 1
1 1 1 1
2 2 2 2
2 2 2 2
*/
int main(){
	int arr[5][5]={};
	int i, j, k, result=0, sum=0, sum2[5];
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			scanf("%d", &arr[i][j]);
			sum2[j] += arr[i][j];
			sum+=arr[i][j];
			result+=arr[i][j];
			if(j == 3)	sum2[4] = sum;
		}
		arr[i][4]=sum;
		sum=0;
		arr[4][j]=result;
		result=0;
	}
	for(i=0; i<5; i++){
		for(j=0; j<5; j++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	
	for(i=0; i<5; i++) printf("%d ", sum2[i]);
}
