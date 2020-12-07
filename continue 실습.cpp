#include <stdio.h>

int main(void) {
	int i;
	for(i=0; i<=100; i++){
		if(i%2==0||i%3==0) continue;
//		if(i%3==0) continue;
		printf("%d\n", i);
	}
}
