#include <stdio.h>

int main() {
	int arr[10];
	int a=0, i;
	for(i=1; i<=19; i+=2){
		arr[a]=i;
		printf("%d\n", arr[a]);
		a++; 
	}	
}
