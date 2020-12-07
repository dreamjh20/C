#include <stdio.h>

int main(){
	char arr[100]={}, i;
	for(i=0; i<101; i++){
		scanf("%c", &arr[i]);
		if(arr[i]=='\0') break;		
		if(arr[i]==' ') continue;
		printf("%c", arr[i]);
	}
	printf("\n");
	return 0;
}
