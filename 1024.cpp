#include <stdio.h>

int main(){
	char arr[20]={}, i;
	for(i=0; i<20; i++){
		scanf("%c", &arr[i]);
		if(arr[i]=='\0') break;
		/*if(arr[i]==0) continue;*/
		printf("\'%c\'\n", arr[i]);
	}
	return 0;
}
