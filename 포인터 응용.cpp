#include<stdio.h>

int main(){
	int bdc[100]={};
	int i;
	int *lynn=bdc;
	for(i=0; i<100; i++){
		scanf("%d", &bdc[i]);
	}
	for(i=0; i<100; i++){
		printf("%d ", bdc[i] + i);
	}
}
