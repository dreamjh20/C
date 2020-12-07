#include<stdio.h>

int main(){
	int a;
	scanf("%d", &a);
	int arr[10]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	printf("%d\n", arr[a]);
	printf("%d",sizeof(arr)/sizeof(int));
}
