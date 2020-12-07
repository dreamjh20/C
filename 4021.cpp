#include <stdio.h>

int main(){
	int bdc[7] = {};
	int i, sum = 0;
	for(i=0; i<7; i++){
		scanf("%d", &bdc[i]);
		if(bdc[i]%2 == 1){
			sum+=bdc[i];
		}	
	}
	if(sum == 0){
		printf("-1");
	}
	else printf("%d", sum);
	return 0;
}
