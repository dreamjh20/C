#include <stdio.h>

int main(){
	int su=0;
	while(su<100){
		su++;
		if(su%2==0||su%3==0) continue;
		printf("%d   ", su);
	
	}
}
