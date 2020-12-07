#include <stdio.h>

int main() {
	char arr[20];
	int i;
	for(i=0; i<20; i++){
		scanf("%c", &arr[i]);
	}
	for(i=0; i<20; i++){
		printf("%c", arr[i]);
	}
	return 0;
}
