#include <stdio.h>

int main() {
	int arr[10];
	int a=0, i;
	for(i=19; i>=0; i-=2){
		arr[a]=i;
		printf("%d\n", arr[a]);
		a++; 
	}	
}
