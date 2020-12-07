#include <stdio.h>

int main(){
	int arr[7] = {};
	int i, sum=0, min = 100;
	for(i=0; i<7; i++){
		scanf("%d", &arr[i]);
		if(arr[i]%2 == 1){
			sum+=arr[i];
			if(arr[i]<min){
				min = arr[i];
			}	
		}
	}
	printf("%d\n", sum);

	printf("%d", min);
	return 0;
}
