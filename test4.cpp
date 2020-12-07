#include <stdio.h>

int main(){
	char arr[100];
	int i, count1 = 0, count2 = 0;
	scanf("%s", arr);
	for(i=0; i<100; i++){
		if(arr[i] == 'c'||arr[i] == 'C'){
			count1++;
		}
		if((arr[i] == 'C'||arr[i] == 'c')&&(arr[i+1] == 'C'||arr[i+1] == 'c')){
			count2++;
		}
	}
	printf("%d\n%d", count1, count2);
}
