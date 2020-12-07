#include <stdio.h>

int main(){
	int N, i, min = 1001, max = -1;
	scanf("%d", &N);
	int bdc[1001];	
	for(i=0; i<N; i++){
		scanf("%d", &bdc[i]);
		if(bdc[i]>max){
		max = bdc[i];
		}
		if(bdc[i]<min){
		min = bdc[i];
		}
	}
	printf("%d", max - min);
	return 0;
}

