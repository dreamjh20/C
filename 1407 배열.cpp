#include <stdio.h>

int main() {
	char arr[101], i;
	gets(arr);
	for(i=0; arr[i]!=0; i++){
		if(arr[i]==' '){
			continue;
		}
		printf("%c", arr[i]);
	}
}
