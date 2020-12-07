#include<stdio.h>

int main(){
	int arr[7] = {};
	int hb=0, jb=0;
	for(int i = 0; i<7; i++){
		scanf("%d",&arr[i]);
		if(arr[i]%2 == 1 && arr[i]>=hb) hb=arr[i];
		else if(/*arr[i]%2==0 && */arr[i]>jb) jb = arr[i];
	}
	
	printf("%d", hb+jb);
	return 0;
}
