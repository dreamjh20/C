#include <stdio.h>

int main(){
	char bdc[100];
	int i, count1 = 0, count2=0;
	scanf("%s", bdc);
	for(i=0; i<100; i++){
		if(bdc[i] == 'C'||bdc[i] == 'c'){
			count1++;
			if(bdc[i+1] == 'C'||bdc[i+1] == 'c') count2++;
		}
	}
	printf("%d\n%d", count1, count2);
	return 0;
}
